#include "zesap.h"
#include "serv.h"
#include <iostream>
#include <stdlib.h>


using namespace std;
using namespace zex;

int main()
{
	pl("zesap/");
	pl(ZEX_VER);
	p(" started");


	int zs = zex_serv();
	if (zs > 0)
	{
		p("zesap: err");
		return 1;
	}
	else if (zs == ZEX_RET_FRMCLIENT)	/* client proccess end */
	{
		exit(0);
		return 0;
	}
	else
	{
		p("zesap end");
	}

	return 0;
}
