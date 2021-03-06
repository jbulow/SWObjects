BOOST_AUTO_TEST_CASE( add01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/add/manifest#add01";
    // name: ADD 1
    // manifest: sparql11-test-suite/add/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/add/add-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/add/add-01-post.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add01 ) */
BOOST_AUTO_TEST_CASE( add02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/add/manifest#add02";
    // name: ADD 2
    // manifest: sparql11-test-suite/add/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/add/add-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/add/add-default.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add02 ) */
BOOST_AUTO_TEST_CASE( add03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/add/manifest#add03";
    // name: ADD 3
    // manifest: sparql11-test-suite/add/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1"), LG("sparql11-test-suite/add/add-02-pre.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/add/add-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1"), LG("sparql11-test-suite/add/add-02-post.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add03 ) */
BOOST_AUTO_TEST_CASE( add04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/add/manifest#add04";
    // name: ADD 4
    // manifest: sparql11-test-suite/add/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/add/add-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1"), LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add04 ) */
BOOST_AUTO_TEST_CASE( add05 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/add/manifest#add05";
    // name: ADD 5
    // manifest: sparql11-test-suite/add/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1"), LG("sparql11-test-suite/add/add-03-pre.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/add/add-05.ru";
    const char* defaultGraph_out = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1"), LG("sparql11-test-suite/add/add-03-post.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add05 ) */
BOOST_AUTO_TEST_CASE( add06 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/add/manifest#add06";
    // name: ADD 6
    // manifest: sparql11-test-suite/add/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/add/add-06.ru";
    const char* defaultGraph_out = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add06 ) */
BOOST_AUTO_TEST_CASE( add07 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/add/manifest#add07";
    // name: ADD 7
    // manifest: sparql11-test-suite/add/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/add/add-07.ru";
    const char* defaultGraph_out = "sparql11-test-suite/add/add-01-post.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add07 ) */
BOOST_AUTO_TEST_CASE( add08 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/add/manifest#add08";
    // name: ADD 8
    // manifest: sparql11-test-suite/add/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/add/add-08.ru";
    const char* defaultGraph_out = "sparql11-test-suite/add/add-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/add/add-01-pre.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add08 ) */
BOOST_AUTO_TEST_CASE( insert_data_spo1 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-data-spo1";
    // name: Simple insert data 1
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/basic-update/insert-data-spo1.ru";
    const char* defaultGraph_out = "sparql11-test-suite/basic-update/spo.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_data_spo1 ) */
BOOST_AUTO_TEST_CASE( insert_data_spo_named1 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-data-spo-named1";
    // name: Simple insert data named 1
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/basic-update/insert-data-named1.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/spo.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_data_spo_named1 ) */
BOOST_AUTO_TEST_CASE( insert_data_spo_named2 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-data-spo-named2";
    // name: Simple insert data named 2
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/basic-update/spo.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/basic-update/insert-data-named2.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/spo2.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_data_spo_named2 ) */
BOOST_AUTO_TEST_CASE( insert_data_spo_named3 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-data-spo-named3";
    // name: Simple insert data named 3
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/basic-update/spo.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/basic-update/insert-data-named1.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/spo.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_data_spo_named3 ) */
BOOST_AUTO_TEST_CASE( insert_where_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-where-01";
    // name: INSERT 01
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/basic-update/insert-01-pre.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/basic-update/insert-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/basic-update/insert-01-post.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_where_01 ) */
BOOST_AUTO_TEST_CASE( insert_where_02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-where-02";
    // name: INSERT 02
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/basic-update/insert-02-pre.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/basic-update/insert-02.ru";
    const char* defaultGraph_out = "sparql11-test-suite/basic-update/insert-02-post.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/insert-02-g1-post.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_where_02 ) */
BOOST_AUTO_TEST_CASE( insert_where_03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-where-03";
    // name: INSERT 03
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/basic-update/insert-03-pre.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/basic-update/insert-03-g1-pre.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/basic-update/insert-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/basic-update/insert-03-post.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/insert-03-g1-post.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_where_03 ) */
BOOST_AUTO_TEST_CASE( insert_where_04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-where-04";
    // name: INSERT 04
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/basic-update/insert-04-pre.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/basic-update/insert-04-g1-pre.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/basic-update/insert-04.ru";
    const char* defaultGraph_out = "sparql11-test-suite/basic-update/insert-04-post.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/insert-04-g1-post.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_where_04 ) */
BOOST_AUTO_TEST_CASE( insert_using_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-using-01";
    // name: INSERT USING 01
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/basic-update/insert-using-01-pre.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/basic-update/insert-using-01-g1-pre.ttl", "http://example.org/g1"), LG("sparql11-test-suite/basic-update/insert-using-01-g2-pre.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/basic-update/insert-using-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/basic-update/insert-using-01-post.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/insert-using-01-g1-post.ttl", "http://example.org/g1"), LG("sparql11-test-suite/basic-update/insert-using-01-g2-post.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_using_01 ) */
BOOST_AUTO_TEST_CASE( insert_05a ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-05a";
    // name: INSERT same bnode twice
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/basic-update/insert-05a-g1-pre.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/basic-update/insert-05a.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/insert-05a-g3-post.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_05a ) */
BOOST_AUTO_TEST_CASE( insert_data_same_bnode ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-data-same-bnode";
    // name: INSERTing the same bnode with INSERT DATA into two different Graphs is the same bnode
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/basic-update/insert-data-same-bnode.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/insert-05a-g3-post.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_data_same_bnode ) */
BOOST_AUTO_TEST_CASE( insert_where_same_bnode ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-where-same-bnode";
    // name: INSERTing the same bnode with two INSERT WHERE statement within one request is NOT the same bnode
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/basic-update/insert-where-same-bnode-pre.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/basic-update/insert-where-same-bnode.ru";
    const char* defaultGraph_out = "sparql11-test-suite/basic-update/insert-where-same-bnode-pre.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/insert-where-same-bnode-g3-post.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_where_same_bnode ) */
BOOST_AUTO_TEST_CASE( insert_where_same_bnode2 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/basic-update/manifest#insert-where-same-bnode2";
    // name: INSERTing the same bnode with two INSERT WHERE statement within one request is NOT the same bnode even if both WHERE clauses have the empty solution mapping as the only solution.
    // manifest: sparql11-test-suite/basic-update/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/basic-update/insert-where-same-bnode-pre.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/basic-update/insert-where-same-bnode2.ru";
    const char* defaultGraph_out = "sparql11-test-suite/basic-update/insert-where-same-bnode-pre.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/basic-update/insert-where-same-bnode-g3-post.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( insert_where_same_bnode2 ) */
BOOST_AUTO_TEST_CASE( dawg_clear_default_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/clear/manifest#dawg-clear-default-01";
    // name: CLEAR DEFAULT
    // manifest: sparql11-test-suite/clear/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/clear/clear-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/clear/clear-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/clear/clear-g2.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/clear/clear-default-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/clear/empty.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/clear/clear-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/clear/clear-g2.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_clear_default_01 ) */
BOOST_AUTO_TEST_CASE( dawg_clear_graph_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/clear/manifest#dawg-clear-graph-01";
    // name: CLEAR GRAPH
    // manifest: sparql11-test-suite/clear/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/clear/clear-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/clear/clear-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/clear/clear-g2.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/clear/clear-graph-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/clear/clear-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/clear/clear-g2.ttl", "http://example.org/g2"), LG("sparql11-test-suite/clear/empty.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_clear_graph_01 ) */
BOOST_AUTO_TEST_CASE( dawg_clear_named_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/clear/manifest#dawg-clear-named-01";
    // name: CLEAR NAMED
    // manifest: sparql11-test-suite/clear/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/clear/clear-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/clear/clear-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/clear/clear-g2.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/clear/clear-named-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/clear/clear-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/clear/empty.ttl", "http://example.org/g1"), LG("sparql11-test-suite/clear/empty.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_clear_named_01 ) */
BOOST_AUTO_TEST_CASE( dawg_clear_all_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/clear/manifest#dawg-clear-all-01";
    // name: CLEAR ALL
    // manifest: sparql11-test-suite/clear/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/clear/clear-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/clear/clear-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/clear/clear-g2.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/clear/clear-all-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/clear/empty.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/clear/empty.ttl", "http://example.org/g1"), LG("sparql11-test-suite/clear/empty.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_clear_all_01 ) */
BOOST_AUTO_TEST_CASE( copy01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/copy/manifest#copy01";
    // name: COPY 1
    // manifest: sparql11-test-suite/copy/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/copy/copy-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/copy/copy-default.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( copy01 ) */
BOOST_AUTO_TEST_CASE( copy02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/copy/manifest#copy02";
    // name: COPY 2
    // manifest: sparql11-test-suite/copy/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/copy/copy-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/copy/copy-default.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( copy02 ) */
BOOST_AUTO_TEST_CASE( copy03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/copy/manifest#copy03";
    // name: COPY 3
    // manifest: sparql11-test-suite/copy/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/copy/copy-02.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/copy/copy-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( copy03 ) */
BOOST_AUTO_TEST_CASE( copy04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/copy/manifest#copy04";
    // name: COPY 4
    // manifest: sparql11-test-suite/copy/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/copy/copy-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( copy04 ) */
BOOST_AUTO_TEST_CASE( copy06 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/copy/manifest#copy06";
    // name: COPY 6
    // manifest: sparql11-test-suite/copy/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/copy/copy-06.ru";
    const char* defaultGraph_out = "sparql11-test-suite/copy/copy-01.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( copy06 ) */
BOOST_AUTO_TEST_CASE( copy07 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/copy/manifest#copy07";
    // name: COPY 7
    // manifest: sparql11-test-suite/copy/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/copy/copy-07.ru";
    const char* defaultGraph_out = "sparql11-test-suite/copy/copy-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/copy/copy-01.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( copy07 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_data_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-data/manifest#dawg-delete-data-01";
    // name: Simple DELETE DATA 1
    // manifest: sparql11-test-suite/delete-data/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-data/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-data/delete-data-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-data/delete-post-01s.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_data_01 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_data_02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-data/manifest#dawg-delete-data-02";
    // name: Simple DELETE DATA 2
    // manifest: sparql11-test-suite/delete-data/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete-data/delete-pre-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/delete-data/delete-data-02.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete-data/delete-post-01s.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_data_02 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_data_03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-data/manifest#dawg-delete-data-03";
    // name: Simple DELETE DATA 3
    // manifest: sparql11-test-suite/delete-data/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-data/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-data/delete-data-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-data/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_data_03 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_data_04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-data/manifest#dawg-delete-data-04";
    // name: Simple DELETE DATA 4
    // manifest: sparql11-test-suite/delete-data/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete-data/delete-pre-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/delete-data/delete-data-04.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete-data/delete-post-01f.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_data_04 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_data_05 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-data/manifest#dawg-delete-data-05";
    // name: Graph-specific DELETE DATA 1
    // manifest: sparql11-test-suite/delete-data/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-data/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete-data/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete-data/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete-data/delete-data-05.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-data/delete-post-01s.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete-data/delete-post-02f.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete-data/delete-post-03f.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_data_05 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_data_06 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-data/manifest#dawg-delete-data-06";
    // name: Graph-specific DELETE DATA 2
    // manifest: sparql11-test-suite/delete-data/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-data/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete-data/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete-data/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete-data/delete-data-06.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-data/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete-data/delete-post-03f.ttl", "http://example.org/g3"), LG("sparql11-test-suite/delete-data/delete-post-02s.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_data_06 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_insert_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-insert/manifest#dawg-delete-insert-01";
    // name: DELETE INSERT 1
    // manifest: sparql11-test-suite/delete-insert/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-insert/delete-insert-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-insert/delete-insert-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-insert/delete-insert-post-01.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_insert_01 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_insert_01b ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-insert/manifest#dawg-delete-insert-01b";
    // name: DELETE INSERT 1b
    // manifest: sparql11-test-suite/delete-insert/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-insert/delete-insert-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-insert/delete-insert-01b.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-insert/delete-insert-post-01b.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_insert_01b ) */
BOOST_AUTO_TEST_CASE( dawg_delete_insert_01c ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-insert/manifest#dawg-delete-insert-01c";
    // name: DELETE INSERT 1c
    // manifest: sparql11-test-suite/delete-insert/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-insert/delete-insert-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-insert/delete-insert-01c.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-insert/delete-insert-post-01b.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_insert_01c ) */
BOOST_AUTO_TEST_CASE( dawg_delete_insert_02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-insert/manifest#dawg-delete-insert-02";
    // name: DELETE INSERT 2
    // manifest: sparql11-test-suite/delete-insert/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-insert/delete-insert-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-insert/delete-insert-02.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-insert/delete-insert-post-02.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_insert_02 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_insert_04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-insert/manifest#dawg-delete-insert-04";
    // name: DELETE INSERT 4
    // manifest: sparql11-test-suite/delete-insert/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-insert/delete-insert-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-insert/delete-insert-04.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-insert/delete-insert-post-02.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_insert_04 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_insert_04b ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-insert/manifest#dawg-delete-insert-04b";
    // name: DELETE INSERT 4b
    // manifest: sparql11-test-suite/delete-insert/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-insert/delete-insert-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-insert/delete-insert-04b.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-insert/delete-insert-post-02.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_insert_04b ) */
BOOST_AUTO_TEST_CASE( dawg_delete_insert_05b ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-insert/manifest#dawg-delete-insert-05b";
    // name: DELETE INSERT 5b
    // manifest: sparql11-test-suite/delete-insert/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-insert/delete-insert-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-insert/delete-insert-05b.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-insert/delete-insert-post-05.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_insert_05b ) */
BOOST_AUTO_TEST_CASE( dawg_delete_insert_06b ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-insert/manifest#dawg-delete-insert-06b";
    // name: DELETE INSERT 6b
    // manifest: sparql11-test-suite/delete-insert/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-insert/delete-insert-pre-06.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-insert/delete-insert-05b.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-insert/delete-insert-pre-06.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_insert_06b ) */
BOOST_AUTO_TEST_CASE( dawg_delete_where_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-where/manifest#dawg-delete-where-01";
    // name: Simple DELETE WHERE 1
    // manifest: sparql11-test-suite/delete-where/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-where/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-where/delete-where-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-where/delete-post-01s.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_where_01 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_where_02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-where/manifest#dawg-delete-where-02";
    // name: Simple DELETE WHERE 2
    // manifest: sparql11-test-suite/delete-where/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete-where/delete-pre-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/delete-where/delete-where-02.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete-where/delete-post-01s.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_where_02 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_where_03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-where/manifest#dawg-delete-where-03";
    // name: Simple DELETE WHERE 3
    // manifest: sparql11-test-suite/delete-where/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-where/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete-where/delete-where-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-where/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_where_03 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_where_04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-where/manifest#dawg-delete-where-04";
    // name: Simple DELETE WHERE 4
    // manifest: sparql11-test-suite/delete-where/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete-where/delete-pre-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/delete-where/delete-where-04.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete-where/delete-post-01f.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_where_04 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_where_05 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-where/manifest#dawg-delete-where-05";
    // name: Graph-specific DELETE WHERE 1
    // manifest: sparql11-test-suite/delete-where/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-where/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete-where/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete-where/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete-where/delete-where-05.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-where/delete-post-01s.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete-where/delete-post-02f.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete-where/delete-post-03f.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_where_05 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_where_06 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete-where/manifest#dawg-delete-where-06";
    // name: Graph-specific DELETE WHERE 2
    // manifest: sparql11-test-suite/delete-where/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete-where/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete-where/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete-where/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete-where/delete-where-06.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete-where/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete-where/delete-post-03f.ttl", "http://example.org/g3"), LG("sparql11-test-suite/delete-where/delete-post-02s.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_where_06 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-01";
    // name: Simple DELETE 1
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete/delete-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01s.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_01 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-02";
    // name: Simple DELETE 2
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/delete/delete-02.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01s.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_02 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-03";
    // name: Simple DELETE 3
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete/delete-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_03 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-04";
    // name: Simple DELETE 4
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/delete/delete-04.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01f.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_04 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_05 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-05";
    // name: Graph-specific DELETE 1
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete/delete-05.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01s.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-post-03f.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_05 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_06 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-06";
    // name: Graph-specific DELETE 2
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete/delete-06.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-03f.ttl", "http://example.org/g3"), LG("sparql11-test-suite/delete/delete-post-02s.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_06 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_07 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-07";
    // name: Simple DELETE 7
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/delete/delete-07.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_07 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_with_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-with-01";
    // name: Simple DELETE 1 (WITH)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/delete/delete-with-01.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01s.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_with_01 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_with_02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-with-02";
    // name: Simple DELETE 2 (WITH)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/delete/delete-with-02.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01s.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_with_02 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_with_03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-with-03";
    // name: Simple DELETE 3 (WITH)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/delete/delete-with-03.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01f.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_with_03 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_with_04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-with-04";
    // name: Simple DELETE 4 (WITH)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/delete/delete-with-04.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01f.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_with_04 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_with_05 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-with-05";
    // name: Graph-specific DELETE 1 (WITH)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete/delete-with-05.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01s2.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-post-03f.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_with_05 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_with_06 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-with-06";
    // name: Graph-specific DELETE 2 (WITH)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete/delete-with-06.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-03f.ttl", "http://example.org/g3"), LG("sparql11-test-suite/delete/delete-post-02s.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_with_06 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_using_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-using-01";
    // name: Simple DELETE 1 (USING)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/delete/delete-using-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01s.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_using_01 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_using_02a ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-using-02a";
    // name: Simple DELETE 2 (USING)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete/delete-using-02.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-post-03f.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_using_02a ) */
BOOST_AUTO_TEST_CASE( dawg_delete_using_03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-using-03";
    // name: Simple DELETE 3 (USING)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-01.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/delete/delete-using-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-01f.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_using_03 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_using_04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-using-04";
    // name: Simple DELETE 4 (USING)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/delete/delete-pre-03.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete/delete-using-04.ru";
    const char* defaultGraph_out = "sparql11-test-suite/delete/delete-post-03f.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-post-03f.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_using_04 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_using_05 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-using-05";
    // name: Graph-specific DELETE 1 (USING)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete/delete-using-05.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01s2.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-post-03f.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_using_05 ) */
BOOST_AUTO_TEST_CASE( dawg_delete_using_06a ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/delete/manifest#dawg-delete-using-06a";
    // name: Graph-specific DELETE 2 (USING)
    // manifest: sparql11-test-suite/delete/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/delete/delete-pre-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-pre-02.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-pre-03.ttl", "http://example.org/g3")};
    const char* request = "sparql11-test-suite/delete/delete-using-06.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/delete/delete-post-01f.ttl", "http://example.org/g1"), LG("sparql11-test-suite/delete/delete-post-02f.ttl", "http://example.org/g2"), LG("sparql11-test-suite/delete/delete-post-03f.ttl", "http://example.org/g3")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_delete_using_06a ) */
BOOST_AUTO_TEST_CASE( dawg_drop_default_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/drop/manifest#dawg-drop-default-01";
    // name: DROP DEFAULT
    // manifest: sparql11-test-suite/drop/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/drop/drop-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/drop/drop-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/drop/drop-g2.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/drop/drop-default-01.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/drop/drop-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/drop/drop-g2.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_drop_default_01 ) */
BOOST_AUTO_TEST_CASE( dawg_drop_graph_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/drop/manifest#dawg-drop-graph-01";
    // name: DROP GRAPH
    // manifest: sparql11-test-suite/drop/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/drop/drop-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/drop/drop-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/drop/drop-g2.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/drop/drop-graph-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/drop/drop-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/drop/drop-g2.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_drop_graph_01 ) */
BOOST_AUTO_TEST_CASE( dawg_drop_named_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/drop/manifest#dawg-drop-named-01";
    // name: DROP NAMED
    // manifest: sparql11-test-suite/drop/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/drop/drop-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/drop/drop-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/drop/drop-g2.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/drop/drop-named-01.ru";
    const char* defaultGraph_out = "sparql11-test-suite/drop/drop-default.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_drop_named_01 ) */
BOOST_AUTO_TEST_CASE( dawg_drop_all_01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/drop/manifest#dawg-drop-all-01";
    // name: DROP ALL
    // manifest: sparql11-test-suite/drop/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/drop/drop-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/drop/drop-g1.ttl", "http://example.org/g1"), LG("sparql11-test-suite/drop/drop-g2.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/drop/drop-all-01.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( dawg_drop_all_01 ) */
BOOST_AUTO_TEST_CASE( move01 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/move/manifest#move01";
    // name: MOVE 1
    // manifest: sparql11-test-suite/move/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/move/move-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/move/move-01.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/move/move-default.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( move01 ) */
BOOST_AUTO_TEST_CASE( move02 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/move/manifest#move02";
    // name: MOVE 2
    // manifest: sparql11-test-suite/move/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/move/move-01.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/move/move-default.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( move02 ) */
BOOST_AUTO_TEST_CASE( move03 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/move/manifest#move03";
    // name: MOVE 3
    // manifest: sparql11-test-suite/move/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/move/move-01.ttl", "http://example.org/g1"), LG("sparql11-test-suite/move/move-02.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/move/move-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/move/move-01.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( move03 ) */
BOOST_AUTO_TEST_CASE( move04 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/move/manifest#move04";
    // name: MOVE 4
    // manifest: sparql11-test-suite/move/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/move/move-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/move/move-03.ru";
    const char* defaultGraph_out = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/move/move-01.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( move04 ) */
BOOST_AUTO_TEST_CASE( move06 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/move/manifest#move06";
    // name: MOVE 6
    // manifest: sparql11-test-suite/move/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/move/move-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/move/move-06.ru";
    const char* defaultGraph_out = "sparql11-test-suite/move/move-01.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( move06 ) */
BOOST_AUTO_TEST_CASE( move07 ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/move/manifest#move07";
    // name: MOVE 7
    // manifest: sparql11-test-suite/move/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/move/move-01.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/move/move-07.ru";
    const char* defaultGraph_out = "sparql11-test-suite/move/move-default.ttl";
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/move/move-01.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( move07 ) */
BOOST_AUTO_TEST_CASE( load_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#load-silent";
    // name: LOAD SILENT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/load-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( load_silent ) */
BOOST_AUTO_TEST_CASE( load_into_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#load-into-silent";
    // name: LOAD SILENT INTO
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/load-silent-into.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( load_into_silent ) */
BOOST_AUTO_TEST_CASE( clear_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#clear-silent";
    // name: CLEAR SILENT GRAPH iri
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/update-silent/spo.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/clear-silent.ru";
    const char* defaultGraph_out = "sparql11-test-suite/update-silent/spo.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( clear_silent ) */
BOOST_AUTO_TEST_CASE( clear_default_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#clear-default-silent";
    // name: CLEAR SILENT DEFAULT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/clear-default-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( clear_default_silent ) */
BOOST_AUTO_TEST_CASE( create_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#create-silent";
    // name: CREATE SILENT iri
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/update-silent/spo.ttl", "http://example.org/g1")};
    const char* request = "sparql11-test-suite/update-silent/create-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/update-silent/spo.ttl", "http://example.org/g1")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( create_silent ) */
BOOST_AUTO_TEST_CASE( drop_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#drop-silent";
    // name: DROP SILENT GRAPH iri
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = "sparql11-test-suite/update-silent/spo.ttl";
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/drop-silent.ru";
    const char* defaultGraph_out = "sparql11-test-suite/update-silent/spo.ttl";
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( drop_silent ) */
BOOST_AUTO_TEST_CASE( drop_default_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#drop-default-silent";
    // name: DROP SILENT DEFAULT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/drop-default-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( drop_default_silent ) */
BOOST_AUTO_TEST_CASE( copy_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#copy-silent";
    // name: COPY SILENT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/update-silent/spo.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/update-silent/copy-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/update-silent/spo.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( copy_silent ) */
BOOST_AUTO_TEST_CASE( copy_to_default_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#copy-to-default-silent";
    // name: COPY SILENT TO DEFAULT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/copy-to-default-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( copy_to_default_silent ) */
BOOST_AUTO_TEST_CASE( move_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#move-silent";
    // name: MOVE SILENT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/update-silent/spo.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/update-silent/move-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/update-silent/spo.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( move_silent ) */
BOOST_AUTO_TEST_CASE( move_to_default_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#move-to-default-silent";
    // name: MOVE SILENT TO DEFAULT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/move-to-default-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( move_to_default_silent ) */
BOOST_AUTO_TEST_CASE( add_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#add-silent";
    // name: ADD SILENT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {LG("sparql11-test-suite/update-silent/spo.ttl", "http://example.org/g2")};
    const char* request = "sparql11-test-suite/update-silent/add-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {LG("sparql11-test-suite/update-silent/spo.ttl", "http://example.org/g2")};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add_silent ) */
BOOST_AUTO_TEST_CASE( add_to_default_silent ) {
    const char* test = "http://www.w3.org/2009/sparql/docs/tests/sparql11-test-suite/update-silent/manifest#add-to-default-silent";
    // name: ADD SILENT TO DEFAULT
    // manifest: sparql11-test-suite/update-silent/manifest.ttl
    const char* defaultGraph_in = NULL;
    LabeledGraph namedGraphs_in[] = {};
    const char* request = "sparql11-test-suite/update-silent/add-to-default-silent.ru";
    const char* defaultGraph_out = NULL;
    LabeledGraph namedGraphs_out[] = {};
    UPDATE_TEST();
} /* BOOST_AUTO_TEST_CASE( add_to_default_silent ) */
