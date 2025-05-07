int singleNumber(int* nums, int numsSize) {
    int n = *nums; 
        for(int i = 1 ;i<numsSize; i++) n = n^*(nums+i); 
        return n ;
}