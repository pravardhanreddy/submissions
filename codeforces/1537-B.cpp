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
int mind(int a, int b, int c, int d, int e, int f){
    return (abs(c-a) + abs(d-b) + abs(e-c) + abs(f-d) + abs(a-e) + abs(b-f));
}
void solve(){
    int n,m,i,j;
    cin >> n >> m >> i >> j;
    cout << "1 1 " << n << " " << m << endl;
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
