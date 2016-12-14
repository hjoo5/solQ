#include <stdio.h>
#include <algorithm>
int main(){
	int T;
	int num[6]={};
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		for(int j=0;j<5;j++){
			scanf("%d", &num[j]);
		}
		std::sort(num,num+5);
		if((num[3]-num[1]) >= 4)
			printf("KIN\n");
		else
			printf("%d\n", num[1]+num[2]+num[3]);
	}
	return 0;
}