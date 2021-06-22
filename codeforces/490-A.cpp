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

    int n;
    cin >> n;
    vector<int> a,b,c;
    rep(i,n) {
        int t;
        cin >> t;
        if(t ==1) a.push_back(i+1);
        else if(t ==2) b.push_back(i+1);
        else c.push_back(i+1);
    }
    int ans = min({a.size(), b.size(), c.size()});

    cout << ans << endl;

    while(ans--){
        cout << a.back() << " " << b.back() << " " << c.back() << endl;
        a.pop_back();
        b.pop_back();
        c.pop_back();
    }
    
    return 0;
}
