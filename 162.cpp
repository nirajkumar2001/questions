int findPeakElement(vector<int> &arr) {
    // Write your code here 
    int n= arr.size();
    int low=0,high=n-1;
    if (n==1){return 0;}
    if(arr[0]>arr[1]){return 0;}
    if(arr[n-1]>arr[n-2]){return n-1;}
    while(low<=high)
    {
        int mid=(low+high)/2;
        if (mid > 0 && mid < n - 1 && arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            } else if (mid == 0 || (mid > 0 && arr[mid] > arr[mid - 1])) {
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return -1;
}
