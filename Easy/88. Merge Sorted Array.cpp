#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        if (m == 0) {
            for (int i = 0;i < n;i++) {
                nums1.resize(n);
                nums1[i] = nums2[i];
            }
            for (int i = 0;i < nums1.size();i++) {
                cout << nums1[i] << " ";
            }
            return;
        }

        if (n == 0) {
            nums1 = nums1;
            for (int i = 0;i < nums1.size();i++) {
                cout << nums1[i] << " ";
            }
            return;
        }

        for (int i = 0;i < n;i++) {
            nums1.pop_back();
        }
        for (int i = 0;i < n;i++) {
            if (nums2[i] > nums1.back()) {
                nums1.insert(nums1.end(), nums2[i]);
                continue;
            }
            for (int j = 0;j < nums1.size();j++) {
                if (nums2[i] < nums1[j]) {
                    nums1.insert(nums1.begin() + j, nums2[i]);
                    break;
                }
                if (nums2[i] == nums1[j]) {
                    nums1.insert(nums1.begin() + j + 1, nums2[i]);
                    break;
                }
            }
        }

        for (int i = 0;i < nums1.size();i++) {
            cout << nums1[i] << " ";
        }
    }
};