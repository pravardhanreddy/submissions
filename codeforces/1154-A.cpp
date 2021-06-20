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

    vector<int> v;
    v.resize(4);
    rep(i,4) cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[3] - v[2] << " "  << v[3] - v[1] << " " << v[3] - v[0];  
    
    return 0;
}
