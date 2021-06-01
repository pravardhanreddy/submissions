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

    int n,h;
    cin >> n >> h;
    int width = 0;
    while(n--){
        int temp ;
        cin >> temp;
        if(temp > h) width += 2;
        else width++;
    }
    cout << width;
    
    return 0;
}
