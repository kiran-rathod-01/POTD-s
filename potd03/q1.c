/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int i,j,k=0;
     int *result=(int *)calloc(numsSize,sizeof(int));
     *returnSize=numsSize;
    for(i=0;i<numsSize;i++){
        for(j=0;j<numsSize;j++){
        if(nums[i]>nums[j])
        result[k]++;
        }
        k++;
    }
    return result;
    
}