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
    cin >>s;
    int stage = 0;

    rep(i,s.length()) {
        if(stage == 0) {
            if(s[i] == 'h') {stage++; continue;}
        }
        else if(stage == 1) {
            if(s[i] == 'e') {stage++; continue;}
        }
        else if(stage == 2) {
            if(s[i] == 'l') {stage++; continue;}
        }
        else if(stage == 3) {
            if(s[i] == 'l') {stage++; continue;}
        }
        else if(stage == 4) {
            if(s[i] == 'o') {stage++; continue;}
        }
    }
    if(stage==5) cout << "YES";
    else cout << "NO";
    
    return 0;
}
