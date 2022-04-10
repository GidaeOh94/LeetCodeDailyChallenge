from typing import *
class Solution:
    def __init__(self):
        self.nums1: List[int] = [1,2,3,0,0,0]
        self.nums2 : List[int] = [2,5,6]
        self.m:int = 3
        self.n:int = 3
        pass
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        temp = nums1[:m]
        nums1.clear() #Answer is nums1 so make List empty 
        temp.extend(nums2[:n])
        temp.sort()
        nums1.extend(temp)
        print(nums1)
        print(dir(nums1))
        
if __name__ == "__main__":
    S = Solution()
    S.merge(S.nums1, S.m, S.nums2, S.n)