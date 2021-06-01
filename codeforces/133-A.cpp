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

    string s;
    cin >> s;
    bool b = false;
    rep(i,s.length()){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') b = true;
    }
    if(b) cout << "YES";
    else cout << "NO";
    
    return 0;
}
