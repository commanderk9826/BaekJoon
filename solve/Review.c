/*
//자료형 크기 출력
#include <stdio.h>

int main() {
    printf("char 크기: %lu 바이트\n", sizeof(char)); // char 크기: 1 바이트
    printf("int 크기: %lu 바이트\n", sizeof(int)); // int 크기: 4 바이트
    printf("long 크기: %lu 바이트\n", sizeof(long)); // long 크기: 8 바이트
    printf("long long 크기: %lu 바이트\n", sizeof(long long)); // long long 크기: 8 바이트
    printf("float 크기: %lu 바이트\n", sizeof(float)); // float 크기: 4 바이트
    printf("double 크기: %lu 바이트\n", sizeof(double)); // double 크기: 8 바이트
    return 0;
    
}
*/ 
/*
// gets(), fgets(), scanf("%s", str)
gets(str) : 개행 전까지 입력받음 : 버퍼 오버플로우 발생 가능 (보안 위험)
fgets(str, size, stdin) : 최대 size-1만큼 입력받고, 개행(\n) 포함 : 개행 문자(\n)를 자동 포함
scanf("%s", str) : 공백 기준으로 문자열 입력 (띄어쓰기 불가능) : 버퍼 오버플로우 위험
#include <stdio.h>

int main() {
    char str1[20], str2[20], str3[20];

    printf("scanf로 입력: ");
    scanf("%s", str1);  // 공백 전까지만 입력

    getchar();  // 버퍼 비우기 (중요!)

    printf("gets로 입력 (비추천): ");
    gets(str2);  // 공백 포함 가능하지만 위험

    printf("fgets로 입력: ");
    fgets(str3, sizeof(str3), stdin);  // 안전하게 입력 가능

    printf("scanf: %s\n", str1);
    printf("gets: %s\n", str2);
    printf("fgets: %s\n", str3);
    return 0;
}
*/

/*
//break, continue 문 활용
✅ break: 반복문 즉시 종료
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) break;  // i가 5일 때 반복 종료
        printf("%d ", i);
    }
    return 0;
}

📌 출력: 1 2 3 4

✅ continue: 현재 반복만 건너뛰고 다음 반복 실행
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) continue;  // i가 5일 때만 건너뛰고 다음 반복 실행
        printf("%d ", i);
    }
    return 0;
}

📌 출력: 1 2 3 4 6 7 8 9 10
*/
/*
// strlen(), strcmp(), strcpy(), strcat() 같은 문자열 함수
//strlen() - 문자열 길이 반환
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    printf("문자열 길이: %lu\n", strlen(str));  // 5
    return 0;
}


//strcmp() - 문자열 비교
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    if (strcmp(str1, str2) < 0) {
        printf("apple이 banana보다 사전적으로 앞에 있음\n");
    }
    return 0;
}

//strcpy() - 문자열 복사
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];

    strcpy(dest, src);  // dest에 src 복사
    printf("복사된 문자열: %s\n", dest);
    return 0;
}

//strcat() - 문자열 이어붙이기
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello ";
    char str2[] = "World!";

    strcat(str1, str2);  // str1에 str2를 이어 붙임
    printf("결과 문자열: %s\n", str1);
    return 0;
}
*/

/*
// 예제 3: 문자열 뒤집기
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for(int i=len-1; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}   
*/


// 예제 7: 달팽이 배열 (N×N 크기의 2차원 배열을 달팽이 모양으로 채우기)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100][100] = {0};
    int dx[4] = {0, 1, 0, -1}; // 오른쪽, 아래, 왼쪽, 위
    int dy[4] = {1, 0, -1, 0};
    
    int x = 0, y = 0, dir = 0;
    for (int i = 1; i <= n * n; i++) {
        arr[x][y] = i;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || ny < 0 || nx >= n || ny >= n || arr[nx][ny] != 0) {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
