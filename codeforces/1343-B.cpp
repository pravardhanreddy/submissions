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

void solve(){
    int n;
    cin >> n;
    if(n% 4 != 0){
        cout << "NO" << endl;
        return;
    }
    else {
        cout << "YES" << endl;
        REP(i, 1, n/2 + 1) cout << i*2 << " ";
        rep(i, n/2 - 1) cout << i*2 + 1 << " ";
        cout << n + n/2 - 1 << endl;
    }
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
