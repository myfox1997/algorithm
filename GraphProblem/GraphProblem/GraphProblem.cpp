// GraphProblem.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

//#define N 1000

using namespace std;

//use vector to simulate the link
/*int Tree[N];

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
	int nextNode;
	int cost;
};*/
/*
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		if (n == 0)
			break;

		for (int i = 1; i <= n; i++) {
			Tree[i] = -1;
		}

		while(m-- != 0){
			int a, b;
			scanf("%d%d", &a, &b);

			a = findRoot(a);
			b = findRoot(b);  //���Ҹ�

			if (a != b)
				Tree[a] = b;   //����ͬ����ϲ���Ϊһ����
		}

		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (Tree[i] == -1)
				ans++;
		}
		printf("%d\n", ans - 1);
	}
    return 0;
}*/

