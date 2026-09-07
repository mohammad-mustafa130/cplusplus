#include <iostream>
using namespace std;

int* arr;

int fib(int n) {
    if(n == 0 || n == 1) return n;
    if(arr[n] != 0) return arr[n];
    else {
        arr[n] = fib(n-1) + fib(n-2);
        return arr[n];
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));
    
    for(int i = 0; i<n; i++){
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}