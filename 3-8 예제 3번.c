#include <stdio.h>

int main(void)
{
	int kor, eng, mat;	//	세 과목의 변수 선언과 초기화
	int score;			//	총점을 저장할 변수 선언

	kor = 70;
	eng = 80;
	mat = 90;

	score = kor + eng + mat; // 세 변수의 값을 더해 총점 변수에 저장
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	printf("총점 : %d", score);

	return 0;
}