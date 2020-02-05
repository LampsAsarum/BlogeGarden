#include <iostream>
#include "WebSite.h"
#include "WebSiteFactory.h"

int main()
{
	WebSiteFactory* f = new WebSiteFactory();

	WebSite* fx = f->GetWebSiteCategory("��Ʒչʾ");
	fx->Use();
	WebSite* fy = f->GetWebSiteCategory("��Ʒչʾ");
	fy->Use();

	WebSite* fa = f->GetWebSiteCategory("����");
	fa->Use();
	WebSite* fb = f->GetWebSiteCategory("����");
	fb->Use();

	return 0;
}