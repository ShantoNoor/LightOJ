#include <stdio.h>

#define size 10000007

int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    long long int arr[10001];
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %d", 
            &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &n);
        for (int i = 6; i <= n; i++)
        {
            arr[i] = (arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4] + arr[i-5] + arr[i-6]) % size;
        }
        printf("Case %d: %lld\n", ++caseno, arr[n]%size);
    }
    return 0;
}