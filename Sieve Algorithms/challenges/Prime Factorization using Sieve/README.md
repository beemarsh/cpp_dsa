
# Prime Factorization using Sieve

First we create an array of size `n+1`

| Num 1 | Num 2 | Num 3 | Num 4 | Num 5 |
| ----- | ----- | ----- | ----- | ----- |
|   0   |   1   |   2   |   3   |   4   |
|   5   |   6   |   7   |   8   |   9   |
|  10   |  11   |  12   |  13   |  14   |
|  15   |  16   |  17   |  18   |  19   |
|  20   |  21   |  22   |  23   |  24   |
|  25   |  26   |  27   |  28   |  29   |
|  30   |  31   |  32   |  33   |  34   |
|  35   |  36   |  37   |  38   |  39   |
|  40   |  41   |  42   |  43   |  44   |
|  45   |  46   |  47   |  48   |  49   |
|  50   |

**Now we mark each number in the array with its equivalent smallest prime factor.**

Lets say we start from 2. We fill `4`, `6` and so on with 2. This way we can identify that the smallest prime factor of `4` and `6` is 2. 

Now me move to 3. If the number is already marked, we move on. Here `9` is unmarked, so we mark it with 3.

The final array looks like this.

| Num 1 | Num 2 | Num 3 | Num 4 | Num 5 |
| ----- | ----- | ----- | ----- | ----- |
|   0   |   1   |   2   |   3   |   2   |
|   5   |   2   |   7   |   2   |   3   |
|  2   |  11   |  2   |  13   |  2   |
|  3   |  2   |  17   |  2   |  19   |
|  2   |  3   |  2   |  23   |  2   |
|  5   |  2   |  3   |  2   |  29   |
|  2   |  31   |  2   |  3   |  2   |
|  5   |  2   |  37   |  2   |  39   |
|  2   |  41   |  2   |  43   |  2   |
|  5   |  2   |  47   |  2   |  7   |
|  2   |


**Now we print  the prime factors**

Loop until `n` becomes 1.
If `a` is the array, then `a[n]` is the prime factor.
We also have to update `n`.
So `n` = `n / a[n]`


## Code

```cpp
#include<iostream>
#include<cmath>
#include<cstring>

void getFactors(int n){
	int a[n+1];
	for(int i=2;i<=n;i++){
		a[i] = i;
	}

	for(int i=2;i<=n;i++){
		if(a[i]==i)
			for(int j=i*i;j<=n;j+=i) if(a[j] ==j) a[j] = i;
	}

	while(n!=1){
		std::cout << a[n] << " ";
		n = n / a[n];
	}
	
	return;
}

int main(){
	int n;
	std::cin >> n;

	getFactors(n);

	return 0;
}
```
