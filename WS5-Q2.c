#include<stdio.h>
int Prime_Number(int a) {
	int i;
	if (a<=1) return 0;
	for(i=2;i<a;i++)
		if(a%i==0) return 0;
	return 1;
}

int main()
{
	int i,Lower_limit,Upper_limit,count=0,columns;
	puts("Table of Primes");
	puts("===============");
	printf("Lower Limit: ");
	scanf("%d",&Lower_limit);
	printf("Upper Limit: ");
	scanf("%d",&Upper_limit);
	printf("# of columns: ");
	scanf("%d",&columns);
	printf("\n");
	for(i=Lower_limit;i<=Upper_limit;i++) {
		if(Prime_Number(i)==1){printf("%10d",i);count+=1;}
		if(count==columns) {
		printf("\n"); count=0;}
	}
}
