#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
int main() {
	string s;
	getline(cin, s);
	sort(s.begin(), s.end());
	std::cout << s <<"\n";
}