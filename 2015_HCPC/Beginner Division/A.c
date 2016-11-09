#include <stdio.h>
int main(){
	int T;
	int num[101]={};
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			scanf("%d", &num[j]);
		}
		for(int j=0;j<n;j++){
			printf("%d %d\n", j+1, num[j]);
		}
	}
	return 0;
}