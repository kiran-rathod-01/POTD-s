int singleNumber(int* nums, int numsSize) {
 int i,j,n[numsSize],k;
    for(i=0;i<numsSize;i++)
        n[i]=nums[i];
    for(i=0;i<numsSize;i++){
        for(j=0,k=0;j<numsSize;j++){
        if(nums[i]==n[j])
        k++;
        }
        if(k==1)
        return nums[i];
    }
    return 0;
}