#include <math.h>
#include <stdio.h>
int PTbac2(float a, float b, float c) {
    double discriminant, root1, root2, realPart, imagPart;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
int main(){
	float a,b,c;
	printf("nhap he so a=");scanf("%f",&a);
	printf("nhap he so b=");scanf("%f",&b);
	printf("nhap he so c=");scanf("%f",&c);
    PTbac2(a,b,c);
	}
	
