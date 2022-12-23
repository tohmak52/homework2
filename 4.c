#include <stdio.h>
#include <stdlib.h>

/* Draw a flowchart to find the sum of the first 50 natural numbers */

int main(int argc, char *argv[]) {
	int i,toplam;
	toplam=0;
	
	for(i=0;i<=50;i++){
		toplam=i+toplam;
	}
	printf("Toplam: %d",toplam);
	
	return 0;
}
