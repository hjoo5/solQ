#include <stdio.h>
int main(){
	int n,i,j,cnt=0,ans=0;
	char OX[81]={};
	scanf("%d", &n);
	for(i=0;i<n;i++){
		ans=0;
		scanf("%s", OX);
		cnt=1;
		if(OX[0]=='O'){
			ans += cnt;
		}
		for(j=1;OX[j];j++){
			if(OX[j]=='O'){
				if(OX[j-1]=='O'){
					cnt++;
					ans += cnt;
				}
				else if(OX[j-1]=='X'){
					ans += cnt;
					cnt=1;
				}
			}
			else if(OX[j]=='X'){
				cnt=1;
			}
		}
		printf("%d\n", ans);
	}	
	return 0;
}
