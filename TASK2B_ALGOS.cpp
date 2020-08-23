#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  vector<ll>v(n,0);                  //Declaring a vector v to store the array of integers.
  for(int i=0;i<n;i++)
  v[i]=i+1;

  vector<ll>d(n+1,0);
  d[0]=v[0];
  for(int i=1;i<n;i++)
  d[i]=v[i]-v[i-1];
  ll q;                             //Taking the number of queries as input.
  cin>>q;
  while(q--){                 
    ll l,r,x;                       //Taking l,r,x as input.
    cin>>l>>r>>x;
    l--;                           
    r--;
    d[l]+=x;
    d[r+1]-=x;
  }
  v[0]=d[0];
  for(int i=1;i<n;i++)
  v[i]=v[i-1]+d[i];
  ll mx=*max_element(v.begin(),v.end());            //Computing the max element of array and storing it in mx.
  cout<<mx<<endl;
  return 0;
}
