#include <bits/stdc++.h>
#define mod 1000000007ll
#define ll long long int
using namespace std;

int power(int x, unsigned int y, ll p)  
{  
    int res = 1; 
    x = x % p;  
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % p;  
        y = y>>1;
        x = (x*x) % p;  
    }  
    return res;  
}  

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int s[n];
        int count = 0;
        int ctr = 0;
        for(int i = 0; i < n; i++){
            cin >> s[i];
            if(s[i] > 1){
                count += s[i];
                ctr++;
            }
        }
        ll nck = 1ll;
        for(int i = n; i > k; i--){
           nck = ((nck % mod) * (i % mod)) % mod; 
        }
        ll store = ((nck % mod) * (count % mod)) % mod;
        ll ans = 1;
        for(int i = 0; i < n; i++){
            if(s[i] > 1){
                ans = ((ans % mod) * ((store - (power(2, s[i], mod) - s[i] - 1)) % mod)) % mod;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
