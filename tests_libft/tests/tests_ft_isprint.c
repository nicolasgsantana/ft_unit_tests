#include "minunit.h"
#include "libft.h"

MU_TEST(test_int_127_returns_nonzero)
{
	// ARRANGE
	int n = 127;

	// ACT
	int	result = ft_isprint(n);

	// ASSERT
	mu_check(result != 0);
}

MU_TEST(test_char_space_returns_nonzero)
{
	// ARRANGE
	char c = ' ';

	// ACT
	int	result = ft_isprint(c);

	// ASSERT
	mu_check(result != 0);
}

MU_TEST(test_int_31_returns_zero)
{
	// ARRANGE
	int n = 31;

	// ACT
	int	result = ft_isprint(n);

	// ASSERT
	mu_check(result == 0);
}

MU_TEST(test_int_5_returns_zero)
{
	// ARRANGE
	int n = 5;

	// ACT
	int result = ft_isprint(n);

	// ASSERT
	mu_check(result == 0);
}

MU_TEST_SUITE(ft_isprint_test_suite)
{
	MU_RUN_TEST(test_int_127_returns_nonzero);
	MU_RUN_TEST(test_char_space_returns_nonzero);
	MU_RUN_TEST(test_int_31_returns_zero);
	MU_RUN_TEST(test_int_5_returns_zero);
}
