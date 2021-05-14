#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAXSIZE 4

//�Ҽ��Ǻ� �Լ�
bool isPrime(int num)
{
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}//�־��� ���ڰ� ������ �Ҽ��� ������ �Ǵ�

//�Ҽ� ���� ���� �Լ�
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    for (int i = 0; i < nums_len; i++)
    {
        for (int j = i + 1; j < nums_len; j++)
        {
            for (int k = j + 1; k < nums_len; k++)
            {
                if (isPrime(nums[i] + nums[j] + nums[k]))
                    answer++;
            }
        }
    }
    return answer;
}

void main()
{
    int numArr1[MAXSIZE] = { 1,2,3,4 };
    int numArr2[MAXSIZE + 1] = { 1,2,7,6,4 };

    for (int i = 0; i < MAXSIZE; i++) {
        printf("%d ", numArr1[i]);
    }
    printf("\n");
    printf("�Ҽ��� %d�� �Դϴ�.\n", solution(numArr1, MAXSIZE));

    for (int i = 0; i < MAXSIZE + 1; i++) {
        printf("%d ", numArr2[i]);
    }
    printf("\n");
    printf("�Ҽ��� %d�� �Դϴ�.\n", solution(numArr2, MAXSIZE + 1));
}