#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int l, w; cin >> l >> w;
    char arr[12][12];
    for (size_t i = 0; i < l; i++)
    {
        for (size_t j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }
    long long counter = 0;

    for (size_t i = 0; i < l; i++)
    {
        bool flg = true;
        for (size_t j = 0; j < w; j++)
        {
            if (arr[i][j] == 'S') { flg = false; break; }
        }
        if (flg == true) {
            counter += w;
        }
    }

    int n = counter / w;

    for (size_t i = 0; i < w; i++)
    {
        bool flg = true;
        for (size_t j = 0; j < l; j++)
        {
            if (arr[j][i] == 'S') { flg = false; break; }
        }
        if (flg == true) {
            counter += (l - n);
        }
    }
    cout << counter;
}