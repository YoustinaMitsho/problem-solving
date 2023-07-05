#include <iostream>
#include<algorithm>
#include <vector>
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using namespace std;
int main() {
	FAST;
	int cases; cin >> cases;
	while (cases--) {
		int num; cin >> num;
		string word; cin >> word;
		vector <int> vec;
		char k;
		int flag = 1;
		for (int i = 0; i < word.size(); i++) {
			k = word[i];
			for (int j = i; j < word.size(); j++) {
				if (k == word[j]) {
					vec.push_back(j);
				}
			}
			for (int m = 0; m < vec.size() - 1; m++) {
				if (vec[m + 1] - vec[m] > 1) {
					flag = 0;
				}
			}
			if (flag == 0) {
				cout << "NO\n";
				break;
			}
		}
		if (flag == 1) 
			cout << "YES\n";
	}
}