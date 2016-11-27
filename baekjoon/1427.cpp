#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
	if(a > b)
		return true;
	return false;
}

int main(){
	long long int N;
	int num[10]={};
	int cnt = 0;
	scanf("%lld", &N);
	for(int i = 0; N != 0; i++){
		num[i] = N % 10;
		N /= 10;
		cnt++;
	}
	sort(num, num+cnt, cmp);
	for(int i=0; i<cnt;i++){
		printf("%d", num[i]);
	}
	return 0;
}