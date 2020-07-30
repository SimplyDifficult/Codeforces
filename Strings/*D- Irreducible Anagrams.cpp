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
int sum[N][26];


void solve(){
	
}

int32_t main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>s;
    fo(i,s.size()+1){fo(j,26){sum[i][j]=0;}}
    fo1(i,s.size()){
    	fo(j,26){
    		sum[i][j]=sum[i-1][j];
    	}
    	sum[i][s[i-1]-'a']++;
    }

 	cin>>t;
 	while(t--){
 		int l,r;
 		cin>>l>>r;
 		int cnt=0;
 		fo(j,26){
 			if(sum[r][j]-sum[l-1][j]>0)cnt++;
 		}
 		if(l==r||cnt>=3||s[l-1]!=s[r-1])cout<<"Yes"<<endl;
 		else cout<<"No"<<endl;
 	}

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
