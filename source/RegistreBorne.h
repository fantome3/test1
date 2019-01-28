/*
 * RegistreBorne.h
 *
 *  Created on: 2018-11-09
 *      Author: etudiant
 */

#ifndef REGISTREBORNE_H_
#define REGISTREBORNE_H_

#include "ContratException.h"
#include "Borne.h"
#include <string>
#include <vector>

namespace bornesQuebec {
/**
 *@class RegistreBorne
 */
class RegistreBorne {

/**
 * @brief prototype de différentes fonctions
 */
public:
	RegistreBorne(const std::string& );

	virtual ~RegistreBorne();

	const std::string& reqNomRegistreBorne() const;
	std::string reqRegistreBorneFormate() const;

	void ajouteBorne(const Borne& p_borne);
	void supprimeBorne(int p_identifiant);
	bool verifiePresenceBorne(int p_identifiant) const;


/**
 * @brief déclaration des variables privées
 */
private:
	std::string m_nomRegistreBorne;
	bool BorneEstDejaPresente(const Borne& p_borne) const;
	void verifieInvariant() const;
	std::vector<Borne*> m_vBornes;
};

} /* namespace bornesQuebec */

#endif /* REGISTREBORNE_H_ */
