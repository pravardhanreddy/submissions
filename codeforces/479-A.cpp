#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
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

    int a, b, c;
    cin >> a >> b >> c;
    if(a==1 || b==1 || c==1){
        cout << max( {a+b+c, (a+b)*c, a*(b+c) } );
    }
    else cout << a*b*c;
    
    return 0;
}
