#include <stdio.h>
#include <math.h>

int main(){
	
	int x,y,val;
	char r;
	float inter1,inter2;
	
	printf("Desea jugar (s/n)\n");
	r=getch();
	r=tolower(r);
	printf("Cual es el valor del primer intervalo\n");
	scanf("%f", &inter1);
	printf("Cual es el valor del segundo intervalo\n");
	scanf("%f", &inter2);
	x=(inter1+inter2)/2;
	
		while(r=='s'){
			printf("Ingrese el valor para jugar\n");
			scanf("%i", &y);
			val=x+y;
			if(val<=inter1 || inter2>=val){
				printf("Ganador\n");
			}
			else{
				printf("Perdedor\n");
			}
			printf("Desea jugar otra vez(s/n)\n");
			r=getch();
			r=tolower(r);
			
		}
		if(r=='n'){
		printf("Gracias por jugar\n");
		}
	
	
	system("pause");
	return 0;
}
