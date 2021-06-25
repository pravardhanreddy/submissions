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
    
    int n;
    cin >> n;
    int a[] = {0,0};
    vector<int> v(n);
    rep(i,n) {
        cin >> v[i];
        if(i%2 != v[i]%2) a[i%2]++;
    }
    if(a[0] == a[1]) cout << a[0] << endl;
    else cout << -1 << endl;


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
