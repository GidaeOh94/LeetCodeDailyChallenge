#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1; int j = n-1;
		for(
			int k = nums1.size()-1;
			k>=0 && j>=0;
			k--
			){
        	nums1[k] = (i>=0 && nums1[i]>=nums2[j])? nums1[i--]:nums2[j--];
		}
    }
    void print(vector<int>& array){
    	for(auto &i:array){
    		cout<<i<<" ";
		}
		cout<<" "<<endl;
	}
};

int main(){
	Solution S;
	vector<int> nums1 = {1,2,3,0,0,0};
	int m = 3;
	vector<int>	nums2 = {2,5,6};
	int n = 2;
	S.merge(nums1, m, nums2, n);
	S.print(nums1);
}
