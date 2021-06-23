#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>
#include <cmath>

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

    int m,s;
    cin >> m >> s;

    if(s == 0) {
        if(m==1) cout << "0 0";
        else cout << "-1 -1";
        return 0;
    }

    int req = s/9;
    if(s%9 != 0) req++;

    if(req > m) {
        cout << "-1 -1";
        return 0;
    }

    if(req == m){
        string l(s/9,'9');
        if(s%9 == 0) {
            cout << l << " " << l;
            return 0;
        }
        cout << s%9 << l << " " << l << s%9;
    }    
    else {
        string l(s/9,'9');
        string z(m-req-1, '0');
        if(s%9 == 0){
            cout << 1 << z << 8 << l.substr(0,(s/9)-1) << " " << l << z << 0;
            return 0;
        }
        cout << 1 << z << (s%9)-1 << l << " " << l << (s%9) << z << 0;
    }
    
    return 0;
}
