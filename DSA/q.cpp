#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n], maxt=INT_MIN,count=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            maxt= max(temp,maxt);
            arr[i]=temp;
        }
        for(auto i: arr){
            if(i==maxt){
                count++;
            }
        }
        if(count>1){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}