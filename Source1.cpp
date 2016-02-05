#include<stdio.h>

void main(void)
{
	while (true)
	{
		static char* num[] = { "零", "壱", "弐", "参", "四", "伍", "六", "七", "八", "九", };

		int a;
		printf("1桁の数値(0～9999)を入力してください:");
		scanf("%d", &a);


		for (int b = 1000; b > 0; b /= 10)
		{
			printf("%s", num[a / 1000]);
		a = a % 1000;
		}
		
		printf("\n");
	}
	
}

//バイオロボ
//スーパーターボロボ
//オーブロッカー

//void main(void)
//{
//	while (true)
//	{
//		static char* num[] = { "零", "壱", "弐", "参", "四", "伍", "六", "七", "八", "九", };
//
//		int a;
//		printf("4桁の数値(0～9999)を入力してください:");
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