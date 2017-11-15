#pragma once
#include "Observer.h"
#include <list>

namespace DpObserver
{
	class Observable
	{
	private:
		bool isChange = false;
		std::list<DpObserver::Observer*> observers = std::list<DpObserver::Observer*>();

	protected:
		void SetChange();

	public:
		void AddObserver(DpObserver::Observer* observer);
		void DeleteObserver(DpObserver::Observer* observer);
		void NotifyObserver();
		~Observable();
	};
}