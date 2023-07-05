#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int digit = (log(n) / log(k) ) + 1;
    cout << digit;
}