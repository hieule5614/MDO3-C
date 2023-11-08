#include<stdio.h>
int main(){
	int year_born;
	printf("nhap vao nam sinh cua ban:\n");
	scanf("%d" ,&year_born);
	int year_now = 2023;
	int age = year_now - year_born;
	printf("tuoi cua ban : %d\n", age);
   if (age%2)
	printf("tuoi cua ban la so le", age);
   else
	printf("tuoi cua ban la so chan", age);
}
