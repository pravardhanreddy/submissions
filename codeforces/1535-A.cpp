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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr[4] = {a,b,c,d};
    sort(arr, arr+4);
    if(arr[3] == max(a,b) && arr[2] == min(a,b)) cout << "NO" << endl;
    else if (arr[3] == max(c,d) && arr[2] == min(c,d)) cout << "NO" << endl;
    else cout << "YES" << endl;
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
