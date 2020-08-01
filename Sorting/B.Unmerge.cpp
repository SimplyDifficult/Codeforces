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
        int a[2*n];
        fo(i,2*n)cin>>a[i];
        vector<int>v;
        fo(i,2*n){
            int temp=1;
            for(int j=i+1;j<2*n;j++){
                if(a[i]>a[j])temp++;
                else break;
            }
            v.pb(temp);
            i+=temp-1;
        }
        int b[4001]={0};
        b[0]=1;
        fo(i,v.size()){
            for(int j=2*n;j>=0;j--){
                if(b[j]==1 && j+v[i]<=2*n)b[j+v[i]]=1;
            }
        }
        if(b[n]==1)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
