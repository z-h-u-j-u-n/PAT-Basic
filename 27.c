#include <stdio.h>
#include <math.h>
//ÿһ�п��Է��÷��ŵ������Ŀ����ͨ����ѧ��ʽ�Ƶ�����:
//ÿһ��ĩβ�Ŀո�Ҫ��ӡ���� ������и�ʽ����
int main()
{
    int i,j,k,n,maxcnt,cnt;
    char c;
    cnt = maxcnt = 0;
    scanf("%d %c",&n,&c);
    maxcnt = (int)(sqrt((n+1)*2*1.0))-1;
    if( maxcnt%2==0 )
        maxcnt--;
    for( i=maxcnt; i>0; i-=2 ){
        for( j=1; j<=(maxcnt-i)/2; j++ )
            printf(" ");
        for( j=1; j<=i; j++ )
            printf("%c",c);
        cnt += i;
        printf("\n");
    }
    for( i=3; i<=maxcnt; i+=2 )
    {
        for( j=1; j<=(maxcnt-i)/2; j++ )
            printf(" ");
        for( j=1; j<=i; j++ )
            printf("%c",c);
        cnt += i;
        printf("\n");
    }
    printf("%d\n",n-cnt);
    return 0;
}
