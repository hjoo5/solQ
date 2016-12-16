#include <stdio.h>
int main(){
	int t;
	int a,b;
	int i;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		scanf("%d%d", &a,&b);
		printf("Case #%d: %d\n", i, a+b);
//		printf("Case #");
//		printf("%d", i);
//		printf(": ");
//		printf("%d\n", a+b);
	}
	return 0;
}
