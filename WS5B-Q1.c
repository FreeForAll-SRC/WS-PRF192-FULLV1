#include <stdio.h>
void luachon1();
void luachon1(){
	int a,b;
	printf("Enter number of tosses :"); 
	scanf("%d",&a);
	printf("Number of head :");
	scanf("%d",&b);
	printf("Enter number of tails : %d\n", a-b);
	printf("Percentage of heads for all tosses: %.2f",(float)b/a*100);
	}
int main(){
	printf("Select options:\n1. Start tossing\n0. Exit\n");
	int i;
	do{
	printf("Your selection (0 -> 1): ");
	scanf("%d",&i);
	}while(i < 0 || i > 1);
	if(i==1)
		luachon1();
	return 0;
	
}
	
