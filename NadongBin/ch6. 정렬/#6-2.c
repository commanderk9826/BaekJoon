// 성적이 낮은 순서로 학생 출력하기
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000000

// 학생 정보를 저장할 구조체 정의
typedef struct{
    char name[101];
    int score;
} Student;

// 학생 배열 출력 함수(이름만 출력)
void print(Student arr[], int s){
    for(int i=0; i<s; i++){
        printf("%s ", arr[i].name);
    }
    printf("\n");
}

// 두 학생 정보를 교환하는 함수
void swap(Student *a, Student *b){
    Student temp = *a;
    *a=*b;
    *b=temp;
}

// 선택 정렬(점수를 기준으로 오름차순 정렬)
void sort(Student arr[], int s){
    for(int i=0; i<s; i++){
        int min =i;
        for(int j=i+1; j<s;j++){
            if(arr[j].score<arr[min].score) min=j;
        }
        swap(&arr[min], &arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n); // 학생 수 입력 받기
    
    // 동적 메모리 할당(Heap 메모리 사용)
    Student *students = (Student*) malloc(n*sizeof(Student));
    if(students == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 학생 정보 입력 받기
    for(int i=0; i<n; i++){
        scanf("%s %d", students[i].name, &students[i].score);
    }

    sort(students, n);
    print(students, n);

    // 동적 메모리 해체
    free(students);

    return 0;
}