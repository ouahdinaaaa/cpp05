/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:54:31 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/12 15:16:25 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("ouahdina"), _grade(150)
{

} 

Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooLowException();
        if (grade > 150)
            throw Bureaucrat::GradeTooHightException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    this->_grade = grade;
}

std::string Bureaucrat::getName()const
{
    return this->_name;
}

int    Bureaucrat::getGrade()const
{
    return this->_grade;
}

void    Bureaucrat::incrementGrade()
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHightException();
    else
        this->_grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}


void    Bureaucrat::signForm(Form *a)
{
    if (a->getSign() == true)
    {
        std::cout << GREEN << this->_name << " a signe : " << a->getName() << RESET << std::endl;
        a->PutSigned(true);
    }
    else 
        std::cout << RED << this->_name << " n'as pas pu signe " << a->getName() << " car note pas suffisante " << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& objs)
{
	o << objs.getName() << ", bureaucrat grade " << objs.getGrade();
	return o;
}

const char * Bureaucrat::GradeTooHightException::what() const throw()
{
    return ("\033[31m Grade is too high for a Bureaucrat !!! \033[1;97m ");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("\033[31m Grade is too low for a Bureaucrat !!! \033[1;97m ");
}
