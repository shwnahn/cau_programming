#include <stdio.h>

char *resource_manager(int size) {
    // 여러번 함수가 호출되어도 resource_pool에 저장된 데이터가 유지되도록 구현
    static char resource_pool[100] = {0};   // 100바이트 크기의 메모리 풀
    // 여러번 함수가 호출되어도 index가 유지되도록 구현
    static int index = 0;                   // 다음으로 할당할 위치

    char *ret = NULL;

    // TODO:(optional, 1 point)
    //      만약 할당할 수 있는 공간이 부족하거나 요청하는 크기가 0이하라면 NULL을 반환
    if (size == 0 || index + size > 100 ) {
        return NULL;
    }

    // TODO:요청한 크기만큼 메모리를 할당
    // --> 현재 사용되지 않는 메모리의 시작주소를 반환하고, 요청한 크기만큼 메모리를 건너뛰는 작업
    
    /**
     * size 바이트만큼 할당
     * &resource_pool[0] 에서 index 만큼 이동, 사용되지 않는 메모리 시작주소 반환
     */
    ret = resource_pool + index;

    // index를 size만큼 이동
    index += size;

    // 할당된 공간의 시작주소 리턴
    return ret;
}

int main(void) {
    int *int_arr = NULL;       int Ni = 0;  // int 배열을 다루기 위한 변수들
    double *double_arr = NULL; int Nd = 0;  // double 배열을 다루기 위한 변수들
    short *short_arr = NULL;   int Ns = 0;  // short 배열을 다루기 위한 변수들
    int i;

    /* int배열의 크기 Ni를 입력받고,
       int_arr에 Ni개수만큼 int형 데이터를 저장할 수 있는 메모리를 할당하고,
       Ni개수만큼 데이터를 입력받아 저장  */
    printf("Enter the size of int array: ");
    scanf("%d", &Ni);
    /* int배열이니까 필요한 총 바이트 수는? --> sizeof(int) x Ni
       sizeof(int) --> 각 원소인 int형의 바이트 수 (4)
       Ni --> 배열이 가지는 원소의 개수 */
    int_arr = (int *)resource_manager(sizeof(int) * Ni);    // int형 배열처럼 사용하기 위해 int 포인터로 변환
    // TODO:(optional, 1 point), resource_manager가 반환해준 주소가 이상(NULL)하다면 처리하지 않도록
    if (int_arr != NULL) { // NULL 아닐 때만 처리하도록
        printf("Enter %d integers: ", Ni);
        for (i = 0; i < Ni; i++) {
            scanf("%d", &int_arr[i]);
        }
    }

    // TODO:double 배열을 저장할 수 있는 코드 작성
    printf("Enter the size of double array: ");
    scanf("%d", &Nd); 
    double_arr = (double *)resource_manager(sizeof(double) * Nd);    // double형 배열처럼 사용하기 위해 double 포인터로 변환
    if (double_arr != NULL) {
        printf("Enter %d doubles: ", Nd);
        for (i = 0; i < Nd; i++) {
            scanf("%lf", &double_arr[i]); // double 자료형 받기 위해서는 %d 대신 %lf
        }
    }

    // TODO:short 배열을 저장할 수 있는 코드 작성
    printf("Enter the size of short array: ");
    scanf("%d", &Ns);
    short_arr = (short *)resource_manager(sizeof(short) * Ns);    // short형 배열처럼 사용하기 위해 short 포인터로 변환
    if (short_arr != NULL) {
        printf("Enter %d shorts: ", Ns);
        for (i = 0; i < Ns; i++) {
            scanf("%hd", &short_arr[i]); // short 자료형은 %d 써도 상관없다. but 찾아보니 %hd 가 더 적절하다고 함.
        }
    }

    // TODO:입력받은 데이터를 출력
    
    // TODO:(optional, 1 point), resource_manager가 반환해준 주소가 이상(NULL)하다면 처리하지 않도록
    if (int_arr != NULL) { // NULL 아닐 때만 처리하도록
        printf("int_arr: ");
        // TODO:int_arr에 저장된 데이터 출력
        for (i = 0; i < Ni; i++) {
            printf("%d ", int_arr[i]);
        }
        printf("\n");
    }

    // TODO:(optional, 1 point), resource_manager가 반환해준 주소가 이상(NULL)하다면 처리하지 않도록
    if (double_arr != NULL) {
        printf("double_arr: ");
        // TODO:double_arr에 저장된 데이터 출력
        // 소수점은 둘째까지만
        for (i = 0; i < Nd; i++) {
            printf("%3.2lf ", double_arr[i]);
        }
        printf("\n");
    }

    // TODO:(optional, 1 point), resource_manager가 반환해준 주소가 이상(NULL)하다면 처리하지 않도록
    if (short_arr != NULL) {
        printf("short_arr: ");
        // TODO:short_arr에 저장된 데이터 출력
        for (i = 0; i < Ns; i++) {
            printf("%hd ", short_arr[i]);
        }
        printf("\n");
    }

    return 0;
}