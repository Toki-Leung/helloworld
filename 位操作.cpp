// λ����.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void testNum();
void swapT(int a,int b);

int main(int argc, char* argv[])
{
	//C�����ǽ��ڸ߼����ԣ�����������ԣ���
	//�ͼ����ԣ�������ԣ�֮���һ������
    //λ�������Ա����е�ÿһλ���еĲ���
	
	//char��8λ��char�ͱ�����C�����еĻ�����������֮һ���ַ����ͣ���������һ���ַ��ͱ�����
	
	//char�ܹ���signed��unsigned���Σ�C������������������������Ϊ void��int��float��double��
	
	
	//unsingned char;
	//0 0 0 0 0 0 0 1 1==>3(1*2^1+1*2^0)//������
	unsigned char a=3;
	//~a��ʾ��a���а�λȡ��
	
	//���磺0 0 0 0 0 0 1 1
	// 1 1 1 1 1 1 0 0
	//�����ƣ�1*2^7+1*2^6+1*2^5+1*2^4+1*2^3+1*2^2+0*2^1+0*2^0=252   
	unsigned char c=~a;
	
	printf("c=%d\n",c);
	//0 0 0 0 0 0 1 1==>a
	//0 0 0 0 0 1 1 1==>b
	unsigned char b=7;
	
	
	//��a��b��"λ��"���
	c=a&b;//λ�룺����������ˡ�
	printf("c=%d\n",c);//11==>2^1+2^0=3;
	
	
	
	//��a��b��"λ��"���
	c=a|b;//"λ��"����������ֻҪ��һ����"1"�������Ϊ"1"��
	
	printf("c=%d\n",c);//1 1 1==>7
	
	
	
	//0 0 0 0 0 0 1 1==>a
	//0 0 0 0 0 1 1 1==>b
	
	//0 0 0 0 0 1 0 0==>c
	//��a��b��"���"������
	c=a ^ b;//"���"����������ֻҪ��ͬ����Ϊ0�������ͬ����Ϊ1��
	printf("c=%d\n",c);//1 0 0==>4
	
	
	a=1;//0 0 0 0 0 0 0 1
	
	//��a��������λ
	c=a<<2;//0 0 0 0 0 1 0 0
	
	//ÿ����һλ��c��ֵ��
	printf("c=%d\n",c);
	
	a=8;//0 0 0 0 1 0 0 0
	c=a>>1;//��a������һλ��0 0 0 0 0 1 0 0
	printf("c=%d\n",c);
	
	
	//0 0 0 0 0 0 0 1&
	//0 0 0 0 0 0 0 ?  1 0
	
	//0 0 0 0 0 0 0 ?  1 0
	
	testNum();
	swapT(10,20);
	return 0;
}



void testNum()
{
	for(int i=1;i<10;i++)
	{
		if(i&1)
		{
			printf("����Ϊ%d\n",i);
		}
		
		if((i&1)==0)
		{
			printf("ż��Ϊ%d\n",i);
		}
	}
}

//����a��b��ֵ
void swapT(int a,int b)
{
	a=20;
	b=50;
	//ʹ����򽻻���������ֵ
	a ^=b;//a=a ^ b
	b ^=a;//b=b ^ a=b ^ (a ^ b)=b ^ b ^a=a;
	a ^=b;//a=a ^ b=(a ^ b)^a=b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	/*int c=a;
	a=b;
	b=c;
	//������������*/
		
	
}