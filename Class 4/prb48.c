#include <stdio.h>
int binarySearch(int arr[], int low, int high, int target)
{
{
    if (low>high)
    return -1;
}
int mid=(low + high)/2;
if (arr[mid] == target)
{
    return mid;
}
else if (target < arr[mid])
{
    return binarySearch(arr, low, mid - 1, target);
}
else 
{
    return binarySearch(arr, mid + 1, high, target);
}
}
int main ()
{
    int n, arr[100], target;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int index = binarySearch(arr, 0, n-1, target);
    if (index != -1)
    {
        printf("Target found at index %d\n", index);
    }
    else 
    {
        printf("Target not found\n");
    }
    return 0;
}