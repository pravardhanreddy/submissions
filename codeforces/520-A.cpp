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

    char c;
    unordered_set<char> s;
    int n;
    cin >> n;
    if(n<26) {
        cout << "NO";
        return 0;
    }
    c = getchar();
    rep(i,n){
        c = getchar();
        s.insert(tolower(c));
    }

    if(s.size() == 26) cout << "YES";
    else cout << "NO";
    
    return 0;
}
