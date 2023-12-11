/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:50:22 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/11 13:47:23 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("ouahdina"), _grade_exec(1), _grade_sign(1), status(false)
{
    
}

Form::Form(const std::string &name) : _name(name), _grade_exec(1), _grade_sign(1), status(false)
{
    
}

Form::Form(const std::string &name, int execGrade, int signGrade) : _name(name), _grade_exec(execGrade), _grade_sign(signGrade), status(false)
{
             
}

Form::Form(int exec, int sign) : _name("ouahdina"), _grade_exec(exec), _grade_sign(sign), status(false)
{
    
}

Form::~Form()
{
    
}

std::string Form::getName() const
{
    return this->_name;
}

int Form::getSign() const
{
    return this->_grade_sign;
}

int Form::getExec() const
{
    return this->_grade_exec;
}

bool    Form::isSigned() const 
{
    return this->status;
}

void    Form::beSigned(const Bureaucrat &bureau)
{
    if (!this->status)
    { 
        if (bureau.getGrade() <= this->_grade_sign)
            this->status = true;
        else
            throw Form::GradeTooLowException();
    }
}

const char* Form::FormNotSignedException::what() const throw()
{
    return ("Form is not signed");
}

const char * Form::GradeTooHightException::what() const throw()
{
    return ("Grade is too high for a Form !!!");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low for a Form !!!");
}



void    Form::execute(const Bureaucrat& execu) const
{
    if (!this->isSigned())
        throw Form::FormNotSignedException();
    if(execu.getGrade() > this->getExec())
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const Form &objs)
{
    o << "\n{name :" << objs.getName() 
    << " || Grade exec : " << objs.getExec() 
    << " || Grade sign : " << objs.getSign() 
    << " || status : " << objs.isSigned() << "}\n";
    return (o);
}