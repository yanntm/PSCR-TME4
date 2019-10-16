#pragma once
#include <thread>
#include <mutex>

namespace pr {

class Compte {
	mutable mutex m;
	int solde;
public :
	Compte(int solde=0):solde(solde) {}
	void crediter (unsigned int val) {
		unique_lock<mutex> g(m);
		solde+=val ;
	}
	bool debiter (unsigned int val) {
		unique_lock<mutex> g(m);
		bool doit = solde >= val;
		if (doit) {
			solde-=val ;
		}
		return doit;
	}
	int getSolde() const  {
		unique_lock<mutex> g(m);
		return solde;
	}
	// NB : vector exige Copyable, mais mutex ne l'est pas...
	Compte(const Compte & other) {
		other.m.lock();
		solde = other.solde;
		other.m.unlock();
	}
};

}
