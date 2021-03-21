#include<stdio.h>
int main(){
	float a,b,c,s1,s2,x,p,S;
	scanf("%f%f%f%f",&a,&b,&c,&x);
	printf ("a=");
	printf ("b=");
	printf ("c=");
	printf ("x=");
	s1= a*x*x+b*x+c;
	printf("s1=%f",s1);
	if ((b*b-4*a*c)>0){
		s2=sqrt(b*b-4*a*c);
		printf("\ns2=%f",s2);}
	else{
	printf("\ns2=0");
	}
    printf("nhap a b c=\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>=0){
    	p=(a+b+c)/2;
    	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("chu vi p =%f\n",p);
	printf("dien tich S=%f",S);
	}
    else {
    printf("a,b,c không phai 3 canh cua tam giac");
    }
}
	
