// runtime: O(logn)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = distance(a.begin(), lower_bound(a.begin(), a.end(), x));
        int h = distance(a.begin(), upper_bound(a.begin(), a.end(), x));

        int ans = h - l;
        if (ans)
            cout << ans << "\n";
        else
            cout << "-1\n";
    }
    return 0;
}

//using modified binary search O(logn)

/*
#include<bits/stdc++.h>
using namespace std;

* Time Complexity - O(logn)
* Space Complexity - O(1)

int Count_Occurence(vector<int>& nums, int target) {
    if (nums.size() == 0)
        return -1;
    int start = 0, end = nums.size()-1;
    int left, right;
    
    // find left occurence
    while (start < end) {
        int mid = start + (end-start)/2;
        if (target > nums[mid]) {       // move in right direction till match
            start = mid + 1; 
        } else {
            end = mid;
        }
    }
    
    // check weather target exist or not
    if (target != nums[start])  return -1;
    left = start;           // left occurence index
    
    // find right occurence
    end = nums.size()-1;
    while (start < end) {
        int mid = start + (end-start)/2 + 1;
        if (target < nums[mid]) {        // move in left direction till match
            end = mid - 1; 
        } else {
            start = mid;
        }
    }
    right = end;            // right occurence index
    
    return right-left+1;    // count of occurence
}
    
int main() {
	//code
	int t;
	cin >> t;
	while (t--) {
	    int n, x;
	    cin >> n >> x;
	    vector <int> A(n);
	    for (int i = 0; i < n; i++)
	        cin >> A[i];
	   
	   cout << Count_Occurence(A, x) << endl;
	}
	return 0;
}

*/
