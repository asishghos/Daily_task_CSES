#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mxi *max_element
#define mni *min_element
#define all(a) a.begin(),a.end()
 
void solve(){
    ll n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    ll temp = arr[0];
    ll cn =0;
    for(int i=0;i<n;i++){
        if(arr[i]>=temp){
            temp=arr[i];
        }
        else {
            cn = cn + (temp-arr[i]);
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
