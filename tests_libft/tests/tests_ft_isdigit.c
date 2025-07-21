#include "minunit.h"
#include "libft.h"
#include "../../ft_isdigit.c"

MU_TEST(test_char_5_return_nonzero)
{
	char c = '5';

	int result = ft_isdigit(c);

	mu_check(result != 0);
}

MU_TEST(test_char_0_return_nonzero)
{
	char c = '0';

	int result = ft_isdigit(c);

	mu_check(result != 0);
}

MU_TEST(test_char_a_return_zero)
{
	char c = 'a';

	int result = ft_isdigit(c);

	mu_check(result == 0);
}

MU_TEST(test_char_U_return_zero)
{
	char c = 'U';

	int result = ft_isdigit(c);

	mu_check(result == 0);
}

MU_TEST_SUITE(ft_isdigit_test_suite)
{
	MU_RUN_TEST(test_char_5_return_nonzero);
	MU_RUN_TEST(test_char_0_return_nonzero);
	MU_RUN_TEST(test_char_a_return_zero);
	MU_RUN_TEST(test_char_U_return_zero);
}
