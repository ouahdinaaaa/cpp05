/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:23:57 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 18:51:47 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
# include "Bureaucrat.hpp"

#ifndef PRINT
# define PRINT false
#endif

class   AForm
{
    protected : 

    const std::string _name;
    const int   _grade_exec; // note requise pour exec
    const int   _grade_sign;// note requise pour signer
    bool    status; // savoir si signer ou non pas a construction

    public :

    AForm(const std::string &name, int execGrade, int signGrade);
    AForm();
    AForm(const std::string &name);
    AForm(int exec, int sign);
    AForm(const AForm &objs);

    
    virtual ~AForm() = 0;
    virtual std::string getName() const;
    bool isSigned()const;
    int getSign() const;
    int getExec() const;
    AForm       &operator=(const AForm &objs);
    void        beSigned(const Bureaucrat &bureau); // change status du AForm en true si note du bureaucrate est suffisante
    void         execute(const Bureaucrat& executor)const;
    virtual void Grade(const Bureaucrat &bureau) const = 0;

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
