#include "stdafx.h"
#include "View.h"
#include <string>
#include <iostream>

#include "Model.h"
using namespace std;
namespace View
{
	View::View(Model::Model* model)
	{
		this->model = model;
	}

	void View::Update()
	{
	}
}