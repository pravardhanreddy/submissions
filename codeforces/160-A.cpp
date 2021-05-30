#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <vector>

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

    int n,t;
    cin >> n;
    vector<int> v;
    int count = 0;

    rep (i, n){
        cin >> t;
        v.push_back(t);
        count += t;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int rcount = 0;
    while(rcount <= count - rcount){
        ans++;
        rcount += *(v.end() - ans);
    }
    cout << ans;
    return 0;
}
