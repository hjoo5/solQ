#include <stdio.h>
int main(){
	int N;
	int mul;
	int sum = 0;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		scanf("%d", &mul);
		sum += mul;
	}
	printf("%d\n", sum-N+1);
	return 0;
}