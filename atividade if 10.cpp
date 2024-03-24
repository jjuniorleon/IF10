#include <stdio.h>
#include <stdlib.h>

int main () {
	float a;
	char g;
	
	printf("adicione sua altura: ");
	scanf("%f", &a);
	
	printf("\nadicione seu genero, f para feminino e m para masculino: ");
	scanf("%s", &g);
	
	if(g == 'm') {
		printf("\nhomem: %.2f", (72.7 * a) - 58);
	}
	
	if(g == 'f') {
		printf("\nmulher: %.2f", (62.1 * a) - 44.7);
	}
	
	if(g != 'f' && g !='m') {
		printf("\nescolha um genero existente.");
	}
}

