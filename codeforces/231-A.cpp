#include <iostream>
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

    int n,d,l;
    cin >> n >> d >> l;
    int *a = new int[n];
    for(int i = 0; i < n; i++) a[i] = 1;
    
    if(n%2) d -= 1;

    l -= 1;
    int i = 0;
    if (d<0) {
        d = -d;
        i++;
    }
    while (d-l > 0) {
        if(i > n-1) {
            cout << "-1";
            delete [] a;
            return 0;
        }
        a[i] += l;
        i += 2;
        d -= l;
    }
    if(i > n-1) {
        cout << "-1";
        delete [] a;
        return 0;
    }
    a[i] += d;
    for(int j = 0; j< n; j++) {
        cout << a[j] << " ";
    }

    delete [] a;
    return 0;
}
