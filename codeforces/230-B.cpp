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
ll *v;
ll pos=0;
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    vector<bool> prime (n, true);
    // v.reserve(1000000);

    // prime.reserve(n);
    // v.reserve(n);
    // v.resize(1000000);

  
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
  
    // Print all prime numbers
    for (ll p=2; p<=n; p++)
       if (prime[p])
          v[pos]=p*p, pos++;
}

int main()
{
    code_init();

    ll n,t;
    cin >> n;

    v = (ll*) malloc(1000010*sizeof(ll));

    SieveOfEratosthenes(1000010);
    // cout << v.size();
    rep(i,n){
        cin >> t;
        if(binary_search(v, v+pos, t)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}
