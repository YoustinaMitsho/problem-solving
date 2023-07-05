#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string p1, p2;
    for (size_t i = 0; i < (s.size() - 1) / 2; i++)
    {
        p1 += s[i];
    }
    
    for (size_t i = ((s.size() + 3) / 2) - 1; i < s.size(); i++)
    {
        p2 += s[i];
    }
    
    string result = (p1 == p2) ? "Yes" : "No";
    cout << result;
}