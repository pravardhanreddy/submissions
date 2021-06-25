#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>
#include <cmath>

#define rep(i, n) for (int i = 0, _##i = (n); i < _##i; ++i)
#define REP(i,k,n) for (int i = k, _##i = (n); i < _##i; ++i)
typedef long long ll;
using namespace std;

void code_init () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    code_init();

    int n;
    cin >> n;

    if(n == 0) {
        cout << 1;
        return 0;
    }

    switch (n%4)
    {
    case 1:
        cout << 8;
        break;
    case 2:
        cout << 4;
        break;
    case 3:
        cout << 2;
        break;
    case 0:
        cout << 6;
        break;
    
    default:
        break;
    }
    
    return 0;
}
