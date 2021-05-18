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

    int n, cnt=0, ans = 0, num=0;
    long long k;
    cin >> n >> k;
    long long *a = new long long[n];
    long long *s = new long long[n+1];
    rep(i,n) cin >> a[i];  
    sort(a,a+n);
    s[0] = 0;
    rep(i,n){
        s[i+1] = s[i] + a[i];
        // cnt=0;
        while(cnt <= i && a[i] * (cnt+1) - (s[i+1] - s[i-cnt]) <= k){
            cnt++;
        }
        if(cnt  > ans) ans = cnt, num = a[i];
    }

    cout << ans << " " << num << endl;

    delete [] a;
    delete [] s;
    return 0;
}
