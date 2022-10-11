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
    sort(a, a+n);
    int flag = 1, f2 = 1;
    loop{
        if(a[i] < 1) flag = 0;
        else if(a[i] > 0) f2 =0;
    }
    if(flag){
        cout << 1 << endl;
        return;
    }
    if(f2){
        cout << n << endl;
        return;
    }
    if(n==1){
        cout << 1 << endl;
        return;
    }
    int mine = a[1] - a[0];
    int index = n;
    for(int i = 1; i < n; i++){
        if(a[i] <= 0 && a[i-1] <= 0) mine = min(mine, abs(a[i]-a[i-1]));
        if(a[i] > 0){
            if(a[i] > mine) index = i;
            else index = i+1;
            break;
        }
    }
    cout << index << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}