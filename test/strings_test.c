#include <strings.h>
#include <function.h>
#include <ctest.h>

CTEST(schr_test, find_item_ok)
{
    char *string = "/wroginer/erg/wg33hwh4/hw4hh4\0";
    char item = '/';

    char *result = schr(string, item);

    ASSERT_NOT_NULL(result); 
}

CTEST(schr_test, find_item_fail)
{
    char *string = "/wroginer/erg/wg33hwh4/hw4hh4\0";
    char item = '\\';

    char *result = schr(string, item);

    ASSERT_NULL(result); 
}

CTEST(slen_test, correct_length)
{
    char *string = "/ssdsg/weh";

    int result = slen(string);

	int expected = 10;
    ASSERT_EQUAL(expected, result); 
}

CTEST(slen_test, incorrect_length)
{
    char *string = "/ssdsg/weh/56.3/sb";

    int result = slen(string);

	int expected = 3;
    ASSERT_NOT_EQUAL(expected, result); 
}

CTEST(slen_test, income_slen_1)
{
	int result = slen("/qwerty/daa");
	int expected = 11;
	ASSERT_EQUAL(expected, result);
}

CTEST(slen_test, income_slen_2)
{
	int result = slen("/qwerty/home/hello");
	int expected = 18;
	ASSERT_EQUAL(expected, result);
}

CTEST(slen_test, income_slen_3)
{
	int result = slen("/q/");
	int expected = 3;
	ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_check_1)
{
	int result = check("/wer/tyui/12345/eqw/qwe/fg/dfa/1225/zxc/adf2sdfs/sdfsdgsdgbnshfgdhdsghjsdjkgsjkdgkjs/qwerhnbiusifbsfds/12344893265/sdgsjdnislerubnsegtbiunbetgniebtbiuns/fsdfsdfsdfsdfsdgsdg/wekjsdhnb2321/ffdsfsdfwerojbifndsigsihnb516971548/fdstgbsnsigfsubt/dgfsdibnsutsfdgnbrdf.c");
	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_check_2)
{
	int result = check("/qwert/asddddddd/dasdd.c");
	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_check_3)
{
	int result = check("/qwert/asd*dddddd/dasdd.c");
	int expected = 10;
	ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_check_4)
{
	int result = check("/qwert|asddddddd/dasdd.c");
	int expected = 6;
	ASSERT_EQUAL(expected, result);
}