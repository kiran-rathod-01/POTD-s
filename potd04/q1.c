void sortColors(int* nums, int numsSize) {
    int i=0,j,k=0,temp;
    while(i<numsSize){
        for(j=i;j<numsSize;j++){
            if(nums[j]==k){
            temp=nums[i];
            nums[i]=k;
            nums[j]=temp;
            i++;
            }
         }
         k++;
         
    }
}
