int trappingWater(int arr[], int n){
    // Your code here
    int me[n];
    int mf[n];
    int m =0;
    for(int i=0;i<n;i++){
        if(arr[i] > m){
            m = arr[i];
        }
        me[i]=m;
    }
    m=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i] > m){
            m = arr[i];
        }
        mf[i]=m;
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += min(me[i],mf[i])-arr[i];
    }
    return sum;
}
