#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k,H;
    cin>>n>>m>>k>>H;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    int maxi = (m-1)*k;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        int diff = abs(H-arr[i]);
        if(diff != 0 && diff%k == 0 && diff <= maxi){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}