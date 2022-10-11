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
    for(int i = 0; i < n; i++){
       while(a[i] > n) a[i] /= 2;        
    }
    sort(a, a+n);
    vector<int> vis(n+1, 0);
    for(int i = 0; i < n; i++){
        if(vis[a[i]] == 0) vis[a[i]] = 1;
        else{
            // cout << a[i] << " visited " << endl;
            while(a[i] > 0 && vis[a[i]]){
                a[i] /= 2;
                if(vis[a[i]] == 0){
                    vis[a[i]] = 1;
                    break;
                }
            }
            // cout << a[i] << " now visited " << endl;
        }       
    }
    for(int i = 1; i < n+1; i++){
        if(!vis[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}