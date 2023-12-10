/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:23:57 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 23:29:45 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
# include "Bureaucrat.hpp"

class   Form
{
    protected : 

    const std::string _name;
    const int   _grade_exec; // note requise pour exec
    const int   _grade_sign;// note requise pour signer
    bool    status; // savoir si signer ou non pas a construction

    public :

    Form(const std::string &name, int execGrade, int signGrade);
    Form();
    Form(const std::string &name);
    Form(int exec, int sign);
    virtual ~Form() = 0;
    virtual std::string getName() const = 0;
    virtual bool isSigned()const = 0;
    virtual int getSign() const = 0;
    virtual int getExec() const = 0;
    virtual void    beSigned(const Bureaucrat &bureau) = 0; // change status du form en true si note du bureaucrate est suffisante
    void            execute(const Bureaucrat& execu)const;

class GradeTooLowException : public std::exception
{
    virtual const char *what() const throw();
}; 

class GradeTooHightException : public std::exception
{
    virtual const char* what() const throw();
};

class FormNotSignedException : public std::exception
{
    virtual const char* what() const throw();
};

};

std::ostream &operator<<(std::ostream &o, const Form &objs);


#endif