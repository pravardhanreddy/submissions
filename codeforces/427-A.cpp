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

    int n, ans = 0, acc = 0;
    cin >> n;
    rep(i,n){
        int t;
        cin >> t;
        if(t<0 && acc < 1) ans++;
        else if(t<0 && acc > 0) acc--;
        else if(t>0) acc += t;

    }
    cout << ans;
    
    return 0;
}
