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
    char prev;
    int count = 1;
    prev = s[0];
    for(int i=1; i< s.length(); i++){
        if(s[i] == prev) {
            count++;
            if(count==7){
                cout << "YES";
                return 0;
            }
        }
        else {
            count = 1;
            prev = s[i];
        }
    }
    
    cout << "NO";
    return 0;
}
