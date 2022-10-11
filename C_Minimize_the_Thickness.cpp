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
    int ans = INT_MAX;
    int total = accumulate(a, a+n, 0);
    vector<int> divisors;
    for(int i = 1; i*i <= total; i++){
        if(total%i == 0) divisors.push_back(i);
        if(total/i != i) divisors.push_back(i);
    }

    if(divisors.size() <= 2){
        cout << n << endl;
        return;
    }
    int div;

    vector<int> v;

    int index = divisors.size();
    int i = 0;
    while(index--){
        // cout << div << " div " << endl;
        div = divisors[i];
        int maxm = INT_MIN;
        int flag = 0;
            
            int temp = total/div;
            int ct = 0;
            int len = 0;
            for(int i = 0; i < n; i++){
                ct += a[i];
                len++;
                if(ct == temp){
                    // cout << len << endl;
                    maxm = max(maxm, len);
                    ct = 0;
                    len = 0;
                }
                if(ct > temp){
                    flag = 1;
                    break;                    
                }
            }
            if(flag == 0){
                // maxm = max(maxm, len);
                ans = min(ans, maxm);
            }
        
        
        i++;
    }
    cout << ans << endl;
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}