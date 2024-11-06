#include<stdio.h>

/*int main(void){
    int num1, num2;
    int num=num1+num2;
    scanf("%d %d",&num1, &num2);
    printf("A+B = %d", num);
    return 0;
}
*/
int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    return 0;
}

int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a-b);
    return 0;
}

int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a*b);
    return 0;
}

/*int main(void){
    int a,b;
    double c=a/b;
    scanf("%d %d", &a, &b);
    printf("%d\n", c);
    return 0;
}
*/

int main(void){
    int A, B;
    scanf("%d %d", &A, &B);
    /*두 번째 문제는 소수점 아래 여섯째 자리까지만 나타난다는 점인데, 
    소수점 아래 아홉째 자리까지 나타내기 위해 "%f"가 아닌 "%.9f"을 사용*/
    printf("%.9f\n", (double) A/B);
    /*A/B가 계산된 후에 이를 정수(int)가 아닌 소수(double)로 저장하도록, 
    A/B 앞에 '(double)'을 추가합니다. 
    이것이 바로 '자료형 변환 (type casting)'
    */
    return 0;
}