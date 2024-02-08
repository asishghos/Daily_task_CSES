#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mxi *max_element
#define mni *min_element
#define all(a) a.begin(),a.end()
 
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll brr[m];
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    ll cn =0;
    ll ind =0;
    sort(arr,arr+n);
    sort(brr,brr+m);
    for(int i=0;i<n;i++){
        while(ind<m){
            if((brr[ind]+k)<arr[i]){
                ind++;
            }
            else if((brr[ind]-k)>arr[i]){
                break;
            }
            else {
                ind++;
                cn++;
                break;
            }
        }
    }
    cout<<cn;
}
 
signed main(){
 
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    solve();
 
    return 0;
}