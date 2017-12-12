#pragma once
//²Î¿¼²©¿Í
//http://blog.csdn.net/m0_37170593/article/details/76445972

//add dll lib for the function
//__declspec(dllexport) int InitAcceTest();
//__declspec(dllexport) int SendComToDUT();
//__declspec(dllexport) int ReceiveCmdFromDUT();


//add dll lib for the class
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