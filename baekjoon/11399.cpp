#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int N;
	int num[1001]={};
	int sum = 0;
	scanf("%d", &N);
	for(int i=0;i<N;i++)
		scanf("%d", &num[i]);
	sort(num, num+N);
	for(int i=0, j=N; i < N; i++, j--)
		sum += j * num[i];
	printf("%d\n", sum);
	return 0;
}