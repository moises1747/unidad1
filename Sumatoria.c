#include <stdio.h>
#include <math.h>

int main()
{
	
	int sumatoria,x;
	sumatoria=0;
	x++;
	

	for(x=0; x<20;x++)
	{
	sumatoria=sumatoria+(x-1)*(x-1);
	}
	printf("Sumatoria = %i\n", sumatoria);
	
	system("pause");
	return 0;
	
}
