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

    int n,a,b;
    cin >> n;
    int count = 0;
    int max = 0;
    while(n--){
        cin >> a >> b;
        count = count -a +b;
        if(count > max) max = count;
    }
    cout << max;
    return 0;
}
