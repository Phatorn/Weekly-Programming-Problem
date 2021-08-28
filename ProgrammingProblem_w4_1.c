#include<stdio.h>
int main() {
	int num1, num2, num3, sum12, sum13, sum23;
	printf("Enter First Number : ");
	scanf("%d", &num1);
	printf("Enter Second Number : ");
	scanf("%d", &num2);
	printf("Enter Third Number : ");
	scanf("%d", &num3);
	sum12 = num1 + num2;
	sum13 = num1 + num3;
	sum23 = num2 + num3;
	if (sum12 >= sum13 && sum12 >= sum23)
		printf("Sum of %d and %d is the largest", num1, num2);
	else if (sum13 >= sum12 && sum13 >= sum23)
		printf("Sum of %d and %d is the largest", num1, num3);
	else if (sum23 >= sum12 && sum23 >= sum13)
		printf("Sum of %d and %d is the largest.", num2, num3);	
	return 0;
}
