#include<stdio.h>
int main() {
	int num1, num2, num3, sum12, sum23, sum13;
	printf("Enter the first number : ");
	scanf("%d", &num1);
	printf("Enter the second number : ");
	scanf("%d", &num2);
	printf("Enter the third number : ");
	scanf("%d", &num3);
	sum12 = num1 + num2;
	sum23 = num2 + num3;
	sum13 = num1 + num3;
	if(sum12 <= sum23 && sum12 <= sum13) {
		printf("Sum of the smallest number and the second smallest number is : %d", sum12);
	}
	else if(sum23 <= sum12 && sum23 <= sum13) {
		printf("Sum of the smallest number and the second smallest number is : %d", sum23);
	}
	else {
		printf("Sum of the smallest number and the second smallest number is : %d", sum13);
	}
	return 0;
}
