#include "CTemplateA.h"
#include "CTemplateB.h"
#include "ATemplate.h"

int main()
{
	ATemplate *temp = new CTemplateA();
	temp->algorithm();

	temp = new CTemplateB();
	temp->algorithm();

	return 0;
}