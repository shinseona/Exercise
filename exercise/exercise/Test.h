#ifndef TEST_H
#define TEST_H
#include "Object.h"

class Test:public RenderObject
{
public:
	virtual void shutDown() override;
};

#endif // !TEST_H
