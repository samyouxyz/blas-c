#include <Accelerate/Accelerate.h>
#include <stdio.h>

int main()
{
    int n = 5;
    double a = 2.0;
    double x[] = {1, 2, 3, 4, 5};
    double y[] = {5, 4, 3, 2, 1};

    // Perform the operation y := a*x + y using vDSP
    vDSP_vsmaD(x, 1, &a, y, 1, y, 1, n);

    // Output the result
    for (int i = 0; i < n; i++)
    {
        printf("%f ", y[i]);
    }
    printf("\n");

    return 0;
}
