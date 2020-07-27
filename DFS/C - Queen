#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define int long long
int N=1000043;
int mod=1000000007;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,flag=1;
string s;

bool done(int x){
	x+=1;
	while(x%2==0)x/=2;
	return(x==1);
}

int32_t main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
// 	cin>>t;
// 	while(t--){
 		cin>>n;
 		int a[n+1];
 		fo1(i,n)a[i]=1;
 		fo1(i,n){
 			int p,c;
 			cin>>p>>c;
 			if(c==0){
 				a[p]=0;
 				a[i]=0;
 			}	
 		} 
 		vector<int>ans;
 		fo1(i,n){
 			if(a[i]==1)ans.pb(i);
 		}
 		fo(i,ans.size())cout<<ans[i]<<" ";
 		if(ans.size()==0)cout<<-1;
// 	}

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
