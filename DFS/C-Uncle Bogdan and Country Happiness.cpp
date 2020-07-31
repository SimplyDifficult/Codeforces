#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define int long long
const int N=2e5+1;
int mod=1000000007;
const int inf=1e9+1;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,z,flag=1;
string s;

vector<int>adj[N];
vector<int>p(N),h(N);
vector<int>siz(N),H(N);

void dfs(int u,int P){
	siz[u]=p[u];
	int Hbelow=0;
	for(auto v:adj[u]){
		if(v!=P){
			dfs(v,u);
			siz[u]+=siz[v];
			Hbelow+=H[v];
		}
	}
	H[u]=(h[u]+siz[u])/2;
	
	if((siz[u]+h[u])%2!=0)flag=0;
    if(H[u]>siz[u] || H[u]<0)flag=0;
    if(H[u]<Hbelow)flag=0;
}



void solve(){
    
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
    	fo1(i,n)cin>>p[i];
    	fo1(i,n)cin>>h[i];
    	fo1(i,n-1){
    		int u,v;
    		cin>>u>>v;
    		adj[u].pb(v);
    		adj[v].pb(u);
    	}
    	flag=1;
    	dfs(1,0);
    	if(flag==1)cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    	fo1(i,n)adj[i].clear();

    }
    

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
