#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}

double funcos(double e, double x)
{
    int flag = -1;
    double temp = 1;
    double fz = 1;
    double fm = 1;
    double m = 2;
    double sum = 1;
    while(fabs(temp) > e)
    {
        for(int i = 1; i <= m; i++)
        {
            fm *= i;
        }
        fz = pow(x,m);
        temp = fz / fm;
        sum += flag * temp;
        m += 2;
        fm = 1;
        flag = - flag;
    }
    return sum;
}
