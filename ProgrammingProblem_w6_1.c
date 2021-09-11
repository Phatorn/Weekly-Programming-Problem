#include<stdio.h>
int main() {
	int time, hr, min ,sec;
	scanf("%d", &time);
	min = time / 60;
	sec = time % 60;
	hr = min / 60;
	min = min % 60;
	printf("%d:", hr); //hr
	if(min <= 9) //min
		printf("0%d:", min);
	else printf("%d:", min);
	if(sec <= 9) //sec
		printf("0%d", sec);
	else printf("%d", sec);
	return 0;
}
