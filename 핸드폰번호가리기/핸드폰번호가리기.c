#include <stdio.h>
#include <stdlib.h>

char* solution(char* phone_number) {
	char* answer = (char*)malloc(sizeof(char) * 20); // ��ȣ�� ���̴� 20�� �����Դϴ�.

	strcpy(answer, phone_number);
	for (int i = 0; i < strlen(answer) - 4; i++) { //��ȭ��ȣ �� 4�ڸ� �̿ܿ� ��� ���ڸ� *�� ġȯ
		answer[i] = '*';
	}
	return answer;
	free(answer);
}
void main()
{

	char line[100];

	printf("��ȭ��ȣ�� �Է��ϼ���. : ");
	gets(line);  //����ڷκ��� ������ �Է¹���
	printf("��ȯ�� ���� :%s", solution(line)); //��ȯ�� ��ȭ��ȣ ���
	printf("\n");
}