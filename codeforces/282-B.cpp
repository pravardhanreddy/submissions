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

    int t,a,g;
    int ta=0, tg=0;
    string s;
    cin >> t;
    t--;
    while(t--) {
        cin >> a >> g;
        if(abs(a+ta-tg) <= 500) s.append("A"), ta+=a;
        else s.append("G"), tg+=g;
    }
    cin >> a >> g;
    if(abs(a+ta-tg) <= 500) {
        s.append("A");
        cout << s;
    }
    else if(abs(g+tg-ta) <= 500) {
        s.append("G");
        cout << s;
    }
    else cout << -1;
    
    return 0;
}
