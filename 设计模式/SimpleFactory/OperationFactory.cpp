#include "OperationFactory.h"
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"

Operation* OperationFactory::createOperation(OPERATION opera)
{
	Operation *oper = nullptr;
	switch (opera)
	{
	case add:
		oper = new OperationAdd();
		break;
	case sub:
		oper = new OperationSub();
		break;
	default:
		break;
	}
	return oper;
}