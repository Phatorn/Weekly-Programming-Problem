#include <stdio.h>
int main() {
	char str[99];
	int i, va, ve, vi, vo, vu;
	va = ve = vi = vo = vu = 0;
	printf("Enter String : ");
	scanf("%[^\n]", str);
	for(i = 0; i < 99; i++) {
		if(str[i] == 'A' || str[i] == 'a') 
			va++;
		if(str[i] == 'E' || str[i] == 'e') 
			ve++;
		if(str[i] == 'I' || str[i] == 'i') 
			vi++;
		if(str[i] == 'O' || str[i] == 'o') 
			vo++;
		if(str[i] == 'U' || str[i] == 'u') 
			vu++;
		if(str[i] == '\0') 
			break ;
	}
	printf("a : %d\n", va);
	printf("e : %d\n", ve);
	printf("i : %d\n", vi);
	printf("o : %d\n", vo);
	printf("u : %d", vu);
	return 0;
}
