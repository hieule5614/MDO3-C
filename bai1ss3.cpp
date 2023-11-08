#include<stdio.h>
int main(){
	//khai bao va khoi tao bien r
	float radius;
	//khai bao PI
	const float PI = 3.14;
	printf("nhap ban kinh hinh tron :");
	scanf("%f" ,&radius);
	
	float circle_perimeter = radius * 2 * PI;
	float circle_area = radius * radius * PI;
	
	printf("Chu vi hinh tron la : %.2f \n", circle_perimeter);
	printf("dien tich hinh tron la : %.2f \n", circle_area);
}
