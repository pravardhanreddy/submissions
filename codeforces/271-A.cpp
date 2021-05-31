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

    n++;
    set<char> s;
    s.insert(n/1000);
    s.insert((n/100)%10);
    s.insert((n/10)%10);
    s.insert(n%10);
    while(s.size() != 4){
        s.clear();
        n++;
        s.insert(n/1000);
        s.insert((n/100)%10);
        s.insert((n/10)%10);
        s.insert(n%10);
    }
    
    cout << n;
    return 0;
}
