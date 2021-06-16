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

void solve(){
    
    int n;
    cin >> n;
    vector<int> v;
    int temp;
    rep(i,n){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    while(v.size()>1){

        if(v[1]-v[0] < 2) v.erase(v.begin());
        else {
            cout << "NO" << endl;
            return;
        }

    }
    cout << "YES" << endl;

}

int main()
{
    code_init();

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
