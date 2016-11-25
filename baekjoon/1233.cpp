#include <cstdio>
int main(){
	int s1, s2, s3;
	int dice[81]={};
	scanf("%d%d%d", &s1,&s2,&s3);
	for(int i=1;i<=s1;i++)
		for(int j=1;j<=s2;j++)
			for(int k=1;k<=s3;k++)
				dice[i+j+k]++;
	int max = 0;
	int ans;
	for(int i=3; i<=s1+s2+s3; i++){
		if(dice[i] > max){
			max = dice[i];
			ans = i;
		}
	}
	printf("%d\n", ans);
	return 0;
}