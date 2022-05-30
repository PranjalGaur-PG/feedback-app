#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

int main()
{
  IOS;
  test(t) {
    int n, m, x;
    cin>>n;
    int mxn=INT_MIN, mxm=INT_MIN;

    for(int i=0;i<n;i++) {
      cin>>x; mxn = max(mxn, x);
    } 

    cin>>m;
    for(int i=0;i<m;i++) {
      cin>>x; mxm = max(mxm, x);
    } 

    if(mxm > mxn) cout<<"Bob\nBob\n";
    else if(mxm < mxn) cout<<"Alice\nAlice\n";
    else cout<<"Alice\nBob\n";

  }
  return 0;
}