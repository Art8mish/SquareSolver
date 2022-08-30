
#include "../include/common_library.h"
#include "../include/solve_square.h"

int is_zero(double value)
{
    const double EPS = 1e-7;
    return (fabs(value) < EPS); // comparison of absolute value with small constant
}

Num_Roots solve_linear(double b, double c, double *x1)
{
    SOFT_ASSERT(std::isfinite(b));
    SOFT_ASSERT(std::isfinite(c));

    SOFT_ASSERT(x1 != NULL);

    if (is_zero(b))
    {
        // 0 * x + 0 = 0
        if (is_zero(c))
            return INF_SOL;

        // 0 * x + const = 0
        if (!(is_zero(c)))
            return NO_SOL;
    }

    // const * x + c = 0
    if (!(is_zero(b)))
    {
        *x1 = (-c) / b;

        return ONE_SOL;
    }
}

Num_Roots solve_square(double a, double b, double c, double *x1, double *x2)
{
    SOFT_ASSERT(std::isfinite(a));
    SOFT_ASSERT(std::isfinite(b));
    SOFT_ASSERT(std::isfinite(c));

    SOFT_ASSERT(x1 != NULL);
    SOFT_ASSERT(x2 != NULL);
    SOFT_ASSERT(x1 != x2);

    double discriminant = b*b - 4*a*c;

    // 0 * x^2 + b * x + c = 0
    if (is_zero(a))
        return solve_linear(b, c, x1);

    // D < 0; no solutions
    if (discriminant < 0)
        return NO_SOL;

    // D = 0; 1 solution
    if (is_zero(discriminant))
    {
        *x1 = (-b) / (2*a);

        return ONE_SOL;
    }

    // D > 0; 2 solutions
    if (discriminant > 0)
    {
        double sqrt_discriminant = sqrt(discriminant);

        *x1 = ((-b) - sqrt_discriminant) / (2*a);
        *x2 = ((-b) + sqrt_discriminant) / (2*a);

        return TWO_SOL;
    }
}

void is_solution_minus_zero(double *x1, double *x2)
{
    *x1 = (is_zero(fabs(*x1))) ? 0 : *x1;
    *x2 = (is_zero(fabs(*x2))) ? 0 : *x2;
}
