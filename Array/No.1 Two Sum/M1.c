#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i != numsSize-1; ++i){
        for(int j = i+1; j!= numsSize; ++j){
            if(nums[i]+nums[j] == target){
                int* ans = (int*)malloc(sizeof(int)*2);
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}