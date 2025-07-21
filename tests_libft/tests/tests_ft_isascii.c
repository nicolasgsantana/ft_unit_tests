#include "minunit.h"
#include "libft.h"
#include "../../ft_isascii.c"

MU_TEST(test_int_0_is_nonzero)
{
	int n = 0;

	int result = ft_isascii(n);

	mu_check(result != 0);
}

MU_TEST(test_int_127_is_nonzero)
{
	int n = 127;

	int result = ft_isascii(n);

	mu_check(result != 0);
}

MU_TEST(test_int_200_is_zero)
{
	int n = 200;

	int result = ft_isascii(n);

	mu_check(result == 0);
}

MU_TEST(test_negative_int_is_zero)
{
	int n = -20;

	int result = ft_isascii(n);

	mu_check(result == 0);
}

MU_TEST_SUITE(ft_isascii_test_suite)
{
	MU_RUN_TEST(test_int_0_is_nonzero);
	MU_RUN_TEST(test_int_127_is_nonzero);
	MU_RUN_TEST(test_int_200_is_zero);
	MU_RUN_TEST(test_negative_int_is_zero);
}
