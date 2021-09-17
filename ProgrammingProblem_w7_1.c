#include<stdio.h>
int main() {
	float n1, n2, n3, n4, n5, n6, n7, n8, n9 ,n10, mean;
	printf("Enter height of 10 students in cm\nHeight of student number 1 : ");
	 scanf("%f", &n1);
	printf("Height of student number 2 : ");
	scanf("%f", &n2);
	printf("Height of student number 3 : ");
	scanf("%f", &n3);
	printf("Height of student number 4 : ");
	scanf("%f", &n4);
	printf("Height of student number 5 : ");
	scanf("%f", &n5);
	printf("Height of student number 6 : ");
	scanf("%f", &n6);
	printf("Height of student number 7 : ");
	scanf("%f", &n7);
	printf("Height of student number 8 : ");
	scanf("%f", &n8);
	printf("Height of student number 9 : ");
	scanf("%f", &n9);
	printf("Height of student number 10 : ");
	scanf("%f", &n10);
	printf("\nHeight of 10 students\nStudent number 1 : %.0f cm", n1);
	printf("\nStudent number 2 : %.0f cm", n2);
	printf("\nStudent number 3 : %.0f cm", n3);
	printf("\nStudent number 4 : %.0f cm", n4);
	printf("\nStudent number 5 : %.0f cm", n5);
	printf("\nStudent number 6 : %.0f cm", n6);
	printf("\nStudent number 7 : %.0f cm", n7);
	printf("\nStudent number 8 : %.0f cm", n8);
	printf("\nStudent number 9 : %.0f cm", n9);
	printf("\nStudent number 10 : %.0f cm", n10);
	mean = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;
	printf("\n\nAverage height of 10 students is %.2f cm", mean);
	return 0;
}
