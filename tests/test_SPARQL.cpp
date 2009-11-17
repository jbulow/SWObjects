/* test_SPARQL.cpp - test the ../bin/SPARQL executable
 *
 * $Id: test_SPARQL.cpp,v 1.5 2008-12-04 22:37:09 eric Exp $
 */

#include <iostream>
#include <fstream>

#define BOOST_TEST_MODULE SPARQL
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

struct ExecResults {
    std::string s;
    ExecResults (const char* cmd) {
	s  = "execution failure";
	FILE *p = ::popen(cmd, "r");
	BOOST_REQUIRE(p != NULL);
	char buf[100];
	s = "";
	for (size_t count; (count = fread(buf, 1, sizeof(buf), p));)
	    s += std::string(buf, buf + count);
	pclose(p);
    }
};

bool operator== (ExecResults& tested, std::string& ref) {
    return tested.s == ref;
}

std::ostream& operator== (std::ostream& o, ExecResults& tested) {
    return o << tested.s;
}

BOOST_AUTO_TEST_CASE( D ) {
    ExecResults tested("../bin/SPARQL -D");
    BOOST_CHECK_EQUAL(tested.s, 
		      "{\n"
		      "  <> <http://www.w3.org/1999/02/22-rdf-syntax-ns#type> <http://usefulinc.com/ns/doap#Project> .\n"
		      "  <> <http://usefulinc.com/ns/doap#homepage> <http://swobj.org/SPARQL/v1> .\n"
		      "  <> <http://usefulinc.com/ns/doap#shortdesc> \"a semantic web query toolbox\"  .\n"
		      "}\n");
}

BOOST_AUTO_TEST_CASE( D_spo ) {
    ExecResults tested("../bin/SPARQL -D -e \"SELECT ?s ?p ?o WHERE {?s ?p ?o}\"");
    BOOST_CHECK_EQUAL(tested.s, 
		      "+----+---------------------------------------------------+----------------------------------------+\n"
		      "| ?s | ?p                                                | ?o                                     |\n"
		      "| <> | <http://www.w3.org/1999/02/22-rdf-syntax-ns#type> | <http://usefulinc.com/ns/doap#Project> |\n"
		      "| <> |           <http://usefulinc.com/ns/doap#homepage> |           <http://swobj.org/SPARQL/v1> |\n"
		      "| <> |          <http://usefulinc.com/ns/doap#shortdesc> |         \"a semantic web query toolbox\" |\n"
		      "+----+---------------------------------------------------+----------------------------------------+\n");
}


