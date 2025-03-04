#include <stdio.h>
#define N 500

//위에서 아래로
void print(int arr[], int s){
    for(int i=0; i<s; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void sort(int arr[], int s){
    for(int i=0; i<s; i++){
        int max =i;
        for(int j=i+1; j<s;j++){
            if(arr[max]<arr[j]) max=j;
        }
        swap(&arr[max], &arr[i]);
    }
}

int main(){
    int size = 0;
    int arr[N];
    scanf("%d", &size);
    for(int i=0; i<size;i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    print(arr, size);
    return 0;
}