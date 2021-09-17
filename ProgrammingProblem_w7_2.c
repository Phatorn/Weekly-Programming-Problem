#include<stdio.h> 
int main() {
	float sum = 0, mean;
	int n[10], i;
	printf("Enter height of 10 students in cm\n");
	for(i = 0; i < 10; i++) {
		printf("Height of student number %d : ", i + 1);
		scanf("%d", &n[i]);
	}
	printf("\nHeight of 10 students");
	for(i = 0; i < 10; i++) {
		printf("\nStudent number %d : %d cm", i + 1, n[i]);
	}
	for(i = 0; i < 10; i++) {
		sum = sum + n[i];
	}
	mean = sum / 10;
	printf("\n\nAverage height of 10 students is %.2f cm", mean);
	return 0;
}
