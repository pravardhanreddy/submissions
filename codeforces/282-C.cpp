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

    string a,b;
    getline(cin, a);
    getline(cin, b);

    if(a.length() != b.length()) {
        cout << "NO";
        return 0;
    }
    int x = count(a.begin(), a.end(), '1');
    int y = count(b.begin(), b.end(), '1');

    if (x > 0 && y > 0) { 
        cout << "YES";
    }
    else if (x==0 && y==0)
    {
        cout << "YES";
    }
    else cout << "NO";
    
    
    return 0;
}
