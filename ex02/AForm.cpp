/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:47:40 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 11:51:36 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Form.hpp"


AForm::AForm() : Form()
{
}

#include "AForm.hpp"

AForm::AForm(const std::string &name, int sign, int exec) : Form(name, sign, exec)
{
        (void)name;
        (void)sign;
        (void)exec;
}

AForm::~AForm()
{
    
}

AForm::AForm(const AForm &objs) : Form(objs)
{
        *this = objs;
}

AForm &AForm::operator=(const AForm &objs)
{
        this->_name = objs._name;
        return (*this);
}

AForm::AForm(const std::string &name) : Form(name), _name(name) 
{

}

// AForm


            /* CLASS A CREER

*ShruberryCreationForm : Grade requis : signature 145 / exec : 137
        - Creation fichier dans repertoire de travail puis dessiner AScii Art un arbres
        

*RobotomyRequestForm : Grade requis : sign : 72 / exec 45
        - Print et affiche brruits de forage.
        - Informe que cible a ete robotisee avec succes de 50% sinon echoue
        
        
*PresedentialPardonForm : Grade requis : sign 25 / exec 5
        - Affiche que cible a ete gracie par Zaphod Beeblebrox


Tout les classe prenne un seul parametre la cible du formuaire




*/

