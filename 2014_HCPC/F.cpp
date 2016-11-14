#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n, num;
		int sum_H = 0;
		int sum_JJ = 0;
		scanf("%d", &n);
		while(n--){
			scanf("%d", &num);
			if(num%2==0)
				sum_JJ += num;
			else
				sum_H += num;
		}
		printf("%d %d\n", sum_JJ, sum_H);
	}
	return 0;
}