int findTriplets(int arr[], int n, int sum){
    for(int i = 0; i < n-2; i++){
        unordered_set<int>s;

        for(int j = i+1; j < n; j++){
            int x = sum - (arr[i] + arr[j]);

            if(s.find(x) != s.end()){
                return {x, arr[i], arr[j]};
            }
            s.inesrt(arr[j]);
        }
    }
}