#include <stdio.h>
int isSymmetric(int n){
	int a[50],i=0,j;
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	for(j=0;j<=i-1;j++)
	{
		if(a[j]!=a[i-1-j])
		{
			return 0;
		}
	}
	return 1;
}

int main(){
	int m,n,i;
	do{
		printf("Enter m=");
		scanf("%d",&m);
		printf("Enter n=");
		scanf("%d",&n);
		if(m>=n){
			printf("Invalid input. Please enter m, n where m < n\n");
		}
	} while (m>=n);
	
	for(i=m;i<=n;i++){
		if(isSymmetric(i)){
			printf("%d ",i);
		}
	}
	return 0;
}
