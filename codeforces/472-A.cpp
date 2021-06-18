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

vector<bool> prime;
void SieveOfEratosthenes(int n)
{

    prime.assign(n+1, true);
  
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
}

int main()
{
    code_init();

    int n;
    cin >> n;

    SieveOfEratosthenes(n);

    if(prime[n-4]){
        if(prime[n-6]) cout << "8 " << n-8;
        else cout << "6 " << n-6;
    }
    else cout << "4 " << n-4; 
    
    return 0;
}
