#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <vector>

#define rep(i, n) for (int i = 0, _##i = (n); i < _##i; ++i)
#define REP(i,k,n) for (int i = k, _##i = (n); i < _##i; ++i)
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
    int min_index = 0;
    int max_index = 0;
    int min, max;
    int a;
    cin >> a;
    min = max = a;
    REP(i,1,n){
        cin >> a;
        if(a <= min){
            min = a;
            min_index = i;
        }
        else if(a > max){
            max = a;
            max_index = i;
        }
    }

    if(max_index < min_index) cout << max_index + n - min_index - 1;
    else cout << max_index + n - min_index - 2;
    
    return 0;
}
