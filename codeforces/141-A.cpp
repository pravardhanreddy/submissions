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

    string a,b,c;
    cin >> a >> b >> c;
    // bool flag = true;
    rep(i, a.length()){
        if(c.find(a[i]) == string::npos) {
            cout << "NO";
            return 0;
        }
        else c.erase(c.find(a[i]),1);
        // cout << c << endl;
    }
    // cout << "HEllo";
    rep(j, b.length()){
        if(c.find(b[j]) == string::npos) {
            cout << "NO";
            return 0;
        }
        else c.erase(c.find(b[j]),1);
        // cout << c << endl;
    }
    if(c.length() == 0) cout << "YES";
    else cout << "NO";
    
    return 0;
}
