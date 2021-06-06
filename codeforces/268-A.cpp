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
    int h[101] = {0}, g[101] = {0};
    rep(i,n){
        int a,b;
        cin >> a >> b;
        h[a]++;
        g[b]++;
    }
    ll count = 0;
    rep(i,101){
        count += h[i] * g[i];
    }
    cout << count;
    
    return 0;
}
