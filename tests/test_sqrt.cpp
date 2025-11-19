#include "geocalc_math.hpp"
#include <cstdlib> // For rand() and srand()
#include <cmath>
#include <cstdio>
#include <ctime>

double d;
double math_sqrt;
double new_sqrt;

bool result;

void test_sqrt()
{

    for (int i = 0; i < 10; i++)
    {
        d = ((double)rand() / RAND_MAX) * 10.0;
        math_sqrt = std::sqrt(d);
        new_sqrt = sqrt_f(d);
        result = std::fabs(math_sqrt - new_sqrt) < 1e-6;

        printf("Test %d (Number = %f) (Computed Square Root = %f): %s\n", i, d, new_sqrt, result ? "Passed" : "Failed");
    }
}

int main()
{
    srand(time(NULL));
    test_sqrt();
    return 0;
}