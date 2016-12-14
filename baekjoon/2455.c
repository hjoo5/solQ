#include <stdio.h>
int main(){
	int a,b,ans=0,max=0,t=4;
	while(t--){
		scanf("%d%d", &a,&b);
		ans+=b-a;
		if(ans>max)
			max=ans;
	}
	printf("%d", max);
	return 0;
}