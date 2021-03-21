#include<stdio.h>
#include<math.h>

int sum(int n ) {
	int i;
	int s1= 0;
	for (i=0; i<=n; i++ )
		s1=s1+i;
		//printf("%d",s1);
		return(s1);
}
long gt (int n) 
{
	int i ; long s2; 
	s2=1 ;
	for (i=1; i<=n;i++) 
		s2= s2*i;
	return(s2);
	
}
float phanso(int n)
{	int i;
	float s3= 0.0;
	for(i = 1; i <= n; i++)
		s3 = s3 + 1.0 / i;
	return (s3);
}
int prime(int n) {
    
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return (0);
        }
    }
    return (1);
}
int main () {
	int a ;
	printf("\nnhap n : ");
	scanf("%d", &a);
	if (a >5) {
		long result =sum(a);
		printf(" S=%5d ", result);
		long nhan = gt(a);
		printf(" S=%5d",nhan);
		printf(" S= %5f", phanso(a));
	}
	if (a<=5) {
		printf ("hay nhap lai n: ");
		/*scanf("%d", &a);
		long result = sum(a);
		printf(" S=%5d ", result);
		long nhan = gt(a);
		printf(" S=%5d",nhan);
		printf(" S= %5f", phanso(a));*/
	}
	printf("\nNhap lai n :");
	scanf("%d",&a);
	if(prime (a) ==1 ) 
		printf ("%d la so nguyen to ",a);
    else 
    	printf("%d ko la so nguyen to" ,a);
	}
