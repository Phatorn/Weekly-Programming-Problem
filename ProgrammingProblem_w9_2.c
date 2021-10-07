#include <stdio.h>
int main() {
	char str[99];
	int i = 0, up = 0, low = 0;
	printf("Enter String : ");
	scanf("%[^\n]", str);
	for(i = 0; i < 99; i++) {
		if(str[i] <= 'Z' && str[i] >= 'A') 
			up++;
		if(str[i] <= 'z' && str[i] >= 'a') 
			low++;
		if(str[i] == '\0') 
			break ;
	}
	printf("Uppercase : %d\n", up);
	printf("Lowercase : %d", low);
	return 0;
}
