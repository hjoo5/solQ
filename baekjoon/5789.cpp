#include <stdio.h>
#include <string.h>
int main(){
	int n;
	char input[1001]={};
	scanf("%d", &n);
	while(n--){
		int flag;
		scanf("%s",input);
		int len = strlen(input);
		for(int i=0;i<len/2;i++){
			if (input[i]+input[len-i-1] == 97) flag = 0;
			else flag = 1;
		}
		if (flag) printf("Do-it\n");
		else printf("Do-it-Not\n");
	}
	return 0;
}