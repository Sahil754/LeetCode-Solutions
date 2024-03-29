/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int i;
    int* result = (int*)malloc(numsSize*sizeof(int));
    result[i]=0;
    result[i] = result[i]+nums[i];
    for(i=1;i<numsSize;i++){
        result[i] = result[i-1]+nums[i];
    }
    *returnSize = numsSize;
    return result;
}
