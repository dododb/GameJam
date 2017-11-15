#include "stdafx.h"
#include "Model.h"

#include "View.h"
namespace Model
{
	Model::Model(View::View* view) : Model::Model()
	{
		//this->mobiles.push_back((Element::Mobile*) new Element::Cercle(this, 0));
		this->AddObserver(view->GetObserver());
	}

	Model::Model()
	{
		this->SetChange();
	}
}