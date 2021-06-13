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

int main()
{
    code_init();

    int n,m;
    cin >> n >> m;
    rep(i,n){
        if(i%2 == 0){
            cout << string(m,'#') << endl;
        }
        else if(i%4 == 1){
            cout << string(m-1, '.') << "#" << endl;
        }
        else cout << "#" << string(m-1, '.') << endl;
    }
    
    return 0;
}
