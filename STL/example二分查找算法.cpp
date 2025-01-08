#include <iostream>
#include <vector>

using namespace std;

// 二分查找算法
int binarySearch(vector<int>& nums, int target) {
    int left = 0; // 左边界
    int right = nums.size() - 1; // 右边界

    while (left <= right) { // 当左边界小于等于右边界时循环
        int mid = left + (right - left) / 2; // 中间元素的索引

        if (nums[mid] == target) { // 如果中间元素等于目标元素
            return mid; // 返回中间元素的索引
        }
        else if (nums[mid] < target) { // 如果中间元素小于目标元素
            left = mid + 1; // 将左边界移到中间元素的右侧
        }
        else { // 如果中间元素大于目标元素
            right = mid - 1; // 将右边界移到中间元素的左侧
        }
    }

    return -1; // 目标元素不存在
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9}; // 有序数组
    int target = 7; // 目标元素

    int result = binarySearch(nums, target); // 使用二分查找算法查找目标元素的索引

    if (result == -1) { // 如果返回结果为-1，表示目标元素不存在
        cout << "目标元素不存在" << endl; // 打印提示信息
    }
    else { // 否则目标元素存在
        cout << "目标元素的索引是：" << result << endl; // 打印目标元素的索引
    }

    return 0;
}
