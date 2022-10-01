/*第一题
#include <stdio.h>

int main(void)
{
    int i = 1;
    int b = 97;
    char letter[26];

    for(b,i;i<26;b++,i++)
    printf("%c\n", letter[i]=b);

    return 0;

}
*/
/*第二题
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("$ %d %d",i,j); //每次结束循环后，会初始化j的值。
        }
        printf("\n");
    }

    return 0;
}
*/
/*第三题
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i =70 ; i >= 65; i--)
    {
        for (j = 70; j >= i; j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }

    return 0;
}
*/
/*第四题
#include <stdio.h>

int main(void)

{
    int i;
    int j;
    char letters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (i = 1; i <= 6; i++)
    {
        for (j =1 ; j <= i; j++)
        {
            printf("%c", letters[0]++); //letters[0]++ 是关键，字符递增
        }
        printf("\n");
    }

    return 0;

}
*/
/*第五题（别人的答案）
                                                            //需要好好看看
#include <stdio.h>

int main(void)
{
    int i, j;
    char ch;

    printf("Please enter a upper letter: ");
    scanf_s("%c", &ch);

    int length = ch - 'A';
    //循环次数;
    printf("The pyramid of %c is:\n", ch);
    for (i = 0; i <= length; i++)
    {
        char t = 'A' - 1;
        for (j = 0; j < length - i; j++)
        {
            printf(" ");
        }
        //↑左侧空格数;
        for (j = 0; j <= i; j++)
        {
            printf("%c", ++t);
        }
        //↑打印递增字母;
        for (j = 0; j < i; j++)
        {
            printf("%c", --t);
        }
        //↑打印递减字母
        printf("\n");
    }

    return 0;
}
*/
/*第六题
#include <stdio.h>

int main(void)

{
    int i,j;
    int up_limit, low_limit;

    printf("请输入表格的上限:");
    scanf_s("%d", &up_limit);
    printf("请输入表格的下限:");
    scanf_s("%d", &low_limit);
    j = (up_limit - low_limit + 1);
    printf("***开始打印表格***\n");
    printf("整数  平方  立方\n");
    
    for (i = 1; i <=j ; i++)
    {
        printf("%-5d %-5d %-5d\n", low_limit, low_limit * low_limit, low_limit * low_limit * low_limit);
        low_limit++;
    }

    return 0;
}
*/
/*第七题
#include <stdio.h>
#include<string.h>

int main(void)

{
    char word[40];
    int i;

    printf("Please input a word:");
    scanf_s("%s", &word, sizeof(word));
    i = strlen(word);

    for (i; i >= 0; i--)
    printf("%c", word[i]);

    return 0;
}
*/

/*第八题
#include <stdio.h>

int main(void)

{
    double a, b,c;
    printf("请输入两个浮点数（回车后输入第二个）:");
    
    while (scanf_s("%lf %lf", &a,&b)==2) // 注意比较值为2
    {
        c = (a - b) / (a * b);
        printf("计算结果为 %g ", c);
        printf("\n请输入两个浮点数（按任意非数字退出）:");
    }
    return 0;
}
*/

/*第九题
#include <stdio.h>

void num(void);

int main(void)

{
    double a, b;
    printf("请输入两个浮点数（回车后输入第二个）:");

    while (scanf_s("%lf %lf", &a, &b) == 2) 
    {
        num(a, b);
        printf("\n请输入两个浮点数（按任意非数字退出）:");
    }
    return 0;
}
void num(double a, double b)
{
    double c;
    c = (a - b) / a * b;
    printf("计算结果为 %g ", c);
}
*/
//第十题
#include <stdio.h>

int main(void)

{
    int a, b,sum;
    printf("Enter lower and upper integer limits:");
    
    while(scanf_s("%d %d", &a, &b)==2 && a<b)  // 注意 &&写法
    {
        sum = (b * (b + 1) * (2*b + 1) - (a-1)* a * (2*a -1)) / 6; 
        /*另外一种方法
         int sum = 0;
         int i;
         for (i = a; i <= b; i++)
         {
               sum += i * i;
         }
         */
        printf("The sum of squares from %d to %d is %d", a * a, b * b,sum);
        printf("\nEnter next set of limits:");
        scanf_s("%d %d", &a, &b);
    }
    printf("Done!");
    return 0;
}