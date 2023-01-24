#include<stdio.h>
#include<time.h>
//Programa que imprime numeros pseudoaleatorios de 1, 3 y 5 cifras con 20%, 30% y 50% de probabilidad
void spc();
main(){
	spc();
	srand(time(NULL));
	printf("");
	int num,i,uno,tres,cinco,prob;
	printf("\nIngrese un numero mayor a 9:\t");
	scanf("%i",&num);
	spc();
	while(num<=9){
		printf("\nIngrese nuevamente el numero:\n");
		scanf("%i",&num);
	}
	printf("\n\n");
	for (i=0;i<num;i++){
		prob=rand()%100;
		uno=rand()%10;
		tres=rand()%(901)+100;
		cinco=rand()%(90001)+10000;
		if(prob>=0&&prob<20){
			printf("\t  %i\n",uno);
		}
		if(prob>=20&&prob<50){
			printf("\t %i\n",tres);
		}
		if(prob>=50&&prob<100){
			printf("\t%i\n",cinco);
		}	
	}
	spc();
	getch();
}

void spc(){
	printf("\n*****************************************************************************\n");
	printf("*****************************************************************************\n");
}
