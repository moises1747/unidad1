#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

	int x,y,mayor,menor;
	char equipo[20],objeto[10],instrumento,respu,auxequipo[20],grupo;
	float promedio,loncor,error,M,R,V,O,fail,mayorfail,error2;
	
	mayor=-9999;
	menor=9999;
	grupo=0;
	printf("\n\n\tBienvenido al Laboratorio de Fisica\n\n\t");
do{
	printf("Nombre del equipo\n");
	scanf("%s", &equipo[20]);
	grupo++;
	printf("Su objeto para medir es:\n");
	scanf("%s", &objeto[10]);
	printf("Debe medir el objeto (4) veces\n");
	scanf("%d", &y);
	for(x=0;x<y;x++){
		printf("\n\tPOR FAVOR UTILICE SOLO 1 VEZ CADA INSTRUMENTO\n\t");
		printf("Con que instrumento desea realizar la medicion (M)etro,(R)egla,(V)ernier,(O)tro)\n");
		instrumento=getch();
		instrumento=toupper(instrumento);
			if(instrumento == 'M'){
				printf("\nMETRO: Cual es la longitud del objeto en centimetros?\n");
				scanf("%f", &M);
				}
			if(instrumento == 'R'){
				printf("\nREGLA: Cual es la longitud del objeto en centimetros?\n");
				scanf("%f", &R);
				}
			if(instrumento == 'V'){
				printf("\nVERNIER: Cual es la longitud del objeto en centimetros?\n");
				scanf("%f", &V);
				}
			if(instrumento != 'M' || instrumento != 'R' || instrumento || 'V'){
				printf("\nOTRO: Cual es la longitud del objeto en centimetros?\n");
				scanf("%f", &O);
			}
		}
	
		promedio=(M+R+V+O)/4;
		printf("El promedio en centimetros es igual a: %.2f\n", promedio);
		printf("Cual es la longitud correcta?\n");
		scanf("%f", &loncor);
		error=promedio-loncor;
		printf("El margen de error fue de %.2f\n", error);
		fail++;
		printf("Otro equipo participara (s/n)?\n");
		respu=getch();
		respu=tolower(respu);
	}while(respu == 's');
	
	while(mayorfail>mayor){
   			mayor=mayorfail;
   			strcpy(auxequipo,equipo);
   		}
   		if(mayorfail!=0){
		printf("\n %s Es el ganador (%d)\n", auxequipo, mayor);
		}
	
/*	error2=(loncor*17)/100;
	if(error2>loncor){
		printf("Los equipos que tuvieron un error mayor al 17 porciento fueron: %.2f", );
	}

*/

system("pause");
return 0;
}
