/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:53:30 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/05 19:48:12 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
    
    std::string const _name;
    int _grade;

    public :
    
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
    
    int         getGrade()const;
    void        incrementGrade();
    void        decrementGrade();
    std::string getName()const;
 
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