/*
cin.getline(str, len);
��һ������str�������洢�����е��������ƣ��ڶ�������len��Ҫ��ȡ���ַ�����
cin.get(str, len);
getline���������з�����get()�����з����������������
���ԣ���ʹ��cin.get()�����������ʱ���м����ʹ��get()�������з���
*/
#include<iostream>
using namespace std;
//��������cin�����ո�ֹͣ�����Խ�����ֱ�Ӵ���������
//Ҳ����getline���������ַ���Ȼ���¼�����пո��λ�ã��������
int main()
{
    char s[100][88];
    int i;
    i=0;
    while( cin>>s[i] ){
        i++;
    }
    i--;
    while( i>=0 ){
        cout<<s[i];
        if( i ) cout<<" ";
        i--;
    }
}
