void arrange(int arr[],int n){
    int j = 0;
	int i = 0;
    
    while(j <= n){
        
        if( j % 2 != 0){
            arr[i] = j;
            i++;
        }
        j++;
    }
    j = n;
    while(j >= 1){
        
        if(j % 2 == 0){
            arr[i] = j;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
}
