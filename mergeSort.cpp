// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &nums, int left, int right, int mid)
// {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     vector<int> leftNums(n1), rightNums(n2);

//     // Copy data to temporary arrays
//     for (int i = 0; i < n1; i++)
//         leftNums[i] = nums[left + i];
//     for (int j = 0; j < n2; j++)
//         rightNums[j] = nums[mid + 1 + j];

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2)
//     {
//         // Compare elements from the left and right subarrays
//         if (leftNums[i] <= rightNums[j])
//         {
//             nums[k] = leftNums[i];
//             i++;
//         }
//         else
//         {
//             nums[k] = rightNums[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy the remaining elements of leftNums[] if any
//     while (i < n1)
//     {
//         nums[k] = leftNums[i];
//         i++;
//         k++;
//     }

//     // Copy the remaining elements of rightNums[] if any
//     while (j < n2)
//     {
//         nums[k] = rightNums[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(vector<int> &nums, int left, int right)
// {
//     if (left < right)
//     {
//         int mid = left + (right - left) / 2;

//         // Recursively sort the two halves
//         mergeSort(nums, left, mid);
//         mergeSort(nums, mid + 1, right);

//         // Merge the sorted halves
//         merge(nums, left, right, mid);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     mergeSort(nums, 0, nums.size() - 1);

//     for (int num : nums)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void merge(vector<int> &nums, int left, int mid, int right)
    {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        // create a temp array to store the result of left and  right...
        vector<int> leftNums(n1), rightNums(n2);
        // copy the result in these temp arrays...
        for (int i = 0; i < n1; i++)
        {
            leftNums[n1] = nums[left + i];
        }
        for (int j = 0; j < n2; j++)
        {
            rightNums[n2] = nums[mid + 1 + j];
        }
        // push  back the   result  into the  main array...
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2)
        {
            if (leftNums[i] <= rightNums[j])
            {
                nums[k] = leftNums[i];
                i++;
            }
            else
            {
                nums[k] = rightNums[j];
                j++;
            }
            k++;
        }
        //  copy the remaining  elements of the leftNums[] , if any....
        while (i < n1)
        {
            nums[k] = leftNums[i];
            i++;
            k++;
        }
        while (i < n2)
        {
            nums[k] = rightNums[j];
            j++;
            k++;
        }
    }

private:
    void mergeSort(vector<int> &nums, int left, int right)
    {
        if (left >= right)
            return;
        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }
};