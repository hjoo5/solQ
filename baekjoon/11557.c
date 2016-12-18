#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n, i;
		char name[101][21]={};
		int L, ans;
		int max = 0;
		scanf("%d", &n);
		for(i=0;i<n;i++){
			scanf("%s%d", name[i], &L);
			if(max < L){
				max = L;
				ans = i;
			}
		}
		printf("%s\n", name[ans]);
	}
	return 0;
}