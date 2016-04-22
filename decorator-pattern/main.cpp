#include "AReader.h"
#include "CReader.h"
#include "CPolicyFilter.h"
#include "CHTMLFilter.h"

//总的流程：生成一个具体的组件reader，然后用具体的装饰者html去装饰组件reader，然后用具体组件policy去装饰html，最后可以直接
//通过policy装饰者直接调用最终方法
int main()
{
	AReader *reader = new CPolicyFilter(new CHTMLFilter(new CReader()));

	reader->showContent();
}