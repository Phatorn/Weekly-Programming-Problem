#include<stdio.h>
int main() {
	int time, hr, min ,sec;
	scanf("%d", &time);
	for(min = 0; time >= 60; min ++) {
		time = time - 60;
	} sec = time;
	for(hr = 0; min >= 60; hr ++) {
		min = min - 60;
	} 
	printf("%d:", hr); //hr
	if(min <= 9) //min
		printf("0%d:", min);
	else printf("%d:", min);
	if(sec <= 9) //sec
		printf("0%d", sec);
	else printf("%d", sec);
	return 0;
}
