/*
 * �迭�� �Ķ���ͷ� ���� �Լ��� ����
 */

#include <stdio.h>

// �迭Ÿ���̴�. �����Ͱ� �ƴϴϱ� �ּҰ� �ƴ� ���� ���� ȣ���� �Ͼ����?
void sum_to_arr(int arr[], int N) {
    int i;
    for (i = 0; i < 5; i++)
        arr[i] += N;
}

void print_arr(int arr[]) {
    int i;
    printf("arr:");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void) {
    int array[5] = { 22, 11, 26, 12, 23 };

    print_arr(array);
    // �迭�� �Ķ���ͷ� �����ϱ� ���� ���� ȣ���� �Ͼ����?
    sum_to_arr(array, 10);
    // �׷��ϱ� ���� �迭�� ������� �ʰ���?
    print_arr(array);

    return 0;
}