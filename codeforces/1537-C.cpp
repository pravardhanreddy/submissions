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
    vector<int> h;
    cin >> n;
    h.resize(n);
    rep(i,n) cin >> h[i];
    sort(h.begin(), h.end());
    if(n == 2){
        cout << h[0] << " " << h[1] << endl;
        return;
    }
    int p = 0, diff = INT32_MAX;
    rep(i,n-1){
        if(h[i+1] -h[i] < diff){
            diff = h[i+1] -h[i];
            p = i;
        }
    }
    // if(p==0){
    //     rep(i,n) cout << h[i] << " ";
    //     cout << endl;
    //     return;
    // }
    REP(i,p+1, n) cout << h[i] << " ";
    rep(i,p+1) cout << h[i] << " ";
    cout << endl;
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
