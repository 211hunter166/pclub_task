#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,ct=1;
    cin >> n;
    int a[n],f[n+1];
    for (int i=0;i<n;i++){
        cin >> a[i];
        f[a[i]]=i;
    }
    for (int i=1;i<n;i++){
        if (f[i]<f[i+1]) ct++;
    }
    cout << ct << "\n";


}

int main (){
    int t;
    cin >> t;
    while (t>0) {
        solve();
        t--;
    }
    return 0 ;
}