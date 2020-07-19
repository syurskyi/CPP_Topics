?d.. BOOST_TEST_MODULE helloworld_test_module

? "lib.h"

? <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(helloworld_test_suite)

BOOST_AUTO_TEST_CASE(helloworld_test_version)
{
    BOOST_CHECK(version() > 0)sy.. p..
}

BOOST_AUTO_TEST_SUITE_END()
