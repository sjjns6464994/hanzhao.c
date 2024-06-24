int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));
    memset(ans, -1, numsSize * sizeof(int));
    int* st = malloc(numsSize * sizeof(int));
    int top = 0;
    for (int i = 0; i < 2 * numsSize; i++) {
        int x = nums[i % numsSize];
        while (top && x > nums[st[top - 1]]) {
            // x 是 nums[st[top-1]] 的下一个更大元素
            // 既然 nums[st[top-1]] 已经算出答案，则从栈顶弹出
            ans[st[--top]] = x;
        }
        if (i < numsSize) {
            st[top++] = i;
        }
    }
    free(st);
    *returnSize = numsSize;
    return ans;
}
