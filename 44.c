#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
������ת�����ıȽϼ򵥣�ע��13�ı�����ֻ�����tam ���������tam tret
������ת�����ıȽϸ��ӣ����ַ��������ж��Ƿ���ڿո� ��û�пո��ʱ��Ҳ��Ҫ�Ƚ����Σ�
��Ϊ13�ı���Ҳ��ֻ�����һ�����ʵ�
*/
char *base[]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
char *advance[]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

void TransmitEtoM( int n )
{
    if( n>=0&&n<=12 )
        printf("%s\n",base[n]);
    else{
        if( n%13==0 )
            printf("%s\n",advance[n/13-1]);
        else
            printf("%s %s\n",advance[n/13-1],base[n%13]);
    }
}

void TransmitMtoE( char s[] )
{
    char *p,*k;
    char s1[10],s2[10];
    int i=0,j=0;
    int num = 0;
    p = strchr(s,' ');
    k = s;
    if( p )
    {
        for( ; k<p; k++ )
            s1[i++] = *k;
        s1[i] = '\0';
        for( p++; *p; p++ )
            s2[j++] = *p;
        s2[j] = '\0';
        for( int it=0; it<12; it++ )
            if( !strcmp(s1,advance[it])){
			   num += (it+1)*13;break;
			}

        for( int it=0; it<=12; it++ )
            if( !strcmp(s2,base[it]) ){
			    num += it;break;
			}

        printf("%d\n",num);
    }
    else{
        for( int it=0; it<12; it++ )
            if( !strcmp(s,advance[it]) ) {
                num = (it+1)*13;
                printf("%d\n",num);
                return;
            }


	        for( int it=0; it<=12; it++ )
	            if( !strcmp(s,base[it]) )
	                num += it;
	        printf("%d\n",num);

	}
}

int main()
{
    int n;
    char s[10];
    scanf("%d",&n);
    getchar();
    for( int i=1; i<=n; i++ )
    {
        gets(s);
        if( s[0]>='0'&&s[0]<='9' )
            TransmitEtoM(atoi(s));
        else
            TransmitMtoE(s);
    }
    return 0;
}
