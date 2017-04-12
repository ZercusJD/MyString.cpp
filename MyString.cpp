#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString(const char*s,int length)
{
	len=length;
	if(length==0)
		*a = '\0';
	else
	{
		a=new char[len+1];
		for(int i=0;i<len+1;i++)
		{
			a[i]=*s++;
		}
		a[len+1]='\0';
	}
} 

void MyString::show()
 { 
	if(len==0)  
		cout<<"该字符串为空！"<<endl;  
	else 
	{
		for(int i = 0; i < len; i++)
		{
			cout<<a[i];
		}
	}
	cout<<'\n'<<endl;
 }

void MyString::insert(int position,char c)
{
	char *str=new char[len+2];
	str[position]=c;
	int i=0;
	while(i<len+2)
	{
			if(i!=position)
				str[i]=*a++;
			i++;
	}
	str[len+2]='\0';

	 if(position>len)
		 cout<<"error input";
	 else
	 {
		len++;
		a=new char[len+1];
		for(int i=0;i<len+1;i++)
		{
			a[i]=*str++;
		}
		a[len+1]='\0';

}
}
void MyString::delete_at(int position)
{
	 if(position>len || position <0)
		 cout<<"error input";
	 else
	 {
		for(int i=position;i<len+1;i++)
		{
			a[i]=a[i+1];
		}	
		len--;
	 }
 }

void MyString::delete_all(char c)
 {
	 int count=0;
		for(int i=0;i<len;)
		{
			if(a[i]==c)
			{
				for(int j=i;j<len;j++)
				{
					a[j]=a[j+1];
				}
				len--;
			}
			else
				i++;
		}
 }
