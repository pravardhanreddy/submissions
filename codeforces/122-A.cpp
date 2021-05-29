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

    int n;
    cin >> n;
    if(n%4 == 0 ||
    n%7 == 0||
    n%44 == 0||
    n%47 == 0||
    n%74 == 0||
    n%77 == 0||
    n%444 == 0||
    n%447 == 0||
    n%474 == 0||
    n%477 == 0||
    n%744 == 0||
    n%747 == 0||
    n%774 == 0||
    n%777 == 0){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    
    return 0;
}
