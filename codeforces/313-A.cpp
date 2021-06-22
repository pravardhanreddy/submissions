#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>

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
    if(n>0) cout << n;
    else {
        if(to_string(n).length() == 2) cout << 0;
        else {
            if(n % 10 < (n/10)%10) cout << n/10;
            else cout << n%10 + (n/100)*10;
        }
    }
    
    return 0;
}
