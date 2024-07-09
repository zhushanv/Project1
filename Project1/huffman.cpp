#include<queue>
#include"huffman.h"
using namespace std;

void putInqueue(priority_queue<int, vector<int>, greater<int>>q, string s) {
	int i = 1;
	int num = 1;
	string temp = s;
	sort(temp.begin(), temp.end());
	//统计字符出现频率，并将其存入优先队列中
	while (temp[i - 1] != '\0') {
		if (temp[i] != temp[i - 1]) {
			q.push(num);
			num = 1;
		}
		else num++;
		i++;
	}
}

