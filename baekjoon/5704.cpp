#include <stdio.h>
int main(){
	while(true){
		int flag = 1;
		int check[27]={};
		char input[201]={};
		gets(input);
		if(input[0] == '*')
			break;
		for(int i=0;input[i];i++)
			check[input[i]-'a'+1] = 1;
		for(int i=1;i<27;i++)
			if(check[i]!=1)
				flag = 0;
		if(flag)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}