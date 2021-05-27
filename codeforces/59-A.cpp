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
    int count = 0;
    cin >> s;
    rep(i,s.length()) {
        if(isupper(s[i])) count++;
    }
    if(2*count > s.length()) transform(s.begin(), s.end(), s.begin(), ::toupper), cout << s;
    else transform(s.begin(), s.end(), s.begin(), ::tolower), cout << s;;
    
    return 0;
}
