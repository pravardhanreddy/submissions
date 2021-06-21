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

    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> v;
    v.resize(n);
    rep(i,n) cin >> v[i];
    sort(v.begin(), v.end());
    REP(i,1, n/3 + 1){
        if(v[i*3 - 1] <= 5 - k) ans++;
        else break;
    }

    cout << ans;
    
    return 0;
}
