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
    vector<int> v;
    v.resize(n+1);

    for(int i=1; i<=n;i++){
        int temp;
        cin >> temp;
        v[temp] = i;
    }    
    for(int i=1; i<=n;i++){
        cout << v[i] << " ";
    }
    return 0;
}
