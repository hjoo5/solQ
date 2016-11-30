#include <stdio.h>
int main(){
	int a,b,v;
	int flag=1;
	int day=0;
	scanf("%d%d%d", &a,&b,&v);
	while(true){
		if(a-b > v){
			day++;
			break;
		}
		else{
			if(a >= v){
				day++;
				break;
			}
			else{
				day++;
				v -= a-b;
			}
		}
	}
	printf("%d\n", day);
	return 0;
}
