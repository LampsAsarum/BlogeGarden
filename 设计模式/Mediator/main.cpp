#include <iostream>
#include "Country.h"
#include "UnitedNations.h"
#include "UnitedNationsSecurityCouncil.h"

int main()
{
	UnitedNationsSecurityCouncil* pUNSC = new UnitedNationsSecurityCouncil();
	USA* pUSA = new USA(pUNSC);
	Japan* pJapan = new Japan(pUNSC);

	pUNSC->pusa = pUSA;
	pUNSC->pjapan = pJapan;

	pUSA->Declare("Hello Japan");

	pJapan->Declare("Hello USA!");

	return 0;
}