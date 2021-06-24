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

void solve(){
    int w, h, n;
    cin >> w >> h >> n;
    int ans = 1;
    while(w%2 == 0){
        ans *= 2;
        w /= 2;
    }

    while(h%2 == 0){
        ans *= 2;
        h /= 2;
    }

    if(ans >= n) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    code_init();

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
