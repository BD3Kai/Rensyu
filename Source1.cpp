#include<stdio.h>

void main(void)
{
	while (true)
	{
		static char* num[] = { "��", "��", "��", "�Q", "�l", "��", "�Z", "��", "��", "��", };

		int a;
		printf("1���̐��l(0�`9999)����͂��Ă�������:");
		scanf("%d", &a);


		for (int b = 1000; b > 0; b /= 10)
		{
			printf("%s", num[a / 1000]);
		a = a % 1000;
		}
		
		printf("\n");
	}
	
}

//�o�C�I���{
//�X�[�p�[�^�[�{���{
//�I�[�u���b�J�[

//void main(void)
//{
//	while (true)
//	{
//		static char* num[] = { "��", "��", "��", "�Q", "�l", "��", "�Z", "��", "��", "��", };
//
//		int a;
//		printf("4���̐��l(0�`9999)����͂��Ă�������:");
//		scanf("%d", &a);
//
//
//		for (int digit = 0; digit < 4; digit++)
//		{
//			int i = a[digit] - '0';
//			printf("%s", num[i]);
//
//		}
//	}
//
//}