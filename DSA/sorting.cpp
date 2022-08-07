// #pragma GCC optimize
#include <bits/stdc++.h>
using namespace std;
// Type Redefenition
#define int long long
#define double long double
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define ed end()
#define ADJ map<int, set<int>>
#define vpii vector<pii>
#define pb push_back
#define bg begin()
#define sz size()
#define ln length()
#define all(x) x.begin(), x.end()
#define endl "\n"
#define NL cout <<
#define F first
#define S second
#define disp(x)      \
    for (auto t : x) \
    cout << t <<
;
#define for0(n) for (int i = 0; i < n; i++)
#define for0j(n) for (int j = 0; j < n; j++)
#define oldfor(v) for (auto it = v.begin(); it != v.end(); ++it)
#define SS << ' ' <<
#define arrin(a, n) \
    vi a(n);        \
    for0(n) { cin >> a[i]; }
#define pf(x) cout << x << endl;
#define gridin(num, n, m) \
    for0(n) { for0j(m) cin >> num[i][j]; }
#define dispgrid(num, n, m)                \
    for0(n)                                \
    {                                      \
        for0j(m) cout << num[i][j] << ' '; \
        cout << endl;                      \
    }

// Input Output Helpers
#define tks(x) \
    string x;  \
    cin >> x;
#define tk(a) \
    int a;    \
    cin >> a;
#define tk2(a, b) tk(a) tk(b)
#define tk3(a, b, c) tk2(a, b) tk(c)
#define tk4(a, b, c, d) tk2(a, b) tk2(c, d)
#define tk5(a, b, c, d, e) tk4(a, b, c, d) tk(e)
#define tk6(a, b, c, d, e, f) tk3(a, b, c) tk3(d, e, f)
#define tk7(a, b, c, d, e, f, g) tk6(a, b, c, d, e, f) tk(g)
#define tk8(a, b, c, d, e, f, g, h) tk7(a, b, c, d, e, f, g) tk(h)
#define addEdge(adj)            \
    tk2(u, v) adj[u].insert(v); \
    adj[v].insert(u);
#define test tk(tt) while (tt--)

// Common Responses
#define YES cout << "YES" << endl;
#define Yes cout << "Yes" << endl;
#define NO cout << "NO" << endl;
#define No cout << "No" << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define accuracy chrono::steady_clock::now().time_since_epoch().count()

// Overloaded Ostream Classes
// template<typename F, typename S>
// ostream& operator<<(ostream& os,const pair<F,S> &v){return os <<
//  << v.F <<
//  << v.S <<
// ;}

// template < typename T >
// ostream &operator<<(ostream &os,const vector<T> &v){os<<
// [object Object]
// ;}

// template < typename T >
// ostream &operator << (ostream &os, const set<T> &v){os <<
// ;oldfor(v){if(it!=v.bg)os<< ,;os << *it;}return os <<
// ;}

// template < typename T >
// ostream &operator << (ostream &os, const multiset<T> &v){os <<
// ;oldfor(v){if(it!=v.bg) os << ,;os<<*it;}return os <<
// ;}

// template < typename F, typename S >
// ostream &operator <<(ostream & os, const map<F,S> &v){os <<
// ;oldfor(v){if(it!=v.bg)os<< ,;os<< it->F<<,<<it->S;}return os <<
// ;}

// Constants
const int MOD = 1000000007;
const int N = 100000;

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
    }
}

void merge(int arr[], int s,int m, int e){
    int i=s,r=e,mid=m;
    m++;
    vector<int>temp;
    while(i<=mid && m<=r){
        if(arr[i]<arr[m]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[m]);
            m++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(m<=r){
        temp.push_back(arr[m]);
        m++;
    }
    for(auto c:temp){
        arr[s]=c;
        s++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(r>l){
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int lomutoPartition(int arr[],int l,int r){ //T.C:-O(n)
    int pivot=arr[r],i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],pivot);
    return i+1;
}


int partition(int arr[],int l,int r){
    int key=arr[h];
    for(int i=r-1;i>=l;i--){
        while(key<arr[i]){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    return i+1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {50, 5, 7, 10, 2, 27, 11, 12, 19, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for (auto i : arr)
    {
        NL i << " ";
    }

    return 0;
}