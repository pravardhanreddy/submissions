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

    int n,x,y,a,b,c,d,e,f,g,h;
    a=d=f=h=1000000;
    b=c=e=g=-1000000;
    // vector<pair<int,int>> p;
    cin >> n;
    while(n--){
        cin >> x >> y;
        // p.push_back({x,y});
        // a=min(a,y);
        // b=max(b,y);
        // g=max(g,x);
        // h=min(h,x);
        c=max(c,x-y);
        d=min(d,x-y);
        e=max(e,x+y);
        f=min(f,x+y);
    }
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    // cout << d << endl;
    // cout << e << endl;
    // cout << f << endl;
    // cout << g << endl;
    // cout << h << endl;
    ll ans;
    ans = c+e-d-f +4;
    cout << ans;            
    
    return 0;
}
