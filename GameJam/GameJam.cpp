// GameJam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Controller.h"
#include "View.h"
#include "Model.h"

int main()
{
	Model::Model* m = new Model::Model();
	View::View* v = new View::View(m);
	new Controller::Controller(v, m);
    return 0;
}

