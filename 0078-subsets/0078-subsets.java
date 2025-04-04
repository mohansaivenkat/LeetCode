class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();

        func(ans,list,nums,0);
        return ans;

    }
    public  static void  func(List<List<Integer>> ans, List<Integer> list,int[] nums,int i){
        if(i==nums.length)
        {
            ans.add(new ArrayList<>(list));
            return;
        }

        list.add(nums[i]);
        func(ans,list,nums,i+1);
        list.remove(list.size()-1);
        func(ans,list,nums,i+1);
    }
}