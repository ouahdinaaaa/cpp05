/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:53:30 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 14:49:02 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
# define BLACK "\033[30m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define SAPIN "\033[38;2;0;96;50m"
# define RED "\033[31m"
# define EMERAUDE "\033[38;2;0;196;140m"
# define GRIS "\033[255;113;30m"
# define ROSE "\033[38;2;169;30;80m"
# define ORANGE "\033[38;5;166m"
# define RESET "\033[1;97m"


class Form;

class Bureaucrat
{
    private:
    
    std::string const _name;
    int _grade;

    public :
    
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &objs);
    Bureaucrat(const std::string &name);
    Bureaucrat(const std::string &name, int grade);
    
    int         getGrade()const;
    void        incrementGrade();
    void        decrementGrade();
    std::string getName()const;
    void        signForm(Form &a);// si form signee imprim msg sinon imprim msg
    void        executeForm(Form &a);
    Bureaucrat  &operator=(const Bureaucrat &objs);

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