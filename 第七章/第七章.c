#include <stdio.h>

int main(void)

{
	int ch_num = 0;
	int space = 0;
	int enter = 0;	
	char ch;
	printf("Enter whatever you want(enter '#' to quit):");
	while ((ch=getchar()) !='#')
	{
		if (ch  == '\n')
		enter++;

		else if(ch ==' ')
		space++;

		else
		ch_num++;

	}
	printf("空格数:%d,字符数:%d,换行符数:%d。", space, ch_num, enter);
	return 0;
}