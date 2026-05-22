int peakIndexInMountainArray(int* arr, int arrSize) {
    int i=1;
    int j=arrSize-2;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return -1;
}