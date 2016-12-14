#include <stdio.h>
int gcd(int a, int b){
	if(b==0){
		return a;
	}
	gcd(b,a%b);
}
int main(){
	int t,i,a,b;
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d%d", &a,&b);
		printf("%d %d\n", a*b/gcd(a,b),gcd(a,b));
	}
	return 0;
}
