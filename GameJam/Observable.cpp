#include "stdafx.h"
#include "Observable.h"

namespace DpObserver
{
	void Observable::AddObserver(DpObserver::Observer* observer)
	{
		this->observers.push_back(observer);
		observer->AddObservable(this);
	}

	void Observable::DeleteObserver(DpObserver::Observer* observer)
	{
		this->observers.remove(observer);
	}

	void Observable::SetChange()
	{
		this->isChange = true;
	}

	void Observable::NotifyObserver()
	{
		if (this->isChange)
		{
			for (DpObserver::Observer* observer : this->observers)
			{
				observer->Update();
			}
			this->isChange = false;
		}
	}

	Observable::~Observable()
	{
		for (DpObserver::Observer* observer : this->observers)
		{
			observer->DeleteObservable(this);
		}
	}
}