#pragma once

#include "Compte.h"
#include <iostream>

namespace pr {

class Banque {
	typedef vector<Compte> comptes_t;
	comptes_t comptes;
public :
	Banque (size_t ncomptes, size_t solde) : comptes (ncomptes, Compte(solde)){
	}
	void transfert(size_t deb, size_t cred, unsigned int val) {
		Compte & debiteur = comptes[deb];
		Compte & crediteur = comptes[cred];
		if (debiteur.debiter(val)) {
			crediteur.crediter(val);
		}
	}
	size_t size() const {
		return comptes.size();
	}
	bool comptabiliser (int attendu) const {
		int bilan = 0;
		int id = 0;
		for (const auto & compte : comptes) {
			if (compte.getSolde() < 0) {
				cout << "Compte " << id << " en négatif : " << compte.getSolde() << endl;
			}
			bilan += compte.getSolde();
			id++;
		}
		if (bilan != attendu) {
			cout << "Bilan comptable faux : attendu " << attendu << " obtenu : " << bilan << endl;
		}
		return bilan == attendu;
	}
};

}
