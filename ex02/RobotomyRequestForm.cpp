/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:09:29 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 19:18:03 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : AForm(name), _name(name)
{
    // on a nb dnas struct   
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void    RobotomyRequestForm::Robotomy()
{
    if (this->nb >= 0.5)
        std::cout << "Bruiiiiit de forage \n" << this->_name << " A bien ete Robotise avec Succes !!! " << std::endl;
    else
        std::cout << this->_name << "La Robotisation de cible a echouee !!!! " << std::endl;
}