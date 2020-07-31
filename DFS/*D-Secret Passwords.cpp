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

vector<int>adj[N],vis(N);

void dfs(int u){
	vis[u]=1;
	for(auto v:adj[u]){
		if(!vis[v]){
			dfs(v);
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

//    cin>>t;
//    while(t--){
    	cin>>n;
    	fo(i,n){
    		cin>>s;
    		for(char c:s){
    			adj[i].pb(n+c-'a');
    			adj[n+c-'a'].pb(i);
    		}
    	}
    	int ans=0;
    	for(int i=n;i<n+26;i++){
    		if(!vis[i] && !adj[i].empty()){
    			dfs(i);
    			ans++;
    		}
    	}
    	cout<<ans;
//    }
    

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
