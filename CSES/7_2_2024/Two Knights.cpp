#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mxi *max_element
#define mni *min_element
#define all(a) a.begin(),a.end()
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> ans;
    for(int i=1;i<=n;i++){
        ll x = i*i;
        ll y = x-1;
        ll z =(x*y)/2;
        ans.push_back(z-(4*(i-1)*(i-2)));
    }
    for(auto it : ans){
        cout<<it<<endl;
    }
}
 
signed main(){
 
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    solve();
    return 0;
