#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mxi *max_element
#define mni *min_element
#define all(a) a.begin(),a.end()

void solve(){
    ll n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return;
    }
    vector<ll> v;
    ll m =2;
    ll p =1;
    while(m<=n){
        v.push_back(m);
        m = m + 2;
    }
    while(p<=n){
        v.push_back(p);
        p = p + 2;
    }
    for(auto it : v){
        cout<<it<<" ";
    }
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