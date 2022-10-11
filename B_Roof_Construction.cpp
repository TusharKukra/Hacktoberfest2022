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
// Simple CPP program to find MSB number
// for given POSITIVE n.
#include <iostream>
using namespace std;
 
int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}
 
//-----------------------------------------------------------------------------
void solve(){
    int n;
    cin >> n;
    int k = 0;
    while((1 << (k + 1)) <= n - 1) ++k; 
    for(int i = (1 << k) - 1; i >= 0; i--) {
        cout << i << ' ';
    }
    for(int i = (1 << k); i < n; i++) {
        cout << i << ' ';
    }
    cout << '\n';
}
//----------------------------------------------------------------------------
int32_t main(){
   int t; cin >> t;
   while(t--){
      solve();
   }
   return 0;
}