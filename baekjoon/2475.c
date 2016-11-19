#include <stdio.h>
int main(){
	int a[5]={0};
	int i,x=0;
	for(i=0;i<5;i++){
		scanf("%d", &a[i]);
		x+=a[i]*a[i];
	}
	printf("%d", x%10);
	return 0;
}
