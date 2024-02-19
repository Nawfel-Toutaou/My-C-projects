#include<stdio.h>

int sum(int arr[9]){
    int i=0;
    int s=0;
    while(i<9){
        s=s+arr[i];
        i=i+1;
    }
    return s;
}

int sumRecursive(int arr[9],int i){
    if(i<9)
          return arr[i]+sumRecursive(arr,i+1);
    else  return 0;
}

int nbrOc(int arr[9], int x){
    int counter=0;
    int i=0;
    while(i<9){
        if(arr[i]==x) counter=counter+1;
        i=i+1;
    }
    return counter;
}

int nbrOcRecusive(int arr[9], int x, int i){
    if(i<9){
        if(arr[i]==x) return 1+nbrOcRecusive(arr,x,i+1);
        else return nbrOcRecusive(arr,x,i+1);
    }
    else return 0;
}

int findMax(int arr[9]) {
    int max = arr[0];
    for (int i = 1; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[9]) {
    int min = arr[0];
    for (int i = 1; i < 9; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int countOdd(int arr[9]) {
    int count = 0;
    for (int i = 0; i < 9; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int countEven(int arr[9]) {
    int count = 0;
    for (int i = 0; i < 9; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main(){
    int arr[9]={10,20,30,50,10,90,70,10,30};
    int calculate = sum(arr);
    printf("\nThe sum using the iterative solution: %d\n", calculate);
    calculate = sumRecursive(arr, 0);
    printf("\nThe sum using the recursive solution: %d\n", calculate);

    printf("Enter a value for X: ");
    int x;
    scanf("%d", &x);
    int numberOccurence = nbrOc(arr, x);
    printf("\nX exists %d times in the array\n", numberOccurence);
    numberOccurence = nbrOcRecusive(arr, x, 0);
    printf("\nX exists %d times in the array (Recursive function)\n", numberOccurence);

    printf("\nMax value in the array: %d\n", findMax(arr));
    printf("Min value in the array: %d\n", findMin(arr));
    printf("Number of odd values in the array: %d\n", countOdd(arr));
    printf("Number of even values in the array: %d\n", countEven(arr));
    
    return 0;
}
