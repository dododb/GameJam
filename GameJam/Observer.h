#pragma once
#include <list>

namespace DpObserver
{
	class Observable;
	class Observer
	{
		friend class DpObserver::Observable;
	private:
		std::list<DpObserver::Observable*> observables = std::list<DpObserver::Observable*>();

		void AddObservable(DpObserver::Observable*);
		void DeleteObservable(DpObserver::Observable*);

	public:
		virtual void Update() = 0;
		Observer* GetObserver();
		~Observer();
	};
}