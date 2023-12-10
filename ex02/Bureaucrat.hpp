/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:53:30 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/10 22:51:02 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>


class Form;
class AForm;

class Bureaucrat
{
    private:
    
    std::string const _name;
    int _grade;

    public :
    
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const std::string &name);
    Bureaucrat(const std::string &name, int grade);
    
    int         getGrade()const;
    void        incrementGrade();
    void        decrementGrade();
    std::string getName()const;
    void        signForm(AForm &a);// si form signee imprim msg sinon imprim msg
    void        executeForm(AForm &a);

class GradeTooLowException : public std::exception
{
    virtual const char *what() const throw();
}; 

class GradeTooHightException : public std::exception
{
    virtual const char* what() const throw();
};

};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &objs);

#endif