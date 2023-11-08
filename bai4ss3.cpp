#include<stdio.h>
int main(){
	int number1 ,number2 ,number3;
	
	printf("nhap vao cac gia tri :");
	scanf("%d %d %d" ,&number1 ,number2 ,number3);
	
	int max = number1;
	int min = number1;
	
	max=(max<number2)?number2:max;
	max=(max<number3)?number3:max;
	min=(min>number2)?number2:min;
	min=(min>number3)?number3:min;
	
	printf("max la : %d" , max);
	printf("min la : %d" , min);
}
