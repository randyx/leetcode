int findMin(int num[], int n) {
    int beg=0;
    int end=n-1;
    while(beg<end){  
            if(num[end]==num[beg]){  
                beg++;  
                continue;  
            }  
            if(num[end]>num[beg]){  
                break;  
            }  
            int mid = (beg+end)/2;  
            if(num[mid]<num[beg]){  
                end = mid;  
            }  
            else{  
                beg = mid+1;  
            }  
        }  
        return num[beg];
}