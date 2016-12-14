#include <stdio.h>
int main(){
	int n;
	bool flag = true;
	while(flag){
		int yak[26]={};
		int j=0, sum=0;
		scanf("%d", &n);
		if(n==-1){
			flag = false;
			return 0;
		}
		for(int i=1;i<n;i++){
			if(n%i==0){
				yak[j] = i;
				sum += yak[j];
				j++;
			}
		}
		if(n == sum){
			printf("%d =", n);
			for(j=0;yak[j+1];j++)
				printf(" %d +", yak[j]);
			printf(" %d\n", yak[j]);
		}
		else{
			printf("%d is NOT perfect.\n", n);
		}
	}
	return 0;
}