#include<stdio.h>
#include<string.h>
//ӳ���˼��
int main()
{
    int a[62];
    char s1[1005],s2[1005];
    scanf("%s %s",s1,s2);
    memset(a,0,sizeof(a));
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int flag = 1;
    int lesscnt = 0;
    for( int i=0; i<len1; i++ )
    {//�ܹ��е�����
        if( s1[i]>='0' && s1[i]<='9' )
            a[s1[i]-'0']++;
        else if( s1[i]>='a' && s1[i]<='z' )
            a[s1[i]-'a'+10]++;
        else if( s1[i]>='A' && s1[i]<='Z' )
            a[s1[i]-'A'+36]++;
    }
    for( int i=0; i<len2; i++ )
    {//��Ҫ������
        if( s2[i]>='0' && s2[i]<='9' )
            a[s2[i]-'0']--;
        else if( s2[i]>='a' && s2[i]<='z' )
            a[s2[i]-'a'+10]--;
        else if( s2[i]>='A' && s2[i]<='Z' )
            a[s2[i]-'A'+36]--;
    }
    for( int i=0; i<62; i++ )
    {//�����Ƿ�ȱ������
        if( a[i]<0 ){
            flag = 0;
            lesscnt += a[i];
        }
    }
    if( flag )
        printf("Yes %d\n",len1-len2);
    else
        printf("No %d\n",-lesscnt);
    return 0;
}
