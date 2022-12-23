#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Draw a flowchart to find all the roots of a quadratic equation ax2+bx+c=0. */

int main(int argc, char *argv[]) {
	
	float a,b,c,kokBir,kokIki,delta;
	printf("Denklem: ax^2+bx+c");
	printf("\na sayisini giriniz: ");
		scanf("%f",&a);
	printf("b sayisini giriniz: ");
		scanf("%f",&b);
	printf("c sayisini giriniz: ");
		scanf("%f",&c);
	
	printf("Denklem: %fx^2+%fx+%f",a,b,c);
	
	delta=(b*b)-(4*a*c);
	kokBir=(b+sqrt(delta))/2*a;
	kokIki=(b-sqrt(delta))/2*a;
	printf("\nKok 1: %f\nKok 2: %f",kokBir,kokIki);
	
	return 0;
}
