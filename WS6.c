#include <stdio.h>
#include <math.h>
void input( float a[], int n)
{ int i;
for(i=0;i<=n-1;i++)
  {scanf("%f",&a[i]);}
}
void bubblesort(float a[],int n)
{
	int i,j;
	int temp;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void printArray(float a[],int n)
{
    int i;
    printf("Before sorting:\t");
    output(a,n);
    printf("\nAfter sorting:\t");
    for (i=0; i < n; i++)
        printf("%.1f\t ", a[i]);
    printf("\n");
}
void search(float a[],int n)
{
	int i;
	float x;
	printf("Enter the value x to searched: ");
	scanf("%f",&x);
	for(i = 0;i<=n;i++)
	{
		if(a[i]==x)
		{
			printf("Found %.1f at position %d",x,i);
		}
	}
}
void output(float a[],int n)
{ int i ;
for(i=0;i<=n-1;i++)
   printf("%.1f\t",a[i]);
}
int main()
{
	int n,c;
	float a[100];
	printf("select option:");
	printf("\n1. Enter the list of float number");
	printf("\n2. Sort the list in incresing number");
	printf("\n3. Search value x in the list");
	printf("\n4. Display the list");
	printf("\n5. Exit");
	while(!0)
	{
		printf("\nYour select (0->4): ");
		scanf("%d",&c);
		if(c == 1)
		{
			printf("Input size of array n = ");
			scanf("%d",&n);
			input(a,n);	
		}
		if(c == 2)
		{
			bubblesort(a,n);
			printArray(a,n);	
		}
		if(c == 3)
		{
			search(a,n);
		}
		if(c == 4)
		{
			output(a,n);	
		}
		if(c == 5)
		{
			return 0;
		}		
	}
}
