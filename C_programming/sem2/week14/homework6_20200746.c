#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생정보 담는 자료형
typedef struct _student_t {
    char name[11];
    double kor;
    double eng;
    double math;
} student_t;

// ArrayList 설계
typedef struct _ArrayList {
    student_t *data;
    int size;
    int capacity;
} ArrayList;

// ArrayList 생성(초기화)
void array_list_create(ArrayList *list) {
    list->data = (student_t *)malloc(sizeof(student_t) * 3); // 초기 용량 3으로 시작
    list->size = 0;
    list->capacity = 3;
}

// ArrayList에 학생 추가 (동적 할당)
void array_list_add(ArrayList *list, student_t student) {
    if (list->size == list->capacity) {
        list->capacity *= 2;
        list->data = (student_t *)realloc(list->data, sizeof(student_t) * list->capacity);
    }
    list->data[list->size++] = student;
}

// ArrayList 메모리 해제
void array_list_free(ArrayList *list) {
    free(list->data);
    list->data = NULL;
    list->size = 0;
    list->capacity = 0;
}

// 총점을 기준으로 내림차순 정렬 - merge_sort
void array_list_merge_sort(student_t *arr, int N) {
    // 길이가 1일 경우 이미 정렬 완료된 리스트로 가정
    if (N == 1) return;

    // 이등분하여 각각 정렬수행
    array_list_merge_sort(arr, N/2);
    array_list_merge_sort(arr + N/2, N - N/2);
    
    // 병합 결과 저장할 임시 배열 temp_arr
    student_t *temp_arr;
    temp_arr = (student_t *)malloc(sizeof(student_t) * N);
    int i = 0, j = N/2,  k = 0;

    // 정렬된 2개의 리스트에 대해 정렬 수행
    // i: 0 ~ 절반-1 / j: 절반 ~ 끝
    while (i < N/2 && j < N) {
        double total_score_i = arr[i].kor + arr[i].eng + arr[i].math;
        double total_score_j = arr[j].kor + arr[j].eng + arr[j].math;

        // 내림차순 정렬
        if (total_score_i >= total_score_j) // 앞부분 절반(i)이 더 크다면
            temp_arr[k++] = arr[i++]; // 앞부분 요소(i)를 temp_arr에 추가
        else                                // 뒷부분 절반(j)이 더 크다면
            temp_arr[k++] = arr[j++]; // 뒷부분 요소(j)를 temp_arr에 추가
    }

    // 남아있는 원소들 전부 복사
    while (i < N/2) temp_arr[k++] = arr[i++];
    while (j < N)   temp_arr[k++] = arr[j++];

    // 임시 배열에서 원본 배열로 복사
    memmove(arr, temp_arr, sizeof(student_t) * N);
        
    // 메모리 해제
    free(temp_arr);
}

int main(void) {
    // hw6_input.txt 파일에 적혀진 모든 학생을 파일에 저장된 모든 정보를 읽어오기
    char fpath[] = "hw6_input.txt";
    FILE *fp;
    fp = fopen(fpath, "r");

    // 3.  ArrayList students에 저장
    ArrayList students;
    student_t tmp_std; // 임시로 학생정보 할당할 구조체 변수

    array_list_create(&students);

    // 파일로부터 학생 정보를 읽어 배열에 저장한다. (이름, 국어, 영어, 수학)
    while (fscanf(fp, "%s %lf %lf %lf", tmp_std.name, &tmp_std.kor, &tmp_std.eng, &tmp_std.math) != EOF)
        array_list_add(&students, tmp_std);
    fclose(fp);

    // 저장된 데이터를 총점을 기준으로 내림차순 정렬
    // (점수가 높은 학생이 0번째 인덱스에 위치하도록)
    array_list_merge_sort(students.data, students.size);

    // 4. 사용자입력에 따라 해당 등수의 학생이름과 평균을 출력하는 작업을 반복한다.
    // • 1등은 0번째 인덱스, 2등은 1번째 인덱스를 출력하도록 구현한다.
    while(1) {
        int rank;
        scanf("%d", &rank);
        if (rank == 0){ // 0이 입력되면 반복을 종료한다.
            break;
        }
        if (rank < 1 || rank > students.size) {
            printf("Invalid rank\n");
            continue;
        } else {
            student_t student = students.data[rank - 1];
            double avg_score = (student.kor + student.eng + student.math) / 3;
            printf("%s %.4f\n", student.name, avg_score);
        }
    }
    
    array_list_free(&students);
    return 0;

}