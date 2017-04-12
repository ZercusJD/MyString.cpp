这是一个C++程序
一.题目描述
	定义一个字符串类MyString,拥有基本的字符串创建、销毁、插入、删除、打印字符串等操作
二.接口要求
	类名：MySting
	方法：五个public方法
		MySting(const char*s,int length);
		void insert(int position,char c);//在字符串第position位置插入字符c
		void delete_at(int position);//删除第position位置的字符
		void delete_all(char c);//删除字符串中所有的c字符
		void show();//打印字符串
三.注意事项
	1.字符串长度不会超过65535，若干次insert操作后也不会超过
	2.不考虑insert的position超出字符串长度范围
	3.不考虑delete_at的position超出字符串长度范围
	4.参数position从0开始
	