#include <stdio.h>
int main(){
	int n;
	int i,a,b,cy=100,sd=100;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d", &a,&b);
		if(a>b){
			sd-=a;
		}
		if(a<b){
			cy-=b;
		}
	}
	printf("%d\n%d", cy,sd);
	return 0;
}
