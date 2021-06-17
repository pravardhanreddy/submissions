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
    vector<int> v;
    vector<ll> dp;
    v.resize(100005);
    dp.resize(100005);
    while(n--){
        int t;
        cin >> t;
        v[t]++;
    }
    dp[1] = v[1];

    REP(i, 2, 100004){
        dp[i] = max(dp[i-1], dp[i-2] + (ll)i*v[i]);
    }

    cout << dp[100002];

    return 0;
}
