// AccelerationTest.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "AccelerationTest.h"
#include <iostream>

using namespace std;

int AccelerationTest::InitAcceTest()
{
	cout<<"初始化传感器测试"<<endl;
	return 0;
}

int AccelerationTest::SendComToDUT()
{
	cout<<"传感器测试：发送指令到DUT"<<endl;
	return 0;
}

int AccelerationTest::ReceiveCmdFromDUT()
{
	cout<<"传感器测试：接收来自DUT的指令"<<endl;
	return 0;
}




