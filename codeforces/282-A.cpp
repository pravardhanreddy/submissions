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

int main(int argc, char const *argv[])
{
    code_init();
    string s;
    int n,x=0;
    cin >> n;
    getline(cin,s);
    while(n--) {
        getline(cin, s);
        // cout << s << endl;
        if(s[1] == '+') { x++;}
        else x--;

    }
    cout << x;
    return 0;
}
