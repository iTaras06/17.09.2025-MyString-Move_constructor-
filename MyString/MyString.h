#pragma once
class MyString
{
	char* str;
	int length;
public:
	MyString();
	MyString(int size);
	MyString(const char* st);
	~MyString();
	MyString(const MyString& obj);

	MyString(MyString&& obj5);
	void Test(MyString a);

	bool MyStrStr(const char* str);
	void Input();
	void Print();
	void MyStrcpy(MyString& obj);
	int MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);
};