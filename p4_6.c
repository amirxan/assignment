#include <stdio.h>
#include <stdbool.h>

bool isOnly916(int arr[], int len);

int main()
{
    int nums1[] = { 1,9,1,6 };
    int nums2[] = { 1,9,2,6 };
    int nums3[] = { 1 };

    printf("%s\n", isOnly916(nums1, 4) ? "true" : "false"); 
    printf("%s\n", isOnly916(nums2, 4) ? "true" : "false"); 
    printf("%s\n", isOnly916(nums3, 1) ? "true" : "false"); 
}

bool isOnly916(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != 9 && arr[i] != 1 && arr[i] != 6)
            return false;   
    }

    return true;          
}