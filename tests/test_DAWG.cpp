/* perform DAWG tests.
 * call from: ..
 * files: <tests>/data-r2  -- from http://www.w3.org/2001/sw/DataAccess/tests/data-r2/
 *
 * $Id: test_GraphMatch.cpp,v 1.5 2008-12-04 22:37:09 eric Exp $
 */

#define BOOST_TEST_DYN_LINK 1
#define BOOST_TEST_MODULE DAWG_tests
#include <boost/test/unit_test.hpp>
#include <boost/test/included/unit_test.hpp>

#include <iterator>
#include "SWObjects.hpp"
#include "SPARQLfedParser.hpp"
#include "RdfDB.hpp"
#include "ResultSet.hpp"

using namespace w3c_sw;

POSFactory f;
SPARQLfedDriver sparqlParser("", &f);

/* Sentinal to mark end of arrays of files: */
const char* Sentinel = "sentinel";

std::string readFile (const char* filename, const char* type) {
    std::ifstream dataStream(filename);
    if (!dataStream.is_open()) {
	std::string msg = std::string("failed to ") + std::string(type) + 
	    std::string(" data \"") + filename + std::string("\".");
	throw msg;
    }
    std::istreambuf_iterator<char> i(dataStream), e;
    std::string ret(i, e);
    dataStream.close();
    return ret;
}

void queryTest (const char* defGraphs[], const char* namGraphs[], 
		const char* queryFile, const char* resultsFile) {
    /* Parse query. */
    if (sparqlParser.parse_file(queryFile)) {
	std::string msg = std::string("failed to parse query \"") + 
	    queryFile + std::string("\".");
	throw msg;
    }

    /* Parse data. */
    RdfDB d;
    for (size_t i = 0; defGraphs[i] != Sentinel; ++i)
	f.parseTriples(d.assureGraph(NULL), 
		       readFile(defGraphs[i], "default graph"));
    for (size_t i = 0; namGraphs[i] != Sentinel; ++i)
	f.parseTriples(d.assureGraph(f.getURI(namGraphs[i])), 
		       readFile(namGraphs[i], "named graph"));

    /* Exectute query. */
    ResultSet got;
    sparqlParser.root->execute(&d, &got);

    /* Compare to expected results. */
    ResultSet expected(&f, readFile(resultsFile, "results"));
    BOOST_CHECK_EQUAL(got, expected);
}

/* Macros for terse test syntax: */
#define QTEST(Q, R) \
    queryTest(defaultGraphs, namedGraphs, Q, R);
#define S Sentinel

BOOST_AUTO_TEST_CASE( basic_Basic_Var_1 ) {
    const char* defaultGraphs[] = { "tests/data-r2/basic/data-5.ttl", S };
    const char* namedGraphs[] = { S };
    QTEST("tests/data-r2/basic/var-1.rq", "tests/data-r2/basic/var-1.srx");
}

// EOF
