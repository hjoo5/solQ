#include <stdio.h>
int main(){
	int h,m,s,ah,am,as;
	for(int i=0;i<3;i++){
		scanf("%d%d%d%d%d%d", &h, &m, &s, &ah, &am, &as);
		if(s > as){
			am--;
			as += 60;
		}
		if(m > am){
			ah--;
			am += 60;
		}
		printf("%d %d %d\n", ah-h,am-m,as-s);
	}
	return 0;
}