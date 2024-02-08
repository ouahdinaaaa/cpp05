/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:23:57 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 18:46:35 by ayael-ou         ###   ########.fr       */
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
    const int         _grade_exec; // note requise pour exec
    const int         _grade_sign;// note requise pour signer
    bool              status; // savoir si signer ou non pas a construction

    public :

    Form();
    virtual ~Form() = 0;
    Form(const Form &objs);
    Form(int exec, int sign);
    Form(const std::string &name);
    Form(const std::string &name, int execGrade, int signGrade);

    
    virtual std::string getName() const;
    bool                isSigned()const;
    int                 getSign() const;
    int                 getExec() const;
    Form                &operator=(const Form &objs);
    void                beSigned(const Bureaucrat &bureau); // change status du form en true si note du bureaucrate est suffisante
    void                execute(const Bureaucrat& execu)const;
    virtual void        Grade(const Bureaucrat &bureau) const = 0;

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