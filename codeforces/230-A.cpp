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

bool sortcol( const vector<int>& v1,
              const vector<int>& v2 ) {
    return v1[0] < v2[0];
}

int main()
{
    code_init();

    int s, n;
    cin >> s >> n;
    vector< vector <int>> v;

    rep(i, n){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }

    sort(v.begin(), v.end(), sortcol);

    rep(i,n){
        if(s <= v[i][0]){
            cout << "NO";
            return 0;
        }
        else {
            s += v[i][1];
        }
    }
    cout << "YES";
    return 0;
}
