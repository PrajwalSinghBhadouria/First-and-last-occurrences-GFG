//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int first_occurence=-1;
        int last_occurence = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==x){
                first_occurence = i;
                break;
            }
        }
        for(int i=arr.size()-1; i>=0; i--){
            if(arr[i]==x){
                last_occurence = i;
                break;
            }
        }
        return {first_occurence,last_occurence};
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
