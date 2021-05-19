#include <iostream>
#include <algorithm>
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

    int m,n;
    cin >> m >> n;
    cout << (m * n) / 2;
    
    return 0;
}
