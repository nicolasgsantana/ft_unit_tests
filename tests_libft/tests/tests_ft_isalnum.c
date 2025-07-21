#include "minunit.h"
#include "libft.h"
#include "../../ft_isalnum.c"

MU_TEST(test_char_h_returns_nonzero)
{
	// ARRANGE
	char c = 'h';

	// ACT
	int	result = ft_isalnum(c);

	// ASSERT
	mu_check(result != 0);
}

MU_TEST(test_char_1_returns_nonzero)
{
	// ARRANGE
	char c = '1';

	// ACT
	int	result = ft_isalnum(c);

	// ASSERT
	mu_check(result != 0);
}

MU_TEST(test_char_Z_returns_nonzero)
{
	// ARRANGE
	char c = 'Z';

	// ACT
	int	result = ft_isalnum(c);

	// ASSERT
	mu_check(result != 0);
}

MU_TEST(test_char_star_returns_zero)
{
	// ARRANGE
	char c = '*';

	// ACT
	int	result = ft_isalnum(c);

	// ASSERT
	mu_check(result == 0);
}
MU_TEST(test_char_bar_char_returns_zero)
{
	// ARRANGE
	char c = '\\';

	// ACT
	int	result = ft_isalnum(c);

	// ASSERT
	mu_check(result == 0);
}
MU_TEST(test_char_parethesis_char_returns_zero)
{
	// ARRANGE
	char c = ')';

	// ACT
	int	result = ft_isalnum(c);

	// ASSERT
	mu_check(result == 0);
}

MU_TEST_SUITE(ft_isalnum_test_suite)
{
	MU_RUN_TEST(test_char_c_returns_nonzero);
	MU_RUN_TEST(test_char_1_returns_nonzero);
	MU_RUN_TEST(test_char_Z_returns_nonzero);
	MU_RUN_TEST(test_char_star_returns_zero);
	MU_RUN_TEST(test_char_bar_char_returns_zero);
	MU_RUN_TEST(test_char_parethesis_char_returns_zero);
}
