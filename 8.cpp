public:
    int peakElement(int arr[], int n)
    {
       bool doesExist=false;
       for(int i=1;i<n-1;i++){
           if(arr[i-1]<=arr[i] && arr[i]>=arr[i+1]){
               bool doesExist=true;
               return i;
           }
       }
       if(arr[0]>=arr[1])return 0;
       if(arr[n-1]>=arr[n-2])return (n-1);
        return 0;
    }