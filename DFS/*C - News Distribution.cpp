#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define int long long
const int N=1000043;
int mod=1000000007;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b;}

int n,t,k,m,x,y,flag=1;
string s;

vector<int>adj[N];
int colour[N];
int col=0;

int dfs(int x){
	if(colour[x])return 0;
	colour[x]=col;
	int ans=(x<n?1:0);
	for(auto u:adj[x])
		ans+=dfs(u);
	return ans;
}

int32_t main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    
 		cin>>n>>m;
 		fo(i,m){
 			int k;
 			cin>>k;
 			fo(j,k){
 				cin>>x;
 				x--;
 				adj[x].pb(i+n);
 				adj[i+n].pb(x);
 			}
 		}
 		int count[n];
 		fo(i,n){
 			if(!colour[i]){
 				col++;
 				count[col]=dfs(i);
 			}
 			cout<<count[colour[i]]<<" ";
 		}
 		
 	

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
