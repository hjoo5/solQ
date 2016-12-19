#include <stdio.h> 
int main(){
	int n,i,num,ans=0,chair[101]={0};
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &num);
		chair[num]+=1;
	}
	for(i=1;i<=100;i++){
		if(chair[i]>=1)
			chair[i]-=1;
		ans+=chair[i];
	}
	printf("%d", ans);
	return 0;
}
