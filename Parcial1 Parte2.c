#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	
	int n,a,b,c,i,j,d,r,x,q,k,l;
	
	//FIBONACCI
	do{
		do{
			printf("\nintroduzca un numero entre [5-50]\n\n");
			scanf("%d", &n);
			if(n<5 || n>50){
			printf("\nEl numero debe ser mayor que 5 y menor que 50\n");
			}
		}while(n<5 || n>50);
			
		printf("0\n\n1\n");
		a=0;
		b=1;
		for(i=2;i<n;i++){
			c=a+b;
			printf("\n%d\n",c);
			a=b;
			b=c;
		}
		//N! FACTORIAL
		printf("\t\t\nFACTORIAL\n\t\t");
		q=1;
		for(x=1;x<=n;x++){
			q=q*x;
		}
		printf("\nEl Factorial del numero %d es: %d\n", n,q);
		//PRIMO
		printf("\t\t\nPRIMO\n\t\t");
		d=0;
		for(j=1;j<=n;j++){
			if(n%j==0)
	    	d++;
		}
		if(d==2){
    		printf("\nEl numero es primo\n");
		}
		else{
    		printf("\nEl numero no es primo\n"); 
		}
		//DIVISORES
		printf("\t\t\nDIVISORES\n\t\t");
		k=0;
		for(l=0;l<=n;l++){
			k++;
			if(n%k==0){
				printf("\nDivisores %d\n", k);
			}
		}
		//NO SALIR DEL PROGRAMA
		printf("\nDesea pedir otro numero(S/N)\n");
		r=getch();
		r=toupper(r);
	}while(r=='S');
	if(r=='N'){
		printf("\nGracias por Jugar\n");
	}
	system("pause");
	return 0;
}
