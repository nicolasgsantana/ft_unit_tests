#include "../minunit.h"
#include "../../libft.h"

#include "tests_ft_isalpha.c"

int	main(void)
{
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
