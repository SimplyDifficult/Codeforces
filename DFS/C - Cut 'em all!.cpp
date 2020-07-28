#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define int long long
const int N=1e5+1;
int mod=1000000007;


//int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
//int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,flag=1;
string s;


vector<int>adj[N];
int ans;

int dfs(int u,int p){
	int size=1;
	for(auto v:adj[u]){
		if(v!=p){
			int curr=dfs(v,u);
			size+=curr;
			if(curr%2==0)ans++;
		}
	}
	return size;
}

int32_t main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
 	
 //   cin>>t;
 //   while(t--){
 			cin>>n;
 			fo1(i,n-1){
 				int u,v;
 				cin>>u>>v;
 				adj[u].pb(v);
 				adj[v].pb(u);
 			}
 			dfs(1,0);
 			if(n%2==1){cout<<-1;return 0;}
 //			ans=0;
 			cout<<ans;

 //   }


    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
