#include "stdafx.h"

//��ӡһ����Ϊh���ϵ�Ϊh�����Σ�ÿһ�б���һ�ж�����*�� �Ҷ��롣
/*
int main() {
	int h;
	while (scanf("%d", &h) != EOF) {
		int underCount = h + (h - 1) * 2;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < underCount; j++) {
				if (j < underCount - (h + i * 2))
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
	}
	
	return 0;
}
*/