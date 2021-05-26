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
    int x,y,z;
    int cx=0;
    int cy=0;
    int cz=0;

    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        cx += x;
        cy += y;
        cz += z;
    }
    if(cx==0 && cz==0 && cy==0) cout << "YES";
    else cout << "NO";
    
    return 0;
}
