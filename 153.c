int findMin(int num[], int n) {
    int min=0;
    int max=n-1;
    int mid;
    while(min<max){
        mid=(min+max)/2;
        if(num[min]<=num[max]){
            break;
        }
        if(num[min]<=num[mid])
           min=mid+1;
        else
           max=mid;
    }
    return num[min];
}