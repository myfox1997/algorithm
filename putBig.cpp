#include "stdafx.h"
#define OFFSET 500000

int Hash[1000001] = {0};
/*
int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		for (int i = 0; i < m; i++) {
			int num;
			scanf("%d", &num);
			Hash[num + OFFSET] = 1;
		}

		for (int j = 500000; j > -500000; j--) {
			if (Hash[j + OFFSET] == 1) {
				printf("%d", j);
				m--;

				if (m != 0)
					printf(" ");
				else
				{
					printf("\n");
					break;
				}
			}
		}
	}
	return 0;
}
*/