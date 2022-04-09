package Main;

import java.util.Arrays;

public class Main {
	
	public static void reverse(int[] nums, int left, int right) {
		while(left<right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            right--;
            left++;
        }
	}
	public static void rotate(int[] nums, int k) {
		int len = nums.length;
        while(k>len){
            k-=len;
        }
        reverse(nums, 0, len-1);
        reverse(nums, 0, k-1);
        reverse(nums,k,len-1);
	}
	
	public static void main(String[] args) {
		int[] nums  = {1,2,3,4,5,6,7};
		int k = 12;
		
		System.out.println("nums: "+Arrays.toString(nums)+", K = "+k);
		rotate(nums,k);
		System.out.println("nums: "+Arrays.toString(nums)+", K = "+k);

	}

}
