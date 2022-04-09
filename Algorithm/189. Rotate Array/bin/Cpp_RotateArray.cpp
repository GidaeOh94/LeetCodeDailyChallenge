#include <iostream>
#include <vector>
using namespace std;

template <typename T> class Solution{


	public:
		void reverse(vector<T>& nums, int left, int right){
			int temp; 
			while (left < right){
				temp = nums[left];
				nums[left] = nums[right];
				nums[right] = temp;
				right --;
				left ++;
			}
		}
		void rotate(vector<T>& nums, int k){
			int len = nums.size();
			while(k>len){
				k-=len;
			}
			reverse(nums,0,len-1);
			print(nums);
			reverse(nums,0,k-1);
			print(nums);
			reverse(nums,k,len-1);
			print(nums);
		}
		void print(vector<T> &vector){
			for(auto &x:vector){
				cout<<x<<" ";
			}
			cout<<" "<<endl;
		}  
};

int main(){
	Solution<int> S;
	vector<int> nums = {1,2,3,4,5,6,7};
	cout<<"Nums Size "<<nums.size()<<endl;
	S.print(nums);	
	S.rotate(nums,12);
};
