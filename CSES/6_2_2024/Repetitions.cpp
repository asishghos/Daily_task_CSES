#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mxi *max_element
#define mni *min_element
#define all(a) a.begin(),a.end()
 
void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    ll temp_cn =1;
    ll curr_cn=0;
    for(int i=0;i<n;i++){
        if(i<n-1 && s[i]==s[i+1]){
            temp_cn++;
        }
        else{
            if(temp_cn>curr_cn){
                curr_cn=temp_cn;
            }
            temp_cn=1;
        }
    }
    cout<<curr_cn;
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