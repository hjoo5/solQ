#include <stdio.h>
int main()
{
	int a,i,j,k;
	scanf("%d", &a);
	for(i=0;i<a;i++){
		for(j=a;j>i+1;j--){
			printf(" ");
		}
		for(k=0;k<i+1;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
