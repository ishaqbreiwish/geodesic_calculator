
// computing square root using
double sqrt_f(double n)
{
    int x = 1;
    int n_div_x = n / x;
    int avg = ((n_div_x + x) / 2);

    while ((avg * avg) != n)
    {
        x = n_div_x;
        n_div_x = n / x;
        avg = ((n_div_x + x) / 2);
    }
}