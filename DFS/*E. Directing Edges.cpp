#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define int long long
const int N=1e5+1;
int mod=1000000007;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,flag=1;
string s;

vector<int>adj;
vector<int>vis;
vector<int>topo;

void dfs(int u){
	vis[u]=1;
	for(auto v:adj[u]){
		if(!vis[v])dfs(v);
	}
	topo.pb(u);
}


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
 		adj=vector<int>[n+1];
 		vis=vector<int>(n+1);
 		vector<pair<int,int>>edges;
 		fo1(i,m){
 			int t,u,v;
 			cin>>t>>u>>v;
 			if(t==1){
 				adj[u].pb(v);
 			}
 			edges.pb(mp(u,v));
 		}

 		topo=vector<int>(n);
 		fo1(i,n){
 			if(!vis[i])dfs(i);
 		}

 		reverse(topo.begin(),topo.end());
 		vector<int>pos(n+1);
 		fo1(i,n){
 			pos[topo[i]]=i;
 		}
 		bool ok=true;
 		fo1(i,n){
 			for(auto u:adj[i]){
 				if(pos[i]>pos[u])ok=false;
 			}
 		}
 		if(!ok)cout<<"NO"<<endl;
 		else{
 			cout<<"YES"<<endl;
 			for(auto e:edges){
 				if(pos[e.first]<pos[e.second])cout<<e.first<<" "<<e.second<<endl;
 				else cout<<e.second<<" "<<e.first<<endl;
 			}
 		}
    }


    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
