#include<stdio.h>
#include<string.h>
/*�����Ŀö���㷨�϶���ʱ*/
/*
������������  ֻ��O(N)���Ӷ� �õ��Ƕ�̬�滮��˼��
��ĩβ��ʼ������ÿ����һ��T��cntT++
����A����cntAt�ͼ��ϴ�ʱ���е�cntT
����P����cntPat���ϴ�ʱ���е�cntAt
*/
int main()
{
    char s[100008];
    int i,cntPat,cntAt,cntT,n;
    cntPat = cntAt = cntT = 0;
    scanf("%s",s);
    n = strlen(s);

    for( i=n-1; i>=0; i-- ){
        if( s[i]=='T' )
            cntT = (cntT+1)%1000000007;
        if( s[i]=='A' )
            cntAt = (cntAt+cntT)%1000000007;
        if( s[i]=='P' )
            cntPat = (cntPat+cntAt)%1000000007;
    }
    printf("%d\n",cntPat);
    /*ö���㷨
    for( i=0; i<n; i++ )
    {
        if( s[i]=='P' )
            for( j=i+1; j<n; j++ )
            {
                if( s[j]=='A' )
                    for( k=j+1; k<n; k++ )
                    {
                        if( s[k]=='T' )
                            cnt = (cnt+1)%1000000007;
                    }
            }
    }
    */
    //printf("%d\n",cnt);
}
