#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	
	int np,p,cm,ch,contp,contca,mayorp;
	char r,nom[20],s,tipo,nomaux[20];
	float ptotal;
	
	contp=0;
	ch=0;
	cm=0;
	printf("\n\n\tBienvenido a Mi Lavanderia\n\n\t");
	printf("\nUn Estudiante (S/N)\n");
	r=getch();
	r=tolower(r);
	
	while(r=='s'){//Inicio del While (Si vinieron estudiantes)...
		printf("\nNombre del estudiante:\n");
		fflush(stdin);
		gets(nom);
		printf("\nsexo(M)(F)\n");
		s=getch();
		s=toupper(s);
		printf("\nNumero de prendas?\n");
		scanf("%d", &np);
			if(s=='F'){
				cm++;
			}
			else{
				ch++;
			}
		contp=0;//Se hubica aqui para que no cuente a la cantidad de pantalones anteriores, solo los de este ciclo
		contca=0;//Se hubica aqui para que no cuente a la cantidad de camisas anteriores, solo los de este ciclo
		for(p=0;p<np;p++){//Inicio del For(Para determinar las prendras)
			printf("\nDescripcion: (P)antalones, (C)amisa, (V)estido, (O)tro\n");
			tipo=getch();
			tipo=toupper(tipo);
			if(tipo=='P'){
				contp++;
			}
			if(tipo=='C'){
				contca++;
			}
		}//Cierre del For
		
		printf("\nTrajiste %d Pantalones\n", contp);
   		printf("\nTrajiste %d Camisas\n", contca);
   		
   		if(contp>=mayorp && contca>=5){
   			mayorp=contp;
   			strcpy(nomaux,nom);
		   }
		ptotal=((contca*450)+(contp*650))/1000;
		printf("\nTrajiste %.2f Kg de ropa\n", ptotal);
		printf("\nOtro estudiantes (S/N)?\n");
		r=tolower(getch());//es para ahorrar la escritura de r=gecth()
		   
	}//Fin del While (del Si vinieron estudiantes)
	
	if((cm+ch)>0){
		if (mayorp!=0){
		printf("\n%s trajo mas pantalones (%d)\n", nomaux,contp);
		}
		if(ch<cm){
		printf("\nLos hombres usan menos la lavanderia\n");
		}
		else{
			if(ch>cm){
				printf("\nLas mujeres usan menos la lavanderia\n");
			}
			else{
				printf("\nLas Mujeres y los Hombres usan la lavanderia por igual\n");
			}
		}
	}
	if(r=='n'){//Inicio del No vinieron estudiantes
		printf("\nHoy no asistieron estudiantes\n");
	}//Fin del While (No vinieron estudiantes)
	
	
	system("pause");
	return 0;
}
