#include <iostream>
#include <vector>
#define FAST ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
using namespace std;
int main() {
	FAST;
	int tc; cin >> tc;
	while (tc--) {
		int num; cin >> num;
		vector <int> vec;
		for (int i = num; i > 0; i--) {
			vec.push_back(i);
		}

		for (size_t i = 0; i < vec.size(); i++)
		{
			if (vec[i] == i + 1) {
				int temp = vec[i];
				vec[i] = vec[i + 1];
				vec[i + 1] = temp;
			}
		}
		for (auto i : vec) cout << i << " ";
	}
}