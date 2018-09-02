#include "stdafx.h"

//给出先序和中序遍历的结果，返回后序遍历

using namespace std;

struct Node
{
	Node *lchild;
	Node *rchild;
	char c;
}Tree[50];

int cnt = 0;  //此处命名不能够使用count，与std中报重名错误
Node *initTree() {
	Tree[cnt].lchild = Tree[cnt].rchild = NULL;
	return &Tree[cnt++];
}
char str1[40], str2[40];

void postOrder(Node *T) {
	if (T->lchild != NULL) {
		postOrder(T->lchild);
	}
	if (T->rchild != NULL) {
		postOrder(T->rchild);
	}
	printf("%c", T->c);
}

Node *buildTree(int s1, int e1, int s2, int e2) {  //先序的开始结束、中序的开始结束
	Node * ret = initTree();
	ret->c = str1[s1];  //找到先序节点的第一个字符，即为根
	int index;
	for (int i = s2; i <= e2; i++) {  //找到中序中根的位置，将串分成两部分
		if (str2[i] == str1[s1]) {
			index = i;
			break;
		}
	}

	if (index != s2) {  //左子树不为空
		ret->lchild = buildTree(s1 + 1, s1 + (index - s2), s2, index - 1);  //写遍历结果可分析
	}
	if (index != e2) {  //右子树不为空
		ret->rchild = buildTree(s1 + (index - s2) + 1, e1, index + 1, e2);  //写遍历结果可分析
	}

	return ret;
}
int main() {
	while (scanf("%s", str1) != EOF) {
		scanf("%s", str2);
		cnt = 0;
		int L1 = strlen(str1);
		int L2 = strlen(str2);
		Node *T = buildTree(0, L1 - 1, 0, L2 - 1);
		postOrder(T);
		printf("\nFIN\n");
	}  //end while
	return 0;
}