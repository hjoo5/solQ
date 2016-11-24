#include <stdio.h>
int main(){
	int i;
	int flag = 0, flag1 = 0;
	int h_cnt = 0, s_cnt = 0;
	char input[260]={};
	scanf("%[^\n]", input);
	for(i=0;input[i];i++){
		if(input[i] == ' ')
			i++;
		if(input[i] == ':')
			flag = 1;
		else if(flag == 1){
			if(input[i] == '-')
				flag1 = 1;
			else if(flag1 == 1){
				if(input[i] == ')'){
					h_cnt++;
					flag1 = 0;
				}
				if(input[i] == '('){
					s_cnt++;
					flag1 = 0;
				}
			}
			else if(input[i] != '-'){
				flag = 0;
			}
		}
	}
	if(h_cnt == 0 && s_cnt == 0)
		printf("none\n");
	else if(h_cnt == s_cnt)
		printf("unsure\n");
	else if(h_cnt > s_cnt)
		printf("happy\n");
	else if(h_cnt < s_cnt)
		printf("sad\n");

	return 0;
}