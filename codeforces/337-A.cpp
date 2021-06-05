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

void printvec(vector<int> &vec){
    rep(i,vec.size()) cout << vec[i] << " ";
    cout << endl;
}

int main()
{
    code_init();

    int n,m;
    cin >> n >> m;
    int a;
    vector<int> v;
    rep(i,m){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int best = INT32_MAX;

    rep(i, m-n+1){
        best = min(best, v[i+n-1] - v[i]);
    }

    cout << best;

    
    return 0;
}
