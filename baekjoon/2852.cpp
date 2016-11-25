#include <cstdio>
int main(){
	int N;
	int teamnum;
	int team[3]={};
	int fixs = 0;
	int team1s = 0;
	int team2s = 0;
	scanf("%d", &N);
	while(N--){
		int m = 0, s = 0;
		scanf("%d %d:%d", &teamnum, &m, &s);
		if(team[1] > team[2])
			team1s += m*60 + s - fixs;
		if(team[1] < team[2])
			team2s += m*60 + s - fixs;
		fixs = m*60 + s;
		team[teamnum]++;
	}
	if(team[1] > team[2])
		team1s += 48*60 - fixs;
	if(team[1] < team[2])
		team2s += 48*60 - fixs;
	printf("%.2d:%.2d\n%.2d:%.2d", team1s/60, team1s%60, team2s/60, team2s%60);
	return 0;
}