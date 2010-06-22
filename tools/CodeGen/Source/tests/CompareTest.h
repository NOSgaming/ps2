#ifndef _COMPARETEST_H_
#define _COMPARETEST_H_

#include "Test.h"
#include "../MemoryFunction.h"

class CCompareTest : public CTest
{
public:
						CCompareTest();
	virtual				~CCompareTest();
			
	void				Run();
	void				Compile(Jitter::CJitter&);

private:
	struct CONTEXT
	{
		uint32			number1;
		uint32			number2;
	};

	CONTEXT				m_context;
	CMemoryFunction*	m_function;
};

#endif
