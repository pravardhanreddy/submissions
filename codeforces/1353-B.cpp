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
    int n, k;
    cin >> n >> k;
    vector<int> a,b;
    a.resize(n);
    b.resize(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll sum = 0;
    
    vector<int> c;
    c.resize(2*k);
    rep(i,k) c[i] = a[i];
    REP(i,k,2*k) c[i] = b[n - 2*k + i];
    sort(c.begin(), c.end());
    REP(i, k, 2*k) sum += c[i];
    REP(i, k, n) sum += a[i];
    cout << sum << endl;
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
