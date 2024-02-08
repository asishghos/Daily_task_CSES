#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mxi *max_element
#define mni *min_element
#define all(a) a.begin(),a.end()

void solve(){
    ll x,y;
    cin>>x>>y;
    ll z = max(x,y);
    ll xyz =  (z-1)*(z-1);
    if(z==x &&  x%2==0){
        cout<<(xyz+x+x-y)<<endl;
    }
    else if(z==x &&  x%2!=0){
        cout<<(xyz+y)<<endl;
    }
    else if(z==y && y%2==0){
        cout<<(xyz+x)<<endl;
    }
    else if(z==y && y%2!=0){
        cout<<(xyz+y+y-x)<<endl;
    }
}

signed main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;
    while(t-->0){
        solve();
    }

    return 0;
}