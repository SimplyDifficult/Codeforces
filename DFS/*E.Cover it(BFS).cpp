#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define int long long
const int N=2e5+99;
int mod=1000000007;
const int inf=1e9+1;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,z,flag=1;
string s;

vector<int>adj[N],d(N);


void bfs(int u){
	d=vector<int>(n,inf);
	d[u]=0;
	queue<int>q;
	q.push(u);

	while(!q.empty()){
		auto v=q.front();
		q.pop();
		for(auto to:adj[v]){
			if(d[to]==inf){
				d[to]=1+d[v];
				q.push(to);
			}
		}
	}
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
    	fo(i,m){
    		int u,v;
    		cin>>u>>v;
    		u--,v--;
    		adj[u].pb(v);
    		adj[v].pb(u);
    	}
    	bfs(0);
    	vector<int>e,o;
    	fo(i,n){
    		if(d[i]&1)o.pb(i);
    		else e.pb(i);
    	}
    	if(e.size()<o.size()){
    		cout<<e.size()<<endl;
    		for(auto v:e)cout<<v+1<<" ";
    	}
    	else{
    		cout<<o.size()<<endl;
    		for(auto v:o)cout<<v+1<<" ";
    	}
    	cout<<endl;
    	fo(i,n)adj[i].clear();
    	d.clear();
    }
    

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
