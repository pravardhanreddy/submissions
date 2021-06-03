#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <vector>

#define rep(i, n) for (int i = 0, _##i = (n); i < _##i; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
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
    
    s = "I hate ";
    n--;
    bool flag = false;
    while(n--){
        if(flag) s += "that I hate ", flag = false;
        else s+= "that I love ", flag = true;
    }
    
    s+= "it";
    cout << s;
    
    return 0;
}
