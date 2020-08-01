#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) v.begin(),v.end()
#define int long long
const int N=2e5+99;
int mod=1000000007;
const int inf=1e9+1;


int power(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}
int bit(int n){if(n==0)return 0;int k=1,b=0;while((n/k)!=0){k*=2;b++;}return b-1;}

int n,t,k,m,x,y,z,flag=1;
string s;


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
    	cin>>n;
    	int a[n];
    	fo(i,n)cin>>a[i];
    	int sum=0;
    	for(int i=0;i<n;i+=2)sum+=a[i];
    	int val[n];
    	val[0]=0,val[1]=a[1]-a[0];
    	for(int i=3;i<n;i+=2){
    		val[i]=val[i-2]+a[i]-a[i-1];
    	}
    	for(int i=2;i<n;i+=2){
    		val[i]=val[i-2]+a[i-1]-a[i];
    	}
    	int maxi=0,mini=0;
    	for(int i=0;i<n;i+=2){
    		maxi=max(maxi,val[i]-mini);
    		mini=min(mini,val[i]);
    	}
    	mini=0;
    	for(int i=1;i<n;i+=2){
    		maxi=max(maxi,val[i]-mini);
    		mini=min(mini,val[i]);
    	}
    	cout<<sum+maxi<<endl;
    }
    

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
