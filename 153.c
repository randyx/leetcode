int findMin(int num[], int n) {
    int min=0;
    int max=n-1;
    int mid;
    int result;
    while(min<=max){
        mid=(min+max)/2;
        if(num[min]<=num[mid]&&num[mid]<=num[max]){
            result=min;
            break;
        }
       else if(num[min]<=num[mid]&&num[mid]>=num[max])/*右边*/
           min=mid+1;
       else if(num[min]>=num[mid]&&num[mid]<=num[max])
           max=mid;
    }
    return num[result];
}