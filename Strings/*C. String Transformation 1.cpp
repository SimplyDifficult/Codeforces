#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define int long long
const int N=2e5 + 5;
const int N1=100005;
const int mod=1000000007;
int pow(int a,int b) {int ans=1; while(b){if(b&1)ans=(ans*a)%mod;b/=2;a=(a*a)%mod;}return ans;}

int n,t,k,m,flag=1;
string s;

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
 		string a,b;
 		cin>>a>>b;
 		int v[20][20]={0};
 		int count=0,flag=0,val;
 		fo(i,n){
 			if(a[i]>b[i])flag=1;
 			else if(a[i]<b[i]){
 				v[a[i]-'a'][b[i]-'a']=1;
 			}
 		}
 		if(flag==1){
 			cout<<-1<<endl;
 			continue;
 		}
 		fo(i,20){
 			val=-2;
 			fo(j,20){
 				if(v[i][j]!=0){
 					val=j;
 					count++;
 					break;
 				}
 			}
 			if(val==-2)continue;
 			fo(j,20){
 				if(v[i][j]==1 && j!=val)
 					v[val][j]=1;
 			}
 		}
 		cout<<count<<endl;
 	}

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
} 
