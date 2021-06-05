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

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    REP(i, 1, d+1){
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) count++;
    }
    cout << count;
    
    return 0;
}
