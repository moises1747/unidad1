#include <stdio.h>
#include <math.h>

int main(){

	int i,x,xx;


	printf("introduzca un numero\n");
	scanf("%d", &x);
	

	xx=1;
	for(i=1;i<=x;i++){
		xx=xx*i;
	}
	
	printf("El resultado es %d\n", xx);
	
	system("pause");
	return 0;
}
