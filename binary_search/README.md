# Binary Search
## Time Complexity : O [ logn ]
We find the middle index. Then compare the middle element with the given number. If the middle number is greater than the given number, then we can ignore right side of the array and vice versa.
This way we reduce the size of the array by half in a single operation.

```
#include <iostream>

int main(){
        //Question : In an array arr of size n, find the index of k.
        //Take array input and find k.

        int n;
        std::cin >> n;

        int k;
        std::cin >> k;

        int arr[n];
        for(int i=0;i<n;i++){
                std::cin >> arr[i];
        }

        //Now perform a binary search

        int lp=0, rp = n-1;
        int mid;
        mid = (lp + rp) / 2;

        while(arr[mid]!=k){
                mid = (lp + rp) / 2;
                if(arr[mid] > k) rp = mid - 1;
                else if(arr[mid] < k) lp = mid + 1;

        }

        std::cout << mid;
        return 1;
}
```
