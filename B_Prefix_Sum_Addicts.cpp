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
    int n, k; cin >> n >> k;
    int a[k];
    for(int i = 0; i < k; i++){
       cin >> a[i];         
    }
    //when n = k
    //the a1 = s1
    //all ai = si-s(i-1)
    if(n==k){
        int arr[k];
        arr[0] = a[0];
        for(int i = 1; i < k; i++){
            arr[i] = a[i] - a[i-1];
        }
        for(int i = 1; i < k; i++){
            if(arr[i] < arr[i-1]){
                cout << "No" << endl;
                return ;
            }
        }
        cout << "Yes" << endl;
        return;
    }
    else{
        //when n < k
        //arr[0] gives the an-k+1 th element 
        //there are in total n elements 
        //then (n-k) elements all are max equal to arr[0j]th elsement
        //and their sum >= a[0]
        //else not possible
        int arr[k-1];
        for(int i = 1; i < k; i++){
            arr[i-1] = a[i] - a[i-1];
        }
        // cout << "the arr array" << endl;
        // for(int i = 0; i < k-1; i++) cout << arr[i] << " ";
        // cout << endl;
        for(int i = 1; i < k-1; i++){
            if(arr[i] < arr[i-1]){
                cout << "No" << endl;
                return ;
            }
        }
        if(arr[0]*(n-k+1) < a[0]){
            cout << "No" << endl;
            return ;
        }
        cout << "Yes" << endl;
    }
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}