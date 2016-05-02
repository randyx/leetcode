int singleNumber(int* nums, int numsSize) {
    if(nums == NULL)
        return 0;
    int result = nums[0];
    for(int i =1 ; i < numsSize; i++)
        result = result ^ nums[i];
    return result;
}