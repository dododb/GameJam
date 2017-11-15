#pragma once
#include "stdafx.h"
#include "View.h"
#include "Model.h"

namespace Controller
{
	class Controller
	{
	private:
		View::View* view;
		Model::Model* model; 

	public:
		Controller(View::View* view, Model::Model* model);
		Controller(Model::Model* model, View::View* view);
		Model::Model* getModel();
		View::View* getView();
	};
}
