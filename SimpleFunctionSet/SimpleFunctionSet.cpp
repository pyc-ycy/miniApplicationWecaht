// SimpleFunctionSet.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

void weiYunSun()
{
	unsigned result;
	int a = 2, b = 4, c = 6, d = 8;
	cout << "============================" << endl;
	cout << "a=" << a << ",b=" << b << ",c=" << c << ",d=" << d << endl;
	cout << "==============================" << endl << "      位运算结果" << endl;
	result = a & c;
	cout << "a&c=" << result << endl;
	result = b | d;
	cout << "b|d=" << result << endl;
	result = a ^ d;
	cout << "a^d=" << result << endl;
	result = ~a;
	cout << "~a=" << result << endl;
}

int main()
{
	weiYunSun();
    std::cout << "Hello World!\n";
}
