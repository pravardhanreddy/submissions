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

    int n, t;
    cin >> n >> t;
    vector<int> v;
    v.resize(n+1);
    rep(i,n) cin >> v[i+1];
    int curr = 1;
    while(curr <= t){
        if(curr == t) {
            cout << "YES";
            return 0;
        }
        curr += v[curr];
    }
    cout << "NO";
    
    return 0;
}
