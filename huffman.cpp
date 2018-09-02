#include "stdafx.h"

//huffman树的所有非叶子节点权值求和

using namespace std;

/*
priority_queue<int> P;  //创建一个大顶堆
*/
priority_queue<int, vector<int>, greater<int>> Q; //创建一个小顶堆,利用优先级队列实现
/*
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {  //while1
		if (n == 0)
			break;
		while (Q.empty() == false)
			Q.pop();
		int ans = 0;
		for (int i = 0; i < n; i++) {    //数据入堆
			int tmpNum;
			scanf("%d", &tmpNum);
			Q.push(tmpNum);
		} //end for
		while (Q.size() > 1) {  //while2
			int first = Q.top();
			Q.pop();
			int second = Q.top();
			Q.pop();
			int father = first + second;
			Q.push(father);
			ans += father;
		}  //end while2
		printf("%d", ans);
	}  //end while1
	return 0;
}*/