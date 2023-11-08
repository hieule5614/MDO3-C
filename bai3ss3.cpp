#include<stdio.h>
int main(){
	float math, literature, english;
	printf("nhap diem toan :");
	scanf("%f" ,&math);
	
	printf("nhap diem van :");
	scanf("%f" ,&literature);
	
	printf("nhap diem anh :");
	scanf("%f" ,&english);
	
	float total = math + literature + english;
	float medium_score = total/3;
	
	printf("tong diem 3 mon la :%.2f \n", total);
	printf("diem trung binh 3 mon la :%.2f \n", medium_score);
}
