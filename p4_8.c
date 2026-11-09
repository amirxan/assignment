#include <stdio.h>

int middleAverage(int arr[], int len);

int main()
{
    int nums1[] = { 1, 2, 3, 4, 100 };
    int nums2[] = { 1, 1, 5, 5, 10, 8, 7 };
    int nums3[] = { -10, -4, -2, -4, -2, 0 };

    printf("%d\n", middleAverage(nums1, 5));
    printf("%d\n", middleAverage(nums2, 7)); 
    printf("%d\n", middleAverage(nums3, 6)); 
}

int middleAverage(int arr[], int len)
{
    int min = arr[0];
    int max = arr[0];
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];

        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    sum -= min;
    sum -= max;

    return sum / (len - 2);  
}