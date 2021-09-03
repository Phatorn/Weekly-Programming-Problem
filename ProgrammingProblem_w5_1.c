#include<stdio.h>
int main() {
	int n[10], k, result = 0;
	printf("Enter 10 Numbers\n");
	for(k = 0; k < 10; k++) {
		printf("Number %d : ", k + 1);
		scanf("%d", &n[k]);
	}
	printf("Data in array: ");
	for(k = 0; k < 10; k++) {
		printf("%d ", n[k]);
	}
	for(k = 0; k < 10; k++) {
		if(n[k] % 2 == 0)
			result = result - (k + 1); //even number
		else result = result + (k + 1); //odd number
	}
	printf("\nResult: %d", result);
	return 0;
}
