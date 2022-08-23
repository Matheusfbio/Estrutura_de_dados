#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,x2,y1,y2,d;
    
    printf("Digite o valor  de x1 e x2: \n");
	scanf("%f %f", &x1,&x2);
	
	printf("Digite o valor  de y1 e y2: \n");
	scanf("%f %f", &y1,&y2);
    
    d=sqrt (pow(x2-x1, 2) + pow (y2-y1, 2));
    
    printf("O valor da distacia = %.2f  \n", d);
	
    system("pause");
	return 0;
}
