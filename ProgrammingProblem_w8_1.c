#include<stdio.h>
int main() {
	char str[50], *p;
	p = str;
	scanf("%s", &str);
	while (*p != '\0') 
		p++;
	p--;
	while (p >= str) {
		if(*p == 'a') printf("0");
		else if(*p == 'e') printf("1");
		else if(*p == 'i') printf("2");
		else if(*p == 'o') printf("3");
		else if(*p == 'u') printf("4");
		else printf("%c", *p);
		p--;
	}
	printf("aca");
	return 0;
}
