#include "stdafx.h"

//huffman�������з�Ҷ�ӽڵ�Ȩֵ���

using namespace std;

/*
priority_queue<int> P;  //����һ���󶥶�
*/
priority_queue<int, vector<int>, greater<int>> Q; //����һ��С����,�������ȼ�����ʵ��
/*
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {  //while1
		if (n == 0)
			break;
		while (Q.empty() == false)
			Q.pop();
		int ans = 0;
		for (int i = 0; i < n; i++) {    //�������
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