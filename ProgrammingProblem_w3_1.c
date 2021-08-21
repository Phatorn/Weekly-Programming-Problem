#include<stdio.h>
int main() {
	int num1, num2, num3, max, a, b;
	printf("Enter the first number : ");
	scanf("%d", &num1);
	printf("Enter the second number : ");
	scanf("%d", &num2);
	printf("Enter the third number : ");
	scanf("%d", &num3);
	if(num1 >= num2 && num1 >= num3) {
		max = num1;
		a = num2;
		b = num3;
	}
	if(num2 >= num1 && num2 >= num3) {
		max = num2;
		a = num1;
		b = num3;
	}
	if(num3 >= num1 && num3 >= num2) {
		max = num3;
		a = num1;
		b = num2;
	}
	printf("Sum of the smallest number and the second smallest number is : %d", a+b);
	return 0;
}
