int maxSubarraySumCircular(int* nums, int numsSize) {
    int total = 0;
    int currMax = nums[0], maxSum = nums[0];
    int currMin = nums[0], minSum = nums[0];

    for(int i = 0; i < numsSize; i++) {
        total += nums[i];

        if(i > 0) {
            currMax = nums[i] > currMax + nums[i] ? nums[i] : currMax + nums[i];
            maxSum = maxSum > currMax ? maxSum : currMax;

            currMin = nums[i] < currMin + nums[i] ? nums[i] : currMin + nums[i];
            minSum = minSum < currMin ? minSum : currMin;
        }
    }

    if(maxSum < 0)
        return maxSum;

    return (total - minSum) > maxSum ? (total - minSum) : maxSum;
}
