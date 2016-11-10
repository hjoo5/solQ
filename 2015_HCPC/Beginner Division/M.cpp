#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int N, num;
		int ans=0;
		scanf("%d", &N);
		for(int i=0;i<5;i++){
			scanf("%d", &num);
			if(num <= N)
				ans++;
		}
		printf("%s\n", ans<3? "DODGE" : "CARRY");
	}
	return 0;
}