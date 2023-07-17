#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int l, r; cin >> l >> r;
    int n = r - l + 1;
    vector <int> vec(n);
    int sum = 0;
    for (size_t i = 0; i <= r; i++)
    {
        vec.push_back(l + i);
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << vec[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (vec[i] <= 4) sum += 4;
        else sum += 7;
    }

    cout << sum;
}