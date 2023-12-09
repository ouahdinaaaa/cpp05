/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresedentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:59:56 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 19:05:23 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresedentialPardonForm.hpp"

PresedentialPardonForm::PresedentialPardonForm() : AForm(), _name("ouahdina")
{

}

PresedentialPardonForm::PresedentialPardonForm(std::string &name) : AForm(name), _name(name) 
{

}

PresedentialPardonForm::~PresedentialPardonForm()
{
    
}

void    PresedentialPardonForm::Grade()
{
    std::cout << this->_name << " A ete gracie par Zaphod Beeblebrox !!!" << std::endl;
}

