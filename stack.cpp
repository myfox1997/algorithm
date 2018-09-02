#include "stdafx.h"

//括号匹配问题，利用栈解决

using namespace std;

stack<int> S;
char str[101];
char ans[101];
/*
int main() {
	while (scanf("%s", str) != EOF) {
		
		int i;
		for (i = 0; str[i] != 0; i++) {
			if (str[i] == '(') {
				S.push(i);
				ans[i] = ' ';
			}//end if1
			else if (str[i] == ')') {
				if (S.empty() != true) {
					S.pop();
					ans[i] = ' ';
				}//end if2
				else {
					ans[i] = '?';
				}//end else
			}//end else-if
			else
				ans[i] = ' ';
		}//end for

		while (S.empty() == false) {
			ans[S.top()] = '$';
			S.pop();
		}
		ans[i] = '\0';
		puts(str);
		puts(ans);
	}// end while
	return 0;
}*/