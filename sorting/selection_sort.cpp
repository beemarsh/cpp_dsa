#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        std::cin >> a[i];
    }

    for(int i=0;i<n-1;i++){
        int minIdx = i;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[minIdx]){
                minIdx = j;
            }
        }
        
        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;
    }
    
    for(int i=0;i<n;i++){
        std::cout << a[i] << " ";
    }

    return 0;
}
