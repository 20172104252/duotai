// duotai.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inch;
public:
	CFeet()
	{
		cout << "���๹�캯��  Ӣ��  " << feet << "  Ӣ��   " << inch << endl;
	}
	void setfeet(int f);
	void setinch(int i);
	int getfeet();
	int getinch();
    virtual void display();
};
void CFeet::setfeet(int f)
{
	feet = f;
}
void CFeet::setinch(int i)
{
	inch = i;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinch()
{
	return inch;
}
void CFeet::display()
{
	cout << "���� Ӣ��   " << feet << "  Ӣ��   " << inch << endl;
}
class CMyfeet :public CFeet 
{
public:
	void display()
	{
		cout << "������ Ӣ��   " << feet << "Ӣ��    " << inch << endl;
	}
};
int main()
{
	CFeet *p;
	CMyfeet a;
	p = &a;
	a.setfeet(3);
	a.setinch(3);
	p->display();
    return 0;
}

