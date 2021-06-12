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

    int n, m;
    cin >> n >> m;
    ll ans = 0;
    int curr = 1;
    while(m--){
        int temp;
        cin >> temp;
        if(temp >= curr){
            ans += temp - curr;
        }
        else {
            ans += n - curr + temp;
        }
        curr = temp;
    }

    cout << ans;
    
    return 0;
}
