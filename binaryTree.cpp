#include "stdafx.h"

//�����������������Ľ�������غ������

using namespace std;

struct Node
{
	Node *lchild;
	Node *rchild;
	char c;
}Tree[50];

int cnt = 0;  //�˴��������ܹ�ʹ��count����std�б���������
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

Node *buildTree(int s1, int e1, int s2, int e2) {  //����Ŀ�ʼ����������Ŀ�ʼ����
	Node * ret = initTree();
	ret->c = str1[s1];  //�ҵ�����ڵ�ĵ�һ���ַ�����Ϊ��
	int index;
	for (int i = s2; i <= e2; i++) {  //�ҵ������и���λ�ã������ֳ�������
		if (str2[i] == str1[s1]) {
			index = i;
			break;
		}
	}

	if (index != s2) {  //��������Ϊ��
		ret->lchild = buildTree(s1 + 1, s1 + (index - s2), s2, index - 1);  //д��������ɷ���
	}
	if (index != e2) {  //��������Ϊ��
		ret->rchild = buildTree(s1 + (index - s2) + 1, e1, index + 1, e2);  //д��������ɷ���
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