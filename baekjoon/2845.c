#include <stdio.h>
int main(){
	int l,p,i;
	int news[5]={0};
	scanf("%d %d", &l,&p);
	for(i=0;i<5;i++){
		scanf("%d", &news[i]);
		printf("%d ", news[i]-l*p);
	}
	return 0;
}
