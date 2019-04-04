#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char ratio[100] = "";
	int day30 = 1;
	int day23 = 1;
	lotus(&day23, 23);
	lotus(&day30, 30);
	sprintf(ratio, "%d/%d\n",day23,day30 );
	printf("%d\n",day30);
	printf("%s\n", ratio);
	printf("\n");
	printf("%.2f% \n", (float)(day23 / day30) * 100);
	printf("%d \n", day30 / day23);
	return 0;
}

int lotus(int* start_num, int days)
{
	static int cnt = 0;
	
	if (--days == 0)
	{
		return 0;
	}
	++cnt;
	*start_num *= 2;
	printf("%d day(s) later, %d lotus(s)\n", cnt, *start_num);
	lotus(start_num, days);

}
