#include <stdio.h>


float div (int a, int b){
	if(b != 0){
		return a/b;
	}
	return div;
}
int mult (int a, int b){
	int mult_num = a*b;
	return mult_num;
}
int sub (int a, int b){
	int sub_num = a-b;
	return sub_num;
}
int soma (int a, int b){
	int soma_num = a+b;
	return soma_num;
}

int main (){
	printf("Soma dos numeros: %d\n", soma (3,4));
	printf("Subtracao dos numeros: %d\n", sub (5,3));
	printf("Multiplica��o dos numeros: %d\n", mult (4,5));
	printf("Divis�o dos numeros: %d\n", div (10,2));
	return 0;
}
