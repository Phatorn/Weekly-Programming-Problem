#include<stdio.h>
#include<string.h>
int len, i, r;
int r_index(int x, int y) {
	r = len - (i + 1);
}
int main() {
	char str[50], rstr[50];
	scanf("%s", &str);
	len = strlen(str);
	for(i = 0; i < len; i++) {
		r_index(len, i);
		if(str[r] == 'a') printf("0");
		else if(str[r] == 'e') printf("1");
		else if(str[r] == 'i') printf("2");
		else if(str[r] == 'o') printf("3");
		else if(str[r] == 'u') printf("4");
		else printf("%c", str[r]);
	}
	printf("aca");
	return 0;
}
