#include<stdio.h>
#include<string.h>
void dao(char a[])
{
	int i;
	printf("Reverse of the string: ");
	for(i=strlen(a);i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
int main ()
{
	char a[100];
	char b;
	do
	{
		printf("Enter a string a: ");
		gets(a);
		dao(a);
		printf("\nAnother run (y/n): ");
		scanf("%c",&b);
		fflush(stdin);
	}
	while(b=='y');
	return 0;
}














