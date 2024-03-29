#include<bits/stdc++.h>
using namespace std;
#define M 1000000
int main() {
    int t, n, i, j, last = 1;
    vector<int> primes;
    bool num[M+1];
    memset(num, true, sizeof(num));
    primes.push_back(2);
    for(i = 3; i <= M; i+=2)
        if(num[i]) {
            primes.push_back(i);
            for(j = 2*i; j <= M; j += i)
                num[j] = false;
        }
    
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        cout << primes[n-1] << endl;
    }
    return 0;
}