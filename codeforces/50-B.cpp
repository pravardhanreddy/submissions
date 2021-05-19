#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
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
    getline(cin, s);

    unordered_map<char, int> m;
    rep(i, s.length()) {
        m[s[i]]++;
    }
    ll sum = 0LL;
    for(auto x: m){
        sum += (ll) x.second * (ll) x.second;
    }

    cout << sum;
    
    return 0;
}
