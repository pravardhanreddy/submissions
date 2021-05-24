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
    vector<int> v;
    rep (i, s.length()) {
        if(i%2 == 0){
            v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(), v.end());
    cout<<(v[0]);
    for(int i=1; i<v.size(); i++){
        cout << "+" << v[i];
    }

    return 0;
}
