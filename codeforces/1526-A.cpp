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

void solve(){
    int n;
    cin >> n;
    int temp;
    vector<int> v;
    rep(i,2*n){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    rep(i,n){
        cout << v[i] << " " << v[2*n-i-1] << " ";
    }
    cout << endl;
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
