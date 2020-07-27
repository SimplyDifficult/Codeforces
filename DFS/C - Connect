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

int mat[55][55];
vector<pair<int,int> >reach;

void dfs(int x,int y){
	if(x>=n || y>=n || x<0 || y<0)return;
	if(mat[x][y]==1)return;
	mat[x][y]=1;
	reach.pb(make_pair(x,y));
	dfs(x+1,y);dfs(x-1,y);dfs(x,y+1);dfs(x,y-1);
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
 		int x1,y1,x2,y2;
 		cin>>x1>>y1>>x2>>y2;
 		x1--,x2--,y1--,y2--;
 		string s[55];
 		fo(i,n)cin>>s[i];
 		fo(i,n){
 			fo(j,n){
 				(mat[i][j]=s[i][j]-'0');
 			}
 		}	

 		reach.clear();
 		dfs(x1,y1);
 		vector<pair<int,int> >src=reach;
 		reach.clear();
 		dfs(x2,y2);
 		vector<pair<int,int> >dest=reach;

 		int curr=0,ans=INT_MAX;
 		fo(i,src.size()){
 			fo(j,dest.size()){
 				curr=(pow((src[i].first-dest[j].first),2))+(pow((src[i].second-dest[j].second),2));
 				ans=min(ans,curr);
 			}
 		}
 		if(src.size()==0||dest.size()==0)ans=0;
 		cout<<ans;

// 	}

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
