//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++



// Remember this!!!!!!!!!!
// user defined greater<int> comparator.
class comparator
{
   public:
   bool operator()(pair<int,int>p1, pair<int,int>p2)
   {
      if(p1.first > p2.first) return true;             //ascending order
       else if(p1.first < p2.first) return false;
       else if(p1.first == p2.first)
       {
           //sort in descending order
           
           if(p1.second < p2.second) return true;
           else return false;
           
       }
   }
   
};

class Solution{   
public:
   vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
      
      vector<int>ans;
      //min heap
      priority_queue<  pair<int,int>, vector< pair<int,int> >, comparator >pq;
      
      for(int i=0;i<n;i++)
      {
          if(abs(arr[i]-x)==0) continue;
          
          pq.push({ abs(arr[i]-x) , arr[i] } ) ;
      }
      
      
      while(k--)
      {
          ans.push_back(pq.top().second);
          pq.pop();
      }
      
      
      
     // sort(ans.begin(),ans.end());
      
      return ans;
      
      
   }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends