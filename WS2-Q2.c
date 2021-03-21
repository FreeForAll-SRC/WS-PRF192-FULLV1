#include<stdio.h>
#include<math.h>
//1.	Display all common prime dividers of them
  /* long prime(int n) {
   int i;
   while(n % 2 == 0) {
      printf("%d, ", 2);
      n = n/2; 
   }
   for(i = 3; i <= sqrt(n); i=i+2){ 
      while(n % i == 0) {
         printf("%d, ", i);
         n = n/i;
      }
   }
   if(n > 2) {
      printf("%d, ", n);
   }
}
int main() {
    int n, i;
    printf("So nguyen to: ");
    scanf("%d", &n);
    printf("Cac uoc cua so nguyen to %d la: ", n);
    for (i = 1; i <= n; ++i) {
        if (n% i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}*/

//2.	Find the greatest common divider (GCD) of them.
/*int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int a, b, i, gcd;

    printf("Nhap 2 so: ");
    scanf("%d %d", &a, &b);

    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    printf("G.C.D cua %d va %d la %d", a, b, gcd);

    return 0;
}*/

//3.	Find the least common multiple (LCM) of them.
/*int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
long long LCM(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main() {
    int a,b,i, LCM;
    printf("Nhap so nguyen: ");
    scanf("%d %d", &a, &b);

  LCM= (a> b) ? a : b;

    while (1) {
        if ( a%i == 0 &&  b%i == 0) {
            printf(" LCM cua %d va %d la %d.", a, b, LCM);
            break;
        }
        ++LCM;
    }
    return 0;
}*/











