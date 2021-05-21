#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>

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
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' ||
        s[i] == 'a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            s.erase(s.begin()+i);
            i--;
            // cout << s<< endl;
        }

    }
    // cout << s << endl;
    string ans;
    for(auto c: s){
        ans.append(".");
        ans += tolower(c);
    }
    cout << ans;
    return 0;
}
