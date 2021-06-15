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

vector<int> v;

int ans(int n, int a, int b, int c){
    if(n==0) return 0;
    if(n<0) return INT32_MIN;
    if(v[n] != -1) return v[n];

    int cuta = 1 + ans(n-a, a, b, c);
    int cutb = 1 + ans(n-b, a, b, c);
    int cutc = 1 + ans(n-c, a, b, c);
    v[n] = max({cuta, cutb, cutc});
    return v[n];
}

int main()
{
    code_init();

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    v.assign(n+1,-1);

    cout << ans(n, a, b, c);
    
    return 0;
}
