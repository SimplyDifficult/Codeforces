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
const int inf=1e9+99;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,z,flag=1;
string s;
int nxt[N][26];


void solve(){
	string s1,s2;
	cin>>s1>>s2;
	//s1->s2
	fo(i,s1.size()+5){fo(j,26){nxt[i][j]=inf;}}
	for(int i=s1.size()-1;i>=0;i--){
		fo(j,26){
			nxt[i][j]=nxt[i+1][j];
		}
		nxt[i][s1[i]-'a']=i;
	}

	int ans=1,pos=0;

	fo(i,s2.size()){
		if(pos==s1.size()){
			pos=0;
			ans++;
		}
		if(nxt[pos][s2[i]-'a']==inf){
			pos=0;
			ans++;
		}
		if(nxt[pos][s2[i]-'a']==inf && pos==0){
			ans=inf;break;
		}
		pos=nxt[pos][s2[i]-'a']+1;
	}
	if(ans>=inf)cout<<-1<<endl;
	else cout<<ans<<endl;
	
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
 		solve();
 	}

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
