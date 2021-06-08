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
    string s;
    int count = 0;
    getline(cin, s);
    rep(i,n){
        getline(cin, s);
        // cout << s[0] << endl;
        switch(s[0]){
        case 'T': count += 4;break;
        case 'C': count += 6;break;
        case 'O': count += 8;break;
        case 'D': count += 12;break;
        case 'I': count += 20;break;
        }
        // cout << count<< endl;
    }
    cout << count;
    
    return 0;
}
