#include "AReader.h"
#include "CReader.h"
#include "CPolicyFilter.h"
#include "CHTMLFilter.h"

//�ܵ����̣�����һ����������reader��Ȼ���þ����װ����htmlȥװ�����reader��Ȼ���þ������policyȥװ��html��������ֱ��
//ͨ��policyװ����ֱ�ӵ������շ���
int main()
{
	AReader *reader = new CPolicyFilter(new CHTMLFilter(new CReader()));

	reader->showContent();
}