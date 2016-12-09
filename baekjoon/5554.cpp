#include <stdio.h>
int main(){
	int a,b,c,d,x,y;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	y=a+b+c+d;
	x=y/60;
	y-=x*60;
	printf("%d\n%d", x,y);
	return 0;
}
