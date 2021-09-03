#include<stdio.h>
int main() {
	int n[10], k, result = 0, oddresult = 0, evenresult = 0;
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
		if(n[k] % 2 == 1)
			oddresult = oddresult + (k + 1);
	} //find sum of odd number
	for(k = 0; k < 10; k++) {
		if(n[k] % 2 == 0)
			evenresult = evenresult + (k + 1);
	} // find sum of even number
	printf("\nResult: %d", oddresult - evenresult);
	return 0;
}
