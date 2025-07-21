#include "minunit.h"
#include "libft.h"
#include "../../ft_isalpha.c"

MU_TEST(test_char_c_returns_nonzero)
{
	// ARRANGE
	char c = 'c';

	// ACT
	int	result = ft_isalpha(c);

	// ASSERT
	mu_check(result != 0);
}

MU_TEST(test_char_9_returns_zero)
{
	// ARRANGE
	char c = '9';

	// ACT
	int	result = ft_isalpha(c);

	// ASSERT
	mu_check(result == 0);
}

MU_TEST(test_special_char_returns_zero)
{
	// ARRANGE
	char c = '#';

	// ACT
	int	result = ft_isalpha(c);

	// ASSERT
	mu_check(result == 0);
}

MU_TEST(test_char_Y_returns_nonzero)
{
	// ARRANGE
	char c = 'Y';

	// ACT
	int result = ft_isalpha(c);

	// ASSERT
	mu_check(result != 0);
}

MU_TEST_SUITE(ft_isalpha_test_suite)
{
	MU_RUN_TEST(test_char_c_returns_nonzero);
	MU_RUN_TEST(test_char_9_returns_zero);
	MU_RUN_TEST(test_special_char_returns_zero);
	MU_RUN_TEST(test_char_Y_returns_nonzero);
}
