#include "stdafx.h"

using namespace std;

//核心算法，二分查找

struct student
{
	char no[100];  //student Number,   for sort the NO.  set it as char
	char name[100];  //student Name
	int age;
	char sex[5];
	bool operator < (const student &b) const {   //sort student by NO.
		return strcmp(no, b.no) < 0;
	}
}buf[1000];
/*
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%s%s%s%d", buf[i].no, buf[i].name, buf[i].sex, &buf[i].age);
		}
			sort(buf, buf + n);
			int t;
			scanf("%d", &t);

			while (t-- != 0) {
				int ans = -1;
				char x[50];
				scanf("%s", x);

				int base = 0, top = n - 1;
				while (top >= base) {
					int mid = (top + base) / 2;
					int tmp = strcmp(buf[mid].no, x);

					if (tmp == 0) {   //if find
						ans = mid;
						break;
					}
					else if (tmp > 0) {  //mid is over x
						top = mid - 1;
					}
					else				//mid is below x
						base = mid + 1;
				}
				if (ans == -1) {
					printf("No Answer\n");
				}
				else {
					printf("%s%s%s%d\n", buf[ans].no, buf[ans].name, buf[ans].sex, buf[ans].age);
				}
			}
		
	}
	return 0;
}*/