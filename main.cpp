
#include "include/common_library.h"
#include "include/io.h"
#include "include/solve_square.h"
#include "tests/tests_square.h"

#define USER_MODE

int main(void)
{
    #ifdef USER_MODE

    double x1 = 0;
    double x2 = 0;
    Num_Roots num_roots = NO_SOL;

    double a = NAN;
    double b = NAN;
    double c = NAN;

    greeting();

    guarded_input(&a, &b, &c);

    num_roots = solve_square(a, b, c, &x1, &x2);

    is_solution_minus_zero(&x1, &x2);

    print_solution(num_roots, x1, x2);

    #else

    test_square();

    #endif
}
