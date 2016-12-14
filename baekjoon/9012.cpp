#include <stdio.h>
int stack[51];
int top = 0;
int main(){
	int t;
	char input[55]={};
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%s", input);
		stack[top++] = input[0];
		for(int j=1;input[j];j++){
			if(stack[--top]!=0){
				if(stack[top]==input[j]){
					stack[top] = 0;
				}
				else{
					stack[++top] = input[j];
					top++;
				}
			}
			else{
				stack[top++] = input[j];
			}
		}
		if(top==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}