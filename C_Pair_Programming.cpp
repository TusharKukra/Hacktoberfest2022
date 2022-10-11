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
   int n, x, y; cin >> n >> x >> y;
   int a[x+y];
   for(int i = 0; i < x; i++){
      cin >> a[i];  
      if(a[i] == 0) n++;       
   }
   for(int i = 0; i < y; i++){
      cin >> a[i+x];   
      if(a[i+x] == 0) n++;       
   }
   sort(a, a+x+y) ;
   for (int i = 0; i < x+y; i++){
      if(a[i] > n){
         cout << -1 << endl;
         return;
      }
   }
   for (int i = 0; i < x+y; i++)
   {
      /* code */
      cout << a[i] << " ";
   }
   cout << endl;
    
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}