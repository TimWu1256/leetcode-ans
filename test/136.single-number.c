int singleNumber(int *nums, int numsSize) {
    int sum = 0;
    for (int i = 0;i < numsSize;i++) {
        sum = sum + nums[i];
    }
    for (int i = 0;i < numsSize;i++) {
        for (int j = 0;j < numsSize;j++) {
            if (nums[i] == nums[j] && i != j) {
                sum = sum - nums[i];
                break;
            }

        }
    }
    return sum;
}

