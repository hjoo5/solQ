#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int jun = 0;
		int yun = 0;
		int n = 7;
		while(n--){
			scanf("%d %d", &jun, &yun);
			jun += jun;
			yun += yun;
		}
		if(jun > yun)
			printf("God Junbeom bless you\n");
		else if(jun < yun)
			printf("Cute Yunseong I love you\n");
		else
			printf("Seo A Jeong solo\n");
	}
	return 0;
}