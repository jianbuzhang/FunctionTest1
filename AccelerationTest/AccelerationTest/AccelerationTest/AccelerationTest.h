#pragma once

//http://blog.csdn.net/m0_37170593/article/details/76445972

__declspec(dllexport) int AccelerationTest::InitAcceTest();
__declspec(dllexport) int SendComToDUT();
__declspec(dllexport) int ReceiveCmdFromDUT();

class AccelerationTest
{
public:
	AccelerationTest();
	~AccelerationTest();
	int InitAcceTest();
	int SendComToDUT();
	int ReceiveCmdFromDUT();
private:

};

AccelerationTest::AccelerationTest()
{
}

AccelerationTest::~AccelerationTest()
{
}

