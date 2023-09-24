#pragma once
/*
	注意：声名变量时，需要
*/
extern int sum; // 这里声名了一个全局变量，对应b.cpp下的sum定义
extern int sum2; // 这里声名了一个全局变量，对应b.cpp下的sum2定义


void fun();

//int a = 222; //不要在头文件中定义全局变量，容易多重定义错误