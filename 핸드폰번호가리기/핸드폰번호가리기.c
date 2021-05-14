#include <stdio.h>
#include <stdlib.h>

char* solution(char* phone_number) {
	char* answer = (char*)malloc(sizeof(char) * 20); // 번호의 길이는 20자 이하입니다.

	strcpy(answer, phone_number);
	for (int i = 0; i < strlen(answer) - 4; i++) { //전화번호 뒷 4자리 이외에 모든 숫자를 *로 치환
		answer[i] = '*';
	}
	return answer;
	free(answer);
}
void main()
{

	char line[100];

	printf("전화번호를 입력하세요. : ");
	gets(line);  //사용자로부터 정보를 입력받음
	printf("변환된 정보 :%s", solution(line)); //변환된 전화번호 출력
	printf("\n");
}