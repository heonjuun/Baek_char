//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
////1 2 3 4 5 6 7 8 9 0
////2 3 4 5 6 7 8 9 10 11
////할머니가 각 번호를 누를때 걸리는 시간
//// ABC~~Z까지 2부터 ~9
//// 숫자 변환해서 더해서 출력하면됨
//int main()
//{
//	char c1[10];
//	scanf("%s", c1);
//	int time = 0;
//
//	for (int i = 0; i < strlen(c1); i++)
//	{
//		if (c1[i] == 'A' || c1[i] =='B' || c1[i] == 'C')
//		{
//			time += 3;
//		}
//		else if (c1[i] == 'D' || c1[i] == 'E' || c1[i] == 'F')
//		{
//			time += 4;
//		}
//		else if (c1[i] == 'G' || c1[i] == 'H' || c1[i] == 'I')
//		{
//			time += 5;
//		}
//		else if (c1[i] ==  'J' || c1[i] == 'K' || c1[i] == 'L')
//		{
//			time += 6;
//		}
//		else if (c1[i] == 'M' || c1[i] == 'N' || c1[i] == 'O')
//		{
//			time += 7;
//		}
//		else if (c1[i] == 'P' || c1[i] == 'Q' || c1[i] == 'R' || c1[i] == 'S')
//		{
//			time += 8;
//		}
//		else if (c1[i] == 'T' || c1[i] == 'U' || c1[i] == 'V')
//		{
//			time += 9;
//		}
//		else if (c1[i] == 'W'|| c1[i] == 'X' || c1[i] == 'Y' || c1[i] == 'Z')
//		{
//			time += 10;
//		}
//		else {
//			break;
//		}
//	}
//	printf("%d",time);
//
//
//	return 0;
//	
//}