#include <stdio.h>
int main(){
	int T;
	int i;
	scanf("%d", &T);
	while(T--){
		int n, num;
		int sum=0;
		int s[11]={};
		int max = -1;
		int cnt = 0;
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d", &s[i]);
			sum += s[i];
		}
		sum = (sum + 2) / 2 -1;
		for(i = 0; i < n; i++){
			if(max <= s[i]){
				if(max == s[i]) cnt++;
				else{
					max = s[i];
					num = i+1;
					cnt = 0;
				}
			}
		}
		if(!cnt){
			if(s[num-1] > sum) printf("majority winner %d\n", num);
			else if(s[num-1] <= sum) printf("minority winner %d\n", num);
		}
		else if(cnt) printf("no winner\n");
	}
	return 0;
}