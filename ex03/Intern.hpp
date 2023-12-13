/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:24:15 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/10 23:24:15 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresedentialPardonForm.hpp"

class Intern
{
    private :

    public:
    Intern();
    ~Intern();

    Form*   makeForm(const std::string &bureau, const std::string &name);

    class InvalidForm : public std::exception
    {
        public : 
        virtual const char * what() const throw();
    };

};

#endif