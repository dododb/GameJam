#include "stdafx.h"
#include "Observer.h"
#include "Observable.h"
namespace DpObserver
{
	void Observer::AddObservable(DpObserver::Observable* observable)
	{
		this->observables.push_back(observable);
	}

	void Observer::DeleteObservable(DpObserver::Observable* observable)
	{
		this->observables.remove(observable);
	}

	Observer::~Observer()
	{
		for (DpObserver::Observable* observable : this->observables)
		{
			observable->DeleteObserver(this);
		}
	}

	Observer* Observer::GetObserver()
	{
		return this;
	}
}