#include "stdafx.h"
#include "Controller.h"
#include "View.h"
#include "Model.h"

namespace Controller
{
	//void OnLeftClick(SDL_Event e, Model::Model* model);
	Controller::Controller(View::View* view, Model::Model* model)
	{
		this->model = model;
		this->view = view;
		this->model->AddObserver(view);
	}

	Controller::Controller(Model::Model* model, View::View* view) : Controller::Controller(view, model) {}

	Model::Model* Controller::getModel()
	{
		return this->model;
	}

	View::View* Controller::getView()
	{
		return this->view;
	}
}