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

int calc(string m, string l){
    if(m.length() == 1) return m[0] - l[0];
    string s(m.length(), '1');
    return ((m[0] - l[0])* stoi(s)) + calc(m.substr(1,m.length()), l.substr(1,l.length()));
}

void solve(){
    int l,r;
    cin >> l >> r;
    string ls = to_string(l);
    string rs = to_string(r);
    
    int len = rs.length() - ls.length();
    string s(len, '0');
    ls = s + ls;


    cout << calc(rs, ls) << endl;
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
