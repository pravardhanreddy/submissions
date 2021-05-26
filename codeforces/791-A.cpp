#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <vector>

#define rep(i, n) for (int i = 0, _##i = (n); i < _##i; ++i)
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

    int a,b;
    cin >> a >> b;

    int count = 0;

    while(true) {
        a *= 3;
        b *= 2;
        count++;
        if(a> b) break;
    }

    cout << count;
    
    return 0;
}
