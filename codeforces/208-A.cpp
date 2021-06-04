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
void eraseAllSubStr(std::string & mainStr, const std::string & toErase)
{
    size_t pos = std::string::npos;
    // Search for the substring in string in a loop untill nothing is found
    while ((pos  = mainStr.find(toErase) )!= std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
        mainStr.insert(pos, " ");
    }
}
int main()
{
    code_init();

    string s;
    cin >> s;
    eraseAllSubStr(s, "WUB");
    bool f = true;
    rep(i, s.length()){
        if(s[i] == ' '){
            if(f) {
                s.erase(s.begin()+i);
                i--;
            }
            else f = true;
        }
        else f = false;
    }
    if(*s.rbegin() == ' ') s.erase(s.end()-1);
    cout << s;
    
    return 0;
}
