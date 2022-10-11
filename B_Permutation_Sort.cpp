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
    int a[n], b[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];   
       b[i] = a[i];      
    }
    if(a[0] == n && a[n-1] == 1){
        cout << 3 << endl;
        return;
    }
    sort(a, a+n);
    int ct = 0;
    if(a[0] != b[0]) ct++;
    if(a[n-1] != b[n-1]) ct++;
    for(int i = 1; i < n-1; i++){
       if(a[i] != b[i]){
        if(ct==0) ct++;
        break;
       }    
    }
    cout << ct << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}