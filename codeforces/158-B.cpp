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
    vector<int> v;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    int four = count(v.begin(),v.end(), 4);
    int three = count(v.begin(),v.end(), 3);
    int two = count(v.begin(),v.end(), 2);
    int one = count(v.begin(),v.end(), 1);
    
    int count = 0;
    
    count += four;

    if(three <= one){
        count += three;
        one -= three;
    }
    else {
        count += one;
        three -= one;
        count += three;
        one = 0;
    }
    
    if(two%2){
        count += two/2 + 1;
        one -= 2;
    }
    else count += two/2;

    if(one>0){
        count += one/4;
        if(one%4) count++;
    }

    // cout << one << " " << two << " " << three << " " << four << endl;
    cout << count;

    return 0;
}
