#pragma once
#include "GiaSuc.h"
class ConBo :
	public GiaSuc
{
private:
	const string tiengkeu = "CowCowCow";
public:
	ConBo();
	virtual ~ConBo();
	void print();
	void Say();
};

