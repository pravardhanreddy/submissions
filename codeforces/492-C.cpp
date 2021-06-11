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
bool sortcol( const vector<ll>& v1,
               const vector<ll>& v2 ) {
 return v1[1] < v2[1];
}
int main()
{
    code_init();

    ll n, r, avg;
    cin >> n >> r >> avg;
    vector< vector< ll > > vec;
    ll ans = 0, rem = 0;

    rep(i,n){
        ll a,b;
        cin >> a >> b;
        rem += avg -a;
        vec.push_back({a,b});
    }

    sort(vec.begin(), vec.end(), sortcol);
    ll i = 0;
    while(rem>0){
        if(vec[i][0] != r){
            ll t = min(rem, r-vec[i][0]);
            rem-=t;
            ans += t*vec[i][1];
        }
        i++;
    }

    cout << ans;

    
    return 0;
}
