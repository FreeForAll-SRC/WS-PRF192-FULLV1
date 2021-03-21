#include<stdio.h>
#include<ctype.h>
#include<math.h>

main()
{
    double x, mySin(double), myCos(double), myExp(double);
    char more = 'y';

    while (more == 'y')
    {
        printf("\n\t\t\tInput X:");
        scanf("%lf", &x);
        printf("\n\t\t\tMy Result\t\tLibrary Result");
        printf("\n\tSin\t\t\t%f\t\t%f", mySin(x), sin(x));
        printf("\n\tCos\t\t\t%f\t\t%f", myCos(x), cos(x));
        printf("\n\tExp\t\t\t%f\t\t%f", myExp(x), exp(x));
        //printf("\n\n\t\t\tDo more: (Y/N)?");
        //scanf("%s", &more);
    } while (toupper(more) == 'Y');

}

double mySin(double x)
{
    int i, sign;
    double sum, power(double, int), fact (int);

    for (i = 0, sign = 1, sum = 0.; i < 21 ; i++, sign = -sign)
        sum = sum + sign * power(x, 2 * i + 1) / fact (2 * i + 1);

    return sum;
}

double myCos(double x)
{
    int i, sign;
    double sum, power(double, int), fact (int);

    for (i = 0, sign = 1, sum = 0.; i < 21 ; i++, sign = -sign)
        sum = sum + sign * power(x, 2 * i) / fact (2 * i);

    return sum;
}

double myExp(double x)
{
    int i, sign;
    double sum, power(double, int), fact (int);

    for (i = 0, sign = 1, sum = 0.; i < 21 ; i++)
        sum = sum + sign * power(x, i) / fact (i);

    return sum;
}

double fact (int n)
{
    int i;
    double prod = 1.;

    for (i = 1; i <= n; i++)
        prod = prod * i;

    return prod;
}

double power(double x, int n)
{
    int i;
    double prod = 1.;

    for (i = 1; i <= n; i++)
        prod = prod * x;

    return prod;
}
