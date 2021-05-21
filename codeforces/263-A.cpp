#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>

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

    int n=0,i=0;
    for(i=0; i<25 && n!=1; i++) cin >> n;
    i--;
    // cout << i << endl;
    int r,c;
    r = abs(i / 5 - 2);
    // cout << r << endl;
    c = abs(i%5 - 2);
    // cout << c << endl;
    cout << r+c;
    
    return 0;
}
