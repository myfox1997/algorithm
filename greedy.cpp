#include "stdafx.h"

//greedy algorithm of buying something

using namespace std;

struct Good {
	double weight;
	double price;
	double cost_performance;
	
	bool operator < (const Good &b) const {
		return cost_performance > b.cost_performance;
	}
}buf[1000];
/*
int main() {
	double m;
	int n;
	while (scanf("%lf%d", &m, &n) != EOF) {   //get data
		if (m == -1 && n == -1)
			break;
		for (int i = 0; i < n; i++) {
			scanf("%lf%lf", &buf[i].weight, &buf[i].price);
			buf[i].cost_performance = buf[i].weight / buf[i].price;
		}
		sort(buf, buf + n);  //sort by dec

		int index = 0;
		double ans = 0;
		
		while (m > 0 && index < n)  //if we still have money and still have goods
		{
			if (m > buf[index].price) {   //buy all of this good
				ans += buf[index].weight;
				m -= buf[index].price;
			}
			else {   //buy a part of this good
				ans += buf[index].weight * (m / buf[index].price);
				m = 0;
			}
			index++;
		}
		printf("%.3lf\n", ans);
	}
	return 0;
}*/