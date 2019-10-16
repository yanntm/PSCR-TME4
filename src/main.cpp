#include "Banque.h"


const int NB_THREAD = 10;
int main () {
	vector<thread> threads;
	// TODO : creer des threads qui font jackpot sur un compte
	for (auto & t : threads) {
		t.join();
	}
	// TODO : tester solde = NB_THREAD * JP
	return 0;
}
