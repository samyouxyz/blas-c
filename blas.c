#include <stdio.h>
#include <math.h>

/**
 * Performs the operation y = a * x + y, where a is a scalar, x and y are vectors.
 *
 * @param n     The number of elements in the vectors.
 * @param a     The scalar value.
 * @param x     The input vector x.
 * @param incx  The increment between consecutive elements of x.
 * @param y     The input/output vector y.
 * @param incy  The increment between consecutive elements of y.
 */
void daxpy(int n, double a, double *x, int incx, double *y, int incy)
{
    for (int i = 0; i < n; i++)
    {
        y[i * incy] = a * x[i * incx] + y[i * incy];
    }
}

/**
 * Computes the sum of the absolute values of the elements in a vector.
 *
 * @param n     The number of elements in the vector.
 * @param x     The input vector.
 * @param incx  The increment between consecutive elements of x.
 *
 * @return      The sum of the absolute values of the elements in the vector.
 */
double asum(int n, double *x, int incx)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += fabs(x[i * incx]);
    }
    return sum;
}

int main()
{
    double x[] = {1, 2, 3};
    double y[] = {4, 5, 6};
    double a = 2.0;
    int n = 3;

    daxpy(n, a, x, 1, y, 1);

    for (int i = 0; i < n; i++)
    {
        printf("%f\n", y[i]);
    }

    return 0;
}