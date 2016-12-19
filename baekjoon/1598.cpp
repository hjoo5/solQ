#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,m;
	int w,h;
	scanf("%d%d", &n,&m);
	n--,m--;
	w = abs((n / 4) - (m / 4));
	h = abs((n % 4) - (m % 4));
	printf("%d\n", w+h);
	return 0;
}