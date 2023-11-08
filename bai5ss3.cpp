#include<stdio.h>
int main(){
	int a,b,c,d;
	printf ("nhap vao so nguyen co 4 chu so :\n ");
	scanf ("%d %d %d %d" ,&a ,&b ,&c, &d);
	int thousandDigit = a, hundredDigit = b, dozenDigit = c, unitDigit = d;
	int total = a + b + c + d;
	int reverse = unitDigit*1000 + dozenDigit*100 + hundredDigit*10 + thousandDigit;
	printf("tong cac so nguyen la : %d\n", total);
	printf("day so dao nguoc la : %d\n", reverse);
}
