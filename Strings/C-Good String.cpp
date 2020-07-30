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


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,flag=1;
string s;


void solve(){
	cin>>s;
 	n=s.size();
 	int cnt[10]={0},maxi=0;
 	fo(i,n){
 		cnt[s[i]-'0']++;
 	}
 	fo(i,10){
 		maxi=max(maxi,cnt[i]);
 	}	

 	int ans=n-maxi;

 	if(maxi<2){cout<<n-2<<endl;return;}

 	int len;

 	fo(i,10){
 		fo(j,10){
 			if(i==j)continue;
 			int curr=0;
 			len=0;
 			fo(l,n){
 				if(curr%2==0 && s[l]-'0'==i)curr++;
 				else if(curr%2!=0 && s[l]-'0'==j){
 					curr++;len++;
 				}
 			}
 			ans=min(ans,n-2*len);
 		}
 	}
 	cout<<ans<<endl;
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
