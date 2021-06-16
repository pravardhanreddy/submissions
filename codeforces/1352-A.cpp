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
    int a, b, c, d, e;
    a = n/10000;
    b = (n/1000) % 10;
    c = (n/100) % 10;
    d = (n/10) % 10;
    e = n % 10;

    int count = 0;

    if(a) count++;
    if(b) count++;
    if(c) count++;
    if(d) count++;
    if(e) count++;

    cout << count << endl;
    if(a) cout << a << "0000 ";
    if(b) cout << b << "000 ";
    if(c) cout << c << "00 ";
    if(d) cout << d << "0 ";
    if(e) cout << e;
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
