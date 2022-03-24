#include <stdio.h>



int eleg, A=0, B=1, C=2, result, busc;


consecutivos(){
	
	printf("\nSuma de 3 numeros consecutivos que den como resultado: ");
	scanf("%d", &busc);
	
	while(result != busc){
		result= A + B + C;
		printf("\n %d + %d + %d = %d", A, B, C, result);
		A = A + 1;
		B = B + 1;
		C = C + 1;
		result= A + B + C;

		
	}
	printf("\n|%d + %d + %d = %d|", A, B, C, result);

}

main(){
	printf("\n+--------------------------------+---+");
	printf("\n|      *Consevutivos de 3*       | 0 |");
	printf("\n+--------------------------------+---+");	
	printf("\n|      *#################*       | 1 |");
	printf("\n+--------------------------------+---+");	
	printf("\n|      *#################*       | 2 |");
	printf("\n+--------------------------------+---+");
	
	printf("\nEliga operacion: ");
	scanf("%d", &eleg);	
	
	switch(eleg){
		case 0:
			consecutivos();
			break;
		case 1:
			printf("...");
			break;
		default:
			printf("\n no");
			break;
	}
	

}




