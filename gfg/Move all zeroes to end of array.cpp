//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    // code here
	    int temp[n];int k=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=0)
	        {
	            temp[k]=a[i];
	           k++;
	        }
	        
	    }
	    while(k<n)
	    {
	        temp[k]=0;k++;
	    }
	    for(int i=0;i<n;i++)
        {
            a[i]=temp[i];
        }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends