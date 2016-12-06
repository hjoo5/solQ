#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int num[4]={};
	while(true){
		int max=30001;
		scanf("%d%d%d", &num[0],&num[1],&num[2]);
		if(!num[0] && !num[1] && !num[2]) break;
		sort(num,num+3);
		if(num[2]*num[2] == num[0]*num[0]+num[1]*num[1]) printf("right\n");
		else printf("wrong\n");
	}
	return 0;
}