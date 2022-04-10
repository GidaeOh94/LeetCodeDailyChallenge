from typing import List

class Solution:
    def twoSum(self,nums: List[int], target: int) -> List[int]:
        HasTable = {}
        for i, n in enumerate(nums):
            temp = target - n
            if temp in HasTable.keys():
                left = HasTable[temp]
                right = i
                
                return [left, right] if left<right else [right, left]
            HasTable[n] = i
                    
if __name__ == "__main__":
    S = Solution();
    nums = [2,7,11,15]
    target = 9
    print(S.twoSum(nums=nums, target=target))
    nums = [3,2,4]
    target = 6
    print(S.twoSum(nums=nums, target=target))
    nums = [3,3]
    target = 6
    print(S.twoSum(nums=nums, target=target))