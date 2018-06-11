// duotai.cpp : 定义控制台应用程序的入口点。
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
		cout << "基类构造函数  英尺  " << feet << "  英寸   " << inch << endl;
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
	cout << "基类 英尺   " << feet << "  英寸   " << inch << endl;
}
class CMyfeet :public CFeet 
{
public:
	void display()
	{
		cout << "派生类 英尺   " << feet << "英寸    " << inch << endl;
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

