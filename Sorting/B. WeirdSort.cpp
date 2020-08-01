#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define int long long
const int N=2e5 + 5;
const int N1=100005;
const int mod=1000000007;
int pow(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}

int n,t,k,m,flag=1;
string s;

int32_t main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 	cin>>t;
 	while(t--){
 		cin>>n>>m;
 		vector<int> a(n+1),p(n+1);
 		fo1(i,n)cin>>a[i];
 		fo1(i,m){
 			int pos;
 			cin>>pos;
 			p[pos]=1;
 		}	
 		fo1(i,n){
 			if(p[i]==0)continue;
 			int j=i;
 			while(p[j] && j<n)j++;
 			sort(a.begin()+i,a.begin()+j+1);
 			i=j;
 		}
 		bool ok=true;
 		fo1(i,n-1){
 			ok&=a[i]<=a[i+1];
 		}
 		if(ok)cout<<"YES"<<endl;
 		else cout<<"NO"<<endl;
 	}

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
