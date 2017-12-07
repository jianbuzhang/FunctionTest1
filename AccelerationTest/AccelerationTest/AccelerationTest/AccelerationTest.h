#pragma once
//²Î¿¼²©¿Í
//http://blog.csdn.net/m0_37170593/article/details/76445972

//__declspec(dllexport) int InitAcceTest();
//__declspec(dllexport) int SendComToDUT();
//__declspec(dllexport) int ReceiveCmdFromDUT();

class  _declspec(dllexport) AccelerationTest
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

/*
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
*/