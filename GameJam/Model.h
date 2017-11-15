#pragma once
#include "Observable.h"

using namespace DpObserver;
namespace View
{
	class View;
}
namespace Model
{
	class Model : public Observable
	{
	private:

	public:
		Model(View::View* view);
		Model();
	};
}
