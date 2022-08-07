#include <bits/stdc++.h>
using namespace std;

int compressArray(vector<int>& a, int n,int x){
      //code here
      sort(a.begin(),a.end());
      int count=0,d=0,sum=0;
      for(int i=1;i<n;i++){
        //   
          if(a[i]>a[i-1] && (a[i-1]+x)>=a[i]){
              count+=1;
              if(d>0 && sum>=a[i]){
                 count+=d;
                 d=0;
              }
          }else if(a[i]=a[i-1]){
              d++;
              sum=a[i]+x;
          }
      }
      return n-count;
  }

int main(){
//     29 50 
// 96 38 8 46 9 12 50 6 87 6 40 45 18 64 29 0 89 10 57 48 10 71 91 81 13 65 40 39 8
    // vector<int> vec{96,38,8,46,9,12,50,6,87,6,40,45,18,64,29,0,89,10,57,48,10,71,91,81,13,65,40,39,8};
    // sort(vec.begin(),vec.end());
    int vec[10]={0};
    for(auto i: vec)cout<<i<<" ";
    // cout<<compressArray(vec,29,50);
    return 0;
}