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

    string s;
    cin >> s;
    if(s.length() == 1) {
        if(isupper(s[0])) s[0] = tolower(s[0]);
        else s[0] = toupper(s[0]);
        cout << s;
        return 0;
    }
    else{
        bool f = true;
        REP(i,1,s.length()){
            if(islower(s[i])) f=false;
        }
        if(f) {
            transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
            if(islower(s[0])) s[0] = toupper(s[0]);
            else s[0] = tolower(s[0]);
        }
    }
    cout << s;
    
    return 0;
}
