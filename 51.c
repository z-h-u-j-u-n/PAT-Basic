#include <stdio.h>
#include <math.h>
//��ʵ��Ϊ-0.002ʱӦ�����0.00 ��������ñ�׼��������ͻ����-0.00  ����Ҫ�ֿ�����
int main()
{
    double r1,r2,p1,p2;
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
    double r = r1*r2;
    double p = p1+p2;
    double answerr = r*cos(p);
    double answerp = r*sin(p);
    if( answerr>-0.005&&answerr<0 )
    printf("0.00");
    else
    printf("%0.2lf",answerr);

    if( answerp > 0 )
        printf("+%0.2lfi",answerp);
    else if( answerp <0&&answerp>=-0.05 )
    	printf("+0.00i");
    else
        printf("-%0.2lfi",-answerp);
}
