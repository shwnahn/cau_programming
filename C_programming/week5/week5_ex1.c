/*
 * �����͸� �Ķ���ͷ� ���� �Լ��� ����
 */

#include <stdio.h>

// �����ͷ� �ּ� ���� �޾ƿ��� �ִ�. ������ ���� ȣ���̰ڳ�?
void sum_to_arr(int *arr, int N) {
    int i;
    for (i = 0; i < 5; i++)
        arr[i] += N;    // �����͸� �迭ó�� ������ �� ����!
}

void print_arr(int *arr) {
    int i;
    printf("arr:");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);  // �����͸� �迭ó�� ������ �� ����!
    printf("\n");
}

int main(void) {
    int array[5] = { 22, 11, 26, 12, 23 };

    print_arr(array);
    // �迭�� �̸��� �� �ּ�! �ּҸ� �Ѱ��ִ� �Ŵϱ� ������ ���� ȣ���̰���?
    sum_to_arr(array, 10);
    // �׷��ϱ� ���� �迭�� ����ǰ���?
    print_arr(array);

    return 0;
}