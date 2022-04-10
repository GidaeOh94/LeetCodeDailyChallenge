package Main;
import java.util.*;
public class Main {
	
	public static int[] twoSum(int[] nums, int target) {
		HashMap<Integer, Integer> hashMap = new HashMap<Integer,Integer>();
		int[] answer = new int[2];
		for(int i = 0; i<nums.length; i++) {
			int temp = target - nums[i];
			if (hashMap.containsKey(temp)) {
				int left = i;
				int right = hashMap.get(temp);
				answer[0] = left;
				answer[1] = right;
				return answer;
			}
			hashMap.put(nums[i], i);
		}
		return answer;
	}
	public static void printArray(int[] array) {
		System.out.println(Arrays.toString(array));
	}

	public static void main(String[] args) {
		
		// Example 1
		int[] nums = {2,7,11,15};
		int target = 9;
		int[] answer = twoSum(nums = nums, target=target);
		printArray(nums);
		printArray(answer);
		// Example 2
		int[] nums2 = {3,2,4};
		target = 6;
		int[] answer2 = twoSum(nums = nums2, target=target);
		printArray(nums2);
		printArray(answer2);
		// Example 3
		int[] num3 = {3,3};
		target = 6;
		int[] answer3 = twoSum(nums = num3, target=target);
		printArray(num3);
		printArray(answer3);
	}

}
