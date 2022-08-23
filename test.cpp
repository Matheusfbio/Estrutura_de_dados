#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Inicio do algoritmo
int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
//  Declaraçao de variaveis	
    float x1,x2,y1,y2,d;
    
    printf("Digite o valor de x1 e x2: \n");
	scanf("%f %f", &x1,&x2);
	
	printf("Digite o valor de y1 e y2: \n");
	scanf("%f %f", &y1,&y2);
    
//  Processamento de dados    
    d=sqrt (pow(x2-x1, 2) + pow (y2-y1, 2));
    
//  Saida de dados    
    printf("O valor da distacia é = %.0f  \n", d);
	
    system("pause");
	return 0;
}
