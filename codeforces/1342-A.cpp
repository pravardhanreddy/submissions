#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <vector>

#define rep(i, n) for (int i = 0, _##i = (n); i < _##i; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
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
    int x,y;
    cin >> x >> y;
    int a,b;
    cin >> a >> b;

    if(x < 0 && y < 0){
        x = -x;
        y = -y;
    }

    bool sign = (x < 0)? (y >= 0): (y < 0);
    if(sign) {
        cout << abs(x-y)*a << endl;
    }
    else {
        cout << (ll)abs(x-y)*a + (ll)min(x,y)*min(2*a, b) << endl;
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
