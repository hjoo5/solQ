#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int N, M;
		int flag = 1;
		int n, a;
		int problem[101]={};
		scanf("%d %d", &N, &M);
		for(int i=0;i<N;i++){
			scanf("%d", &n);
			if((M+1)/2 > n)
				flag = 0;
			while(n--){
				scanf("%d", &a);
				problem[a]++;
			}
		}
		for(int i=1; i <= M; i++)
			if(problem[i]==0)
				flag = 0;
		if(flag)
			printf("Let's drink\n");
		else
			printf("Let's study\n");
	}
	return 0;
}