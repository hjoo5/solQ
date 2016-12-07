#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int num[4];
	char alpa[4]={};
	scanf("%d%d%d", &num[0],&num[1],&num[2]);
	scanf("%s", alpa);
	sort(num,num+3);
	for(int i=0;i<3;i++){
		printf("%d ", num[alpa[i]-65]);
	}
	return 0;
}