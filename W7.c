#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdbool.h>
void input(char s[])
	 {printf("\nInput a string:\n");
	  fflush(stdin);
	  gets(s);
	 }
 void removeRedSpaces(char s[])
	 {int n,low, up, i, j; char x[100];
	  n = strlen(s);
	  i=0; j=n-1;
	  while(i<n && s[i]==' ') i++;
	  low = i;
	  while(j>0 && s[j]==' ') j--;
	  up = j;
	  if(low>up) {strcpy(s,""); return;}
	  strcpy(x,"");
	  i = low; j=0;
	  while(i<=up)
	   {while(i<up && s[i]==' ') i++;
	    while(i<=up && s[i]!=' ') x[j++] = s[i++];
	    if(i<=up) x[j++] = ' ';
	   }
	  x[j] = '\0';
	  strcpy(s,x);
	 }
int countWord(char s[]){
	int word=0;
	int i;
	for(i=0; i<strlen(s); i++)
		if(s[i]!=32&&(s[i+1]==32||s[i+1]==NULL))	word++;
	return word;
}
void fun(char s[]){
	int count=0;
	char p[100]; strcpy(p,s);
	printf("The original string: ");
	puts(s);
	printf("Number of words in the string: %d, they are: \n",countWord(s));
	char *token;
	token=strtok(p," \t");
	while(token!=NULL){
		puts(token);
		token=strtok(NULL," \t");
		count++;
	}
}
 void Viethoa(char s[]){
	char p[100]; strcpy(p,s);
	int i;
	printf("The original string: ");
	puts(s);
	printf("The proper form: ");
	for(i=0; i<=strlen(p); i++){
		if(p[i]==32&&p[i+1]!=32){
			if(p[i+1]>='a'&&p[i+1]<='z') p[i+1]-=32;
		}
		if(p[0]>='a'&&p[0]<='z') p[0]-=32;
	}
	puts(p);
}
void checkName(char s[]){
	bool check=true;
	int i;
	for(i=0; i<strlen(s); i++){
		if(isalpha(s[i])==0&&s[i]!=32){
			check=false;
			break;
		}	
	}
	if(check==true)	printf("%s is a valid name\n",s);
	else printf("%s is not a valid name\n",s);
}
void display(char s[])
 {printf("%s\n",s);
 }
int main()
{
	int c;
	char s[100];
	printf("Choose one of the following options:\n");
	printf("1. Input a string\n");
	printf("2. Split a string into words\n");
	printf("3. Convert a string into proper form\n");
	printf("4. Remove redundant spaces\n");
	printf("5. Check valid name\n");
	printf("0. Exit\n");
	while(!0)
	{
		printf("Your selection (0->6): ");
		scanf("%d",&c);
		if(c == 1)
		{
			input(s);
		}
		if(c == 2)
		{
			fun(s);
		}
		if(c == 3)
		{
			Viethoa(s);
		}
		if(c == 4)
		{
			printf("The original string: ");
			puts(s);
			removeRedSpaces(s);
			printf("The cleaned form: ");
			display(s);
		}
		if(c == 5)
		{
			checkName(s);
		}
		if(c == 0)
		{
			return 0;
		}
	}
	
}
