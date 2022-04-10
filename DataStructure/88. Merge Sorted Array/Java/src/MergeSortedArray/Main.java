package MergeSortedArray;
import java.util.*;
public class Main {
	public static void merge(int[] nums1, int m, int[] nums2, int n) {
		for(int i=m-1,j=n-1,k=nums1.length-1;k>=0&&j>=0;k--){
            nums1[k]=(i>=0&&nums1[i]>=nums2[j])?nums1[i--]:nums2[j--];
        }
		System.out.println(Arrays.toString(nums1));
		
	}
	public static void main(String[] args) {
		
		int[] nums1 = {1,2,3,0,0,0};
		int t = 3;
		int[] nums2 = {2,5,6};
		int z = 2;
		merge(nums1, t, nums2,z);
	}

}
