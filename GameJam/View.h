#pragma once
#include "Observer.h"


using namespace DpObserver;
namespace Model
{
	class Model;
}
namespace View
{
	class View : public Observer
	{
	private:
		Model::Model* model;

	public:
		View(Model::Model* model);

		//Observer* GetObserver();
		void Update() override;
	};
}