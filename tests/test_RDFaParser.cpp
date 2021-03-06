/* test_RDFaParser.cpp - test RDFaParser.hpp
 *
 * $Id: test_RDFaParser.cpp,v 1.5 2008-12-04 22:37:09 eric Exp $
 */

/* test graph-matching.
 *
 */

#define BOOST_TEST_MODULE RDFaParser

#include <map>
#include <vector>

#define NEEDDEF_W3C_SW_SAXPARSER
#define NEEDDEF_W3C_SW_WEBAGENT
#include "SWObjects.hpp"
#include "TurtleParser.hpp"
#include "RDFaParser.hpp"

#if HTTP_CLIENT != SWOb_DISABLED
  W3C_SW_WEBAGENT<> WebClient;
#else /* HTTP_CLIENT == SWOb_DISABLED */
  #warning unable to test RDFa over HTTP
#endif /* HTTP_CLIENT == SWOb_DISABLED */

#if XML_PARSER != SWOb_DISABLED
  W3C_SW_SAXPARSER P;
#else
  #error RDFa tests require an XML parser
#endif

/* Keep all inclusions of boost *after* the inclusion of SWObjects.hpp
 * (or define BOOST_*_DYN_LINK manually).
 */
#include <boost/test/unit_test.hpp>
w3c_sw_PREPARE_TEST_LOGGER("--log"); // invoke with e.g. "--log *:-1,IO,Process:3"

using namespace w3c_sw;

AtomFactory F;
TurtleDriver turtleParser("", &F);
RDFaParser GRDFaParser("", &F, &P);

BOOST_AUTO_TEST_CASE( QName_eqiv ) {
    NSdInsulatedSAXparser::NSmapImpl m;
    m["p1"] = "ns1";
    m["p2"] = "ns1";
    m["p3"] = "ns3";
    NSdInsulatedSAXparser::SimpleNsMap ns(m);
    SWSAXhandler::QName q1("p1:foo", ns);
    SWSAXhandler::QName q2("p2:foo", ns);
    SWSAXhandler::QName q3("p3:foo", ns);
    SWSAXhandler::QName q4("p3:fop", ns);

    // test operator==
    BOOST_CHECK_EQUAL(q1, q1);
    BOOST_CHECK_EQUAL(q1, q2);
    BOOST_CHECK_NE(q1, q3);
    BOOST_CHECK_NE(q3, q4);

    // test operator<
    std::map<SWSAXhandler::QName, std::string> qs;
    qs[q1] = q1.asURI();
    qs[q2] = q2.asURI();
    qs[q3] = q3.asURI();
    qs[q4] = q4.asURI();
}

BOOST_AUTO_TEST_CASE( APC ) {
    DefaultGraphPattern tested;
    IStreamContext html("RDFaParser/APC.html");
    GRDFaParser.setBase("APC.html");
    GRDFaParser.parse(&tested, html);

    DefaultGraphPattern expected;
    turtleParser.setGraph(&expected);
    turtleParser.setBase("APC.html");
    IStreamContext reference("RDFaParser/APC.ttl", IStreamContext::FILE);
    turtleParser.parse(reference);
    turtleParser.clear(""); // clear out namespaces and base URI.
    BOOST_CHECK_EQUAL(tested, expected);
}

BOOST_AUTO_TEST_CASE( gabab ) {
    DefaultGraphPattern tested;
    const char* gabab = "http://hcls.deri.org/atag-data/gabab_example.html";
    IStreamContext html("RDFaParser/gabab.html", IStreamContext::FILE);
    GRDFaParser.setBase(gabab);
    try {
	GRDFaParser.parse(&tested, html);
    } catch (std::string e) {
	throw(std::string("exception while parsing RDFaParser/gabab.html: ").append(e));
    }

    DefaultGraphPattern expected;
    turtleParser.setGraph(&expected);
    turtleParser.setBase(gabab);
    IStreamContext reference("RDFaParser/gabab.ttl", IStreamContext::FILE);
    turtleParser.parse(reference);
    turtleParser.clear(""); // clear out namespaces and base URI.
    BOOST_CHECK_EQUAL(tested, expected);
}

/* invoke with e.g. -DHTTP_RDFa_test=http://mouni.local/RDFa-0.html */
#if HTTP_CLIENT != SWOb_DISABLED && defined(HTTP_RDFa_test)
BOOST_AUTO_TEST_CASE( by_http ) {
    DefaultGraphPattern tested;
    std::string s(WebClient.get(HTTP_RDFa_test));
    BOOST_CHECK_EQUAL(WebClient.getMediaType().substr(0, 9), "text/html");
    GRDFaParser.parse(&tested, s.begin(), s.end(), HTTP_RDFa_test);

    DefaultGraphPattern expected;
    turtleParser.setGraph(&expected);
    turtleParser.setBase(F.getURI(HTTP_RDFa_test));
    turtleParser.parse_file("RDFa-0.ttl");
    turtleParser.clear(""); // clear out namespaces and base URI.
    BOOST_CHECK_EQUAL(tested, expected);
}
#endif /* HTTP_CLIENT != SWOb_DISABLED */

