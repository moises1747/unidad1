#include <stdio.h>
#include <math.h>

int main(){
	int n,x,i,e,f,g,h,j,mayor,menor;

	mayor=-9999;
	menor=9999;
	printf("Total numeros conjunto?\n");
	scanf("%d", &n);
	
	i=0;
	e=0;
	f=0;
	g=0;
	h=0;
	j=0;
	
		
	for(i=0;i<n;i++);{
	    printf("Introdusca un numero");
		scanf("%d", &x);
		if(x>0){ //1
		e++;
		}
		else{
		h++;
		}
		if(x%2 == 0){ //2
		f++;
		}
		if(x%2 == 1){ //3
		g++;
		}
		if(x>=-30 && x<31){ //5
		j++;		
		}
		x=("float"(x)+"float"(n)); //6
		if(x>mayor){ //7
			mayor=x;
		}
		if(x<menor){ //8
			menor=x;
		}
	}
	
	printf("positovos");
	scanf("%d", &e);
	printf("pares");
	scanf("%d", &f);
	printf("impar");
	scanf("%d", &g);
	printf("negativo");
	scanf("%d", &h);
	printf("porcentaje");
	scanf("%d", &j);
	printf("mayor");
	scanf("%d", &mayor);
	printf("menor");
	scanf("%d", &menor);
	
	system("pause");
	return 0;
}
