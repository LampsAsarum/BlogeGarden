#include <iostream>
#include "WebSite.h"
#include "WebSiteFactory.h"

int main()
{
	WebSiteFactory* f = new WebSiteFactory();

	WebSite* fx = f->GetWebSiteCategory("产品展示");
	fx->Use();
	WebSite* fy = f->GetWebSiteCategory("产品展示");
	fy->Use();

	WebSite* fa = f->GetWebSiteCategory("博客");
	fa->Use();
	WebSite* fb = f->GetWebSiteCategory("博客");
	fb->Use();

	return 0;
}