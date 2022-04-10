#include<iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	unordered_map<int, int> HashMap;
    	vector<int> answer(2,0);
		for (int i=0; i<nums.size();i++){
    		
			int temp = target -nums[i];
    		   		
			if (HashMap.find(temp) != HashMap.end()){
				auto Search = HashMap.find(temp);
    			answer[0] = Search->second;
    			answer[1] = i;
    			return answer;
			}
    		HashMap.insert({nums[i],i});
		}
		return answer;
    }
    void print(vector<int> &vector){
			for(auto &x:vector){
				cout<<x<<" ";
			}
			cout<<" "<<endl;
		}  
};

int main(){
	vector<int> test = {2,7,11,15};
	vector<int> answer(2,0);
	int target = 9;
	Solution S;
	answer = S.twoSum(test,target);
	
	S.print(answer); 
}
