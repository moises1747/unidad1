#include <stdio.h>
#include <math.h>

int main()
{
	int a,b;
	
	printf("Ingrese un valor\n");
	scanf("%i", &a);
	
	while(a/10)
	{
		b=a%10;
		a=a/10;
		printf("La Unidad es: %d\n", b);
		printf("La Decena es: %d\n", b);
	}
	printf("La Centena es: %d\n", a);

	system("pause");
	return 0;
}
