#include <stdio.h>
int main(){
	int m, d;
	int month[] = {31,28,31,30,31,30,31,31,30,31,30};
	char day[10][10]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	scanf("%d%d", &d, &m);
	for(int i=0;i<m-1;i++){
		d += month[i];
	}
	printf("%s\n", day[d % 7]);
	return 0;
}