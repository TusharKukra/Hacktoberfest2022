#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define loop for(int i = 0; i < n; i++)
using namespace std;
 
int countDigit(long long n){
return floor(log10(n) + 1);
}
//-----------------------------------------------------------------------------
void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];         
    }
    if(n==1){
        cout << a[0] << endl;
        return;
    }
    if(n==2){
        if(a[0] == a[1]){
             cout << 0 << endl;
            return;
        }
        cout << max(a[0], a[1]) << endl;
        return;
    }
    if(n == 3){
        int temp = __gcd(a[0], a[2]);
        if(a[1]%temp == 0){
            if(temp/__gcd(temp, a[1]) > 1){
                cout << temp << endl;
                return;
            }
        }
        if(a[1]%temp != 0){
            cout << temp << endl;
            return;
        }
        if(a[0]%a[1] != 0 && a[2]%a[1] != 0) cout << a[1] << endl;
        else cout << 0 << endl;
        return;
    }
    int h1, h2;
    h1 = __gcd(a[0], a[2]);
    for(int i = 2; i < n-2; i += 2) h1 = __gcd(h1, a[i]);   
    h2 = __gcd(a[1], a[3]);
    for(int i = 3; i < n-2; i += 2) h1 = __gcd(h2, a[i]);  
    if(h1==h2) cout << 0 << endl;
    else cout << max(h1, h2) << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}