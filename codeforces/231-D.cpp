#include <iostream>
#include <algorithm>
#define rep(i, n) for (int i = 0, _##i = (n); i < _##i; ++i)

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

    int x,y,z,p,q,r;
    int xy1, xy2, yz1, yz2, zx1, zx2;
    cin >> x >> y >> z >> p >> q >> r;
    cin >> zx1 >> zx2 >> xy1 >> xy2 >> yz1 >> yz2;
    int res = 0;
    if(x < 0){ res += yz1;}
    else if(x > p) res += yz2;
    if(y < 0) {res += zx1;}
    else if(y > q) res += zx2;
    if(z < 0) {res += xy1;}
    else if(z > r) res += xy2;

    cout << res;
    return 0;
}
