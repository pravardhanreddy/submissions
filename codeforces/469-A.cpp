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

    int n;
    cin >> n;
    int p, q;
    set<int> s;
    cin >> p;
    while(p--) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cin >> q;
    while(q--){
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    bool f = true;
    REP(i, 1, n+1){
        if(!s.count(i)) f = false;
    }

    if(f) cout << "I become the guy." ;
    else cout << "Oh, my keyboard!";
    
    return 0;
}
