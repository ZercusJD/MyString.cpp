#include <iostream>
using namespace std;

class MyString
{
private:  
	char *a; 
	int len;
public:
	MyString(const char*s,int length);
	void insert(int position,char c);
	void delete_at(int position);
	void delete_all(char c);
	void show();
};