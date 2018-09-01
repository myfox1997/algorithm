#include "stdafx.h"
#define N 101

using namespace std;    //最小生成树，克鲁斯卡尔算法

int Tree[N];

int findRoot(int x) {
	if (Tree[x] == -1)
		return x;
	else {
		int temp = findRoot(Tree[x]);
		Tree[x] = temp;
		return temp;
	}
}

struct Edge
{
	int first, second;
	int cost;
	bool operator < (const Edge &b) const {
		return cost < b.cost;
	}
}edge[6000];

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0)
			break;
		for (int i = 1; i <= n * (n - 1) / 2; i++) {
			scanf("%d%d%d", &edge[i].first, &edge[i].second, &edge[i].cost);
		}

		sort(edge + 1, edge + n*(n - 1) / 2 + 1);

		for (int i = 1; i <= n * (n - 1) / 2; i++) {  //init the Tree
			Tree[i] = -1;
		}
		int ans = 0;

		for (int i = 1; i <= n*(n - 1) / 2; i++) {
			int a = findRoot(edge[i].first);
			int b = findRoot(edge[i].second);

			if (a != b)
			{
				Tree[a] = b;
				ans = ans + edge[i].cost;
			}
				
		}
		printf("%d", ans);
	}
	return 0;
}