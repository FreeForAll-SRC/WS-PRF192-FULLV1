#include<stdio.h>
#include<math.h>
unsigned int chuyen(int n) {
	int m,s,t;
	s=0;
	m=0;
	while (n>0) {
			s=s+(n%2) *pow(10,m);
			m++;
			n=n/2;	
	}
	return s;
}
unsigned int nhap() {
	int n;
	printf("\nnhap gia tri :  ",n);
	scanf("%d", &n);
	return n;
}
int sum(int n){
	int s=0;
	printf("The sum of all digits in %d is ",n);
	while(n!=0){
	s+=n%10;
	n/=10;
	}
	printf("%d\n",s);

}
int reverse(int n){
	int i;
	printf("The reverse of %d is ",n);
	while(n!=0){
		i=n%10;
		n/=10;
		printf("%d",i);
	}
}
int main () {
	int a;
	printf("nhap so a :");
	scanf("%d",&a);
	printf("binary= %d",chuyen(a));
	a=nhap();
	sum(a);
	reverse(a);
	return 0;
}
