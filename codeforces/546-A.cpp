#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <vector>

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

    int k,n,w;
    cin >> k >> n >> w;

    int amt = w*(w+1)*k/2;
    if(amt<n) {
        cout << 0;
        return 0;
    }
    cout << amt -n;
    
    return 0;
}
