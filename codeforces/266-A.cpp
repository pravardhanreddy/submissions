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

    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    cin >> s;
    char prev=s[0];
    int count = 0;
    rep(i,s.length()){
        if(prev==s[i]){
            count++;
        }
        else prev = s[i];
    }
    cout << count-1;
    
    return 0;
}
