/*��һ��
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
/*�ڶ���
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("$ %d %d",i,j); //ÿ�ν���ѭ���󣬻��ʼ��j��ֵ��
        }
        printf("\n");
    }

    return 0;
}
*/
/*������
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
/*������
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
            printf("%c", letters[0]++); //letters[0]++ �ǹؼ����ַ�����
        }
        printf("\n");
    }

    return 0;

}
*/
/*�����⣨���˵Ĵ𰸣�
                                                            //��Ҫ�úÿ���
#include <stdio.h>

int main(void)
{
    int i, j;
    char ch;

    printf("Please enter a upper letter: ");
    scanf_s("%c", &ch);

    int length = ch - 'A';
    //ѭ������;
    printf("The pyramid of %c is:\n", ch);
    for (i = 0; i <= length; i++)
    {
        char t = 'A' - 1;
        for (j = 0; j < length - i; j++)
        {
            printf(" ");
        }
        //�����ո���;
        for (j = 0; j <= i; j++)
        {
            printf("%c", ++t);
        }
        //����ӡ������ĸ;
        for (j = 0; j < i; j++)
        {
            printf("%c", --t);
        }
        //����ӡ�ݼ���ĸ
        printf("\n");
    }

    return 0;
}
*/
/*������
#include <stdio.h>

int main(void)

{
    int i,j;
    int up_limit, low_limit;

    printf("�������������:");
    scanf_s("%d", &up_limit);
    printf("�������������:");
    scanf_s("%d", &low_limit);
    j = (up_limit - low_limit + 1);
    printf("***��ʼ��ӡ���***\n");
    printf("����  ƽ��  ����\n");
    
    for (i = 1; i <=j ; i++)
    {
        printf("%-5d %-5d %-5d\n", low_limit, low_limit * low_limit, low_limit * low_limit * low_limit);
        low_limit++;
    }

    return 0;
}
*/
/*������
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

/*�ڰ���
#include <stdio.h>

int main(void)

{
    double a, b,c;
    printf("�������������������س�������ڶ�����:");
    
    while (scanf_s("%lf %lf", &a,&b)==2) // ע��Ƚ�ֵΪ2
    {
        c = (a - b) / (a * b);
        printf("������Ϊ %g ", c);
        printf("\n������������������������������˳���:");
    }
    return 0;
}
*/

/*�ھ���
#include <stdio.h>

void num(void);

int main(void)

{
    double a, b;
    printf("�������������������س�������ڶ�����:");

    while (scanf_s("%lf %lf", &a, &b) == 2) 
    {
        num(a, b);
        printf("\n������������������������������˳���:");
    }
    return 0;
}
void num(double a, double b)
{
    double c;
    c = (a - b) / a * b;
    printf("������Ϊ %g ", c);
}
*/
//��ʮ��
#include <stdio.h>

int main(void)

{
    int a, b,sum;
    printf("Enter lower and upper integer limits:");
    
    while(scanf_s("%d %d", &a, &b)==2 && a<b)  // ע�� &&д��
    {
        sum = (b * (b + 1) * (2*b + 1) - (a-1)* a * (2*a -1)) / 6; 
        /*����һ�ַ���
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