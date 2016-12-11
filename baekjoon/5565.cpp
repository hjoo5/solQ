#include <stdio.h>
int main(){
	int price[11]={0};
	int i;
	for(i=0;i<10;i++){
		scanf("%d", &price[i]);
	}
	for(i=1;price[i];i++){
		price[0]-=price[i];
	}
	printf("%d", price[0]);
	return 0;
}
