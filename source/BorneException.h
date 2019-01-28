/**
 * file: BorneException.h
 *	@brief 
 *  Created on: 2018-12-01
 *      Author: etudiant
 */

#ifndef BORNEEXCEPTION_H_
#define BORNEEXCEPTION_H_
#include <stdexcept>

//! création de la class BorneException
class BorneException : public std::runtime_error{

public:
	BorneException(const std::string& p_raison):runtime_error(p_raison){}
};

//! création de la class BorneDejaPresenteException
class BorneDejaPresenteException : public BorneException{

public:
	BorneDejaPresenteException(const std::string& p_raison):BorneException(p_raison){}
};

//! création de la class BorneAbsenteException
class BorneAbsenteException : public BorneException{

public:
	BorneAbsenteException(const std::string& p_raison):BorneException(p_raison){}
};

#endif /* BORNEEXCEPTION_H_ */
