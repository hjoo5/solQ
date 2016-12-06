#include <stdio.h>
// int cycle(int num){
// 	int sum;
// 	int ans = 0;
// 	if(ans != num){
// 		sum = num/10 + num%10;
// 		ans = (num%10)*10 + sum%10;
// 		cnt++;
// 		return cycle(ans);
// 	}
// 	return cnt;
// }
int cycle(int first,int num,int cnt){
	int sum;
	int ans = 0;
	if(first == num && cnt > 0)
		return cnt;
	sum = num/10 + num%10;
	ans = (num%10)*10 + sum%10;
	return cycle(first, ans, cnt+1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", cycle(n, n ,0));
	return 0;
}