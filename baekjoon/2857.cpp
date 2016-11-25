#include <cstdio>
int main(){
	int flag=0;
	for(int i=1;i<=5;i++){
		char input[15]={};
		scanf("%s", input);
		for(int j=0;input[j];j++){
			if(input[j]=='F' && input[j+1]=='B' && input[j+2]=='I'){
				flag = 1;
				printf("%d ", i);
				break;
			}
		}
	}
	if(!flag)
		printf("HE GOT AWAY!\n");
	return 0;
}