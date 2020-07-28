#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define int long long
const int N=1000043;
int mod=1000000007;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,flag=1;
string s;


vector<int>vis(N);
vector<int>adj[N];

int size=0;
int dfs(int x){
	if(vis[x])return 0;
	vis[x]=1;
	size++;
	for(auto u:adj[x]){
		dfs(u);
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
    
// 	cin>>t;
// 	while(t--){
 		cin>>n>>k;
 		int ans=power(n,k);
 		fo1(i,n-1){
 			int u,v,c;
 			cin>>u>>v>>c;
 			if(c==0){
 				adj[u].pb(v);
 				adj[v].pb(u);
 			}
 		}
 		fo1(i,n){
 			if(vis[i])continue;
 			size=0;
 			dfs(i);
 			ans-=(power(size,k));
 			ans+=mod;
 			ans%=mod;
 		}
 		cout<<ans;

// 	}

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
