#include<stdio.h>
int main() {
	int num1, num2, num3;//123,132,213,231,321,312
	printf("Enter First Number : ");
	scanf("%d", &num1);
	printf("Enter Second Number : ");
	scanf("%d", &num2);
	printf("Enter Third Number : ");
	scanf("%d", &num3);
	if (num1 >= num2 && num2 >= num3)//123
		printf("Sum of %d and %d is the largest", num1, num2);
	else if (num1 >= num3 && num3 >= num2)//132
		printf("Sum of %d and %d is the largest", num1, num3);
	else if (num2 >= num1 && num1 >= num3)//213
		printf("Sum of %d and %d is the largest", num2, num1);
	else if (num2 >= num3 && num3 >= num1)//231
		printf("Sum of %d and %d is the largest", num2, num3);
	else if (num3 >= num2 && num2 >= num1)//321
		printf("Sum of %d and %d is the largest", num3, num2);
	else if (num3 >= num1 && num1 >= num2)//312
		printf("Sum of %d and %d is the largest", num3, num1);
	return 0;
}
