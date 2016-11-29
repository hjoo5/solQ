#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int ans=0;
		int n;
		int room[101]={};
		scanf("%d", &n);
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j+=i){
				if(room[j])
					room[j] = 0;
				else
					room[j] = 1;
			}
		}
		for(int i=1;i<=n;i++){
			if(room[i]) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}