#include <stdio.h>
#include <algorithm>

int main(){
	int T;
	int a[4]={};
	scanf("%d", &T);
	while(T--){
		scanf("%d%d%d", &a[0], &a[1], &a[2]);
		std::sort(a, a+3);
		printf("%d\n", a[1]);
	}
	return 0;
}