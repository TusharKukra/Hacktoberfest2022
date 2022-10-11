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
    cout << fixed << setprecision(9);
    int W, H;
    int x1, y1, x2, y2;
    int w, h;
    cin >> W >> H;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> w >> h;
    float ans = -1;
    //horizontal fit
    // cout << "horizontal" << endl;
    // cout << x1 << " " << x2 << " " << w << " " << W << endl;
    if(w+(x2-x1) <= W){
        int t1 = max(x1, W-x2);
        if(t1 >= w) ans = 0;
        else ans = min(w-x1, x2-(W-w));
    }
    // cout << "vertical" << endl;
    if(h+(y2-y1) <= H){
        // cout << y1 << " " << y2 << " " << h << " " << H << endl;
        int t2 = max(y1, H-y2);
        if(t2 >= h) ans = 0;
        else if(ans != -1) ans = min(ans, (float)(min((h-y1), y2-(H-h))));
        else ans = min(h-y1, y2-(H-h));
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