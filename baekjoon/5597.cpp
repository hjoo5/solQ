#include <stdio.h>
int main(){
	int report[31]={0};
	int num;
	for(int i=0;i<28;i++){
		scanf("%d", &num);
		report[num] = 1;
	}
	for(int i=1;i<=30;i++)
		if(report[i]!=1)
			printf("%d\n", i);
}
