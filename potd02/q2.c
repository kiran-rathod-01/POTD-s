int minimumOperations(int* nums, int numsSize) {
    int i,count=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]==1){
        nums[i]=nums[i]-1;
        count++;
        }
        if(nums[i]%3==1){
        nums[i]=nums[i]-1;
        count++;
        }
        if(nums[i]%3==2){
        nums[i]=nums[i]+1;
        count++;
        }
    }
    return count;
}