#include <stdio.h>

int main(void)
{
	int kor, eng, mat;	//	�� ������ ���� ����� �ʱ�ȭ
	int score;			//	������ ������ ���� ����

	kor = 70;
	eng = 80;
	mat = 90;

	score = kor + eng + mat; // �� ������ ���� ���� ���� ������ ����
	printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
	printf("���� : %d", score);

	return 0;
}