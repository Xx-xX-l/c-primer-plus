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

/*��ʮ��
#include <stdio.h>

int main(void)

{
    int a, b,sum;
    printf("Enter lower and upper integer limits:");
    
    while(scanf_s("%d %d", &a, &b)==2 && a<b)  // ע�� &&д��
    {
        sum = (b * (b + 1) * (2*b + 1) - (a-1)* a * (2*a -1)) / 6; //��ѧ����
        //���򷽷������ã�
       //int sum = 0;
       //int i;
       //for (i = a; i <= b; i++)
       //{
       //      sum += i * i;
       //}
         
        printf("The sum of squares from %d to %d is %d", a * a, b * b,sum);
        printf("\nEnter next set of limits:");
        scanf_s("%d %d", &a, &b);
    }
    printf("Done!");
    return 0;
}
*/

/*��ʮһ��
#include <stdio.h>
int main(void)

{
    int num[9];
    int i;
    printf("������8������:");
    //scanf_s("%d", &num);  //����ֻ��ȡ��һ�����ֽ�������num
    //for (i = 7; i >= 0; i--)
    //{
    //    printf("�����ӡ%d", num[i]);
    //}
    for (i = 0; i <=7;i++)
    {
        scanf_s("%d", &num[i]);
    }
    for (i = 7; i >= 0; i--)
    {
        printf("%d", num[i]);
    }
    printf("\nDone!");
    return 0;
}
*/

/*��ʮ����
#include <stdio.h>

int main(void)

{
    int n,i;
    printf("���������:");
    while ((scanf_s("%d", &n) == 1) && (n > 0))
    {
        double j = 0.0;
        double k = 0.0;
        for (i = 1; i <= n; i++)
        {
            
            j += 1.0 / i;
            if (i % 2 == 1)
            {
                k += 1.0 / i;
            }
            else
            {
                k -= 1.0/ i;
            }
        }
        printf("1.0+1.0/2.0+1.0/3.0+...... = %g\n", j);
        printf("1.0-1.0/2.0+1.0/3.0-1.0/4.0......=%g\n", k);
        printf("sum=%g", j + k);
    }
    return 0;
}
*/

/*��ʮ����
#include <stdio.h>
#include <math.h>

int main(void)

{
    int i;
    int k = 0;
    int mi[8];
    for (i = 0; i <= 7; i++)
    {
        //����һ�ַ���
      //int a = 2; 
      //mi[i] = a;
      //a *= 2;
        mi[i] = pow(2.0,i+1);
    }
    do
    {  
        printf("%d\n", mi[k]);
        k++;
    } while (k < 8);
    return 0;
}
*/

/*��ʮ����
#include <stdio.h>

int main(void)

{
    int i;
    double a[8];
    double b[8];
    for (i = 0; i <= 7; i++)
    {
        printf("�������%d��ֵ:", i+1);
        scanf_s("%lf", &a[i]);
    }
    b[0]=a[0];
    for (i = 1; i <= 8; i++)
    {
        b[i] = a[i] + b[i - 1];
    }
    printf("a array\n");
    for (i = 0; i <= 7; i++)
    {
        printf("%-8.1f", a[i]);
    }
    printf("\nb array\n");
    for (i = 0; i <= 7; i++)
    {
        printf("%-8.1f", b[i]);
    }
    return 0;
}
*/
/*��ʮ����
#include <stdio.h>
#include <string.h>

int main(void)

{
    int i;
    char a[255];
    printf("Enter a sentence:");
    scanf_s("%s",&a,sizeof(a));  //�����ո�ͻ�ֹͣ 
    i = strlen(a);
    for (i; i >= 0; i--)
    {
        printf("%c", a[i]); //�޷���ӡ�ո�
    }
    return 0;
}

//����ĸ��õĴ�
#include <stdio.h>
#define LEN 255

int main(void)
{
    int i = 0;
    char input[LEN];

    printf("Please enter a string:\n");
    do
    {
        scanf_s("%c", &input[i]);
    } while (input[i] != '\n' && ++i && i < LEN);

    printf("Reversing print the string is:\n");
    for (i--; i >= 0; i--)
    {
        //�������ӡ���з�;
        printf("%c", input[i]);
    }
    printf("\nDone.\n");

    return 0;
}
*/

/*��ʮ����
#include <stdio.h>
#include <math.h>

int main(void)

{
    double i,j;
    int n=1;
    do 
    {
        i = 100 +10*n;
        j = 100*pow(1.05,n);
        n++;
    } while (i > j);
    printf("%d��,%.2f,%.2f", n-1,i,j);
    return 0;
}
*/


/*��ʮ����
#include <stdio.h>
#include <math.h>
#define MONENY 100
#define RATE 1.08
#define TAKE 10

int main(void)

{
    double rest;
    int n;
    n = 1;
    rest = MONENY * RATE - TAKE;
    printf("%d�꣬%f\n", 1, rest);
    for (n; rest > 9; n++)
    {
        rest = rest * RATE - TAKE;
        printf("%d��,%f\n", n+1,rest);
    }
    
    return 0;
}
*/

//��ʮ����
#include <stdio.h>

int main(void)

{
    int left,n;
    left = 5;
    for (n = 1; left < 150; n++)
    {
        left = (left - n) * 2;
        printf("��%d�ܣ��ܹ�%d������\n",n, left);
    }
    return 0;
}