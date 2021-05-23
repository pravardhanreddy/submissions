#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>

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

int main()
{
    code_init();

    string a,b;
    cin >> a >> b;
    // cout << a << endl << b;
    rep(i,a.length()){
        if(tolower(a[i]) == tolower(b[i])) continue;
        else if(tolower(a[i]) < tolower(b[i])) {
            cout << -1;
            return 0;
        }
        else {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    
    return 0;
}
