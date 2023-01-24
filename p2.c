#include<stdio.h>
//Imprimiendo asteriscos que forman un rectangulo dentro de un cuadrado
void space();
main(){
	space();
	int i,j,k,n;
	do{
	printf("Ingrese el lado del cuadrado mayor: \t ");
	scanf("%i",&n);
	} while(n<=0);
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
	space();
	int x1,x2,y1,y2;
	do{
		printf("Ingrese la absisa del primer punto: \t");
		scanf("%i",&x1);
	} while(x1<=0||x1>=n);
	do{
		printf("Ingrese la ordenada del primer punto: \t");
		scanf("%i",&y1);
	} while(y1<=0||y1>=n);
	do{
		printf("Ingrese la absisa del segundo punto: \t");
		scanf("%i",&x2);
	} while(x2<=x1||x2>=n);
	do{
		printf("Ingrese la ordenada del segundo punto: \t");
		scanf("%i",&y2);
	} while(y2<=y1||y2>=n);
	printf("\nRectangulo de lado %i",x2-x1);
	printf("\nRectangulo de alto %i",y2-y1);
	
	space();
	int f,c;
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i>=y1&&i<y2)&&(j>=x1&&j<x2)){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
	space();
	printf("\n**************************** HELLO ******************************\n");
	printf("\n**************************** WORLD ******************************\n");
	getch();
}

void space(){
	int i,j;
	printf("\n\n");
	for (i=0;i<2;i++){
		for(j=0;j<100;j++){
			printf("=");
		}
		printf("\n");
	}
}
