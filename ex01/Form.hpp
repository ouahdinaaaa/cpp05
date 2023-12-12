/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:23:57 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/12 15:16:09 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
# include "Bureaucrat.hpp"

class   Form
{
    private : 

    const std::string _name;
    const int   _grade_exec; // note requise pour exec
    const int   _grade_sign;// note requise pour signer
    bool    status; // savoir si signer ou non pas a construction

    public :

    Form(const std::string &name, int execGrade, int signGrade);
    Form();
    ~Form();
    Form(const std::string &name);
    Form(int exec, int sign);
    std::string getName() const;
    bool isSigned()const;
    int getSign() const;
    int getExec() const;
    void    PutSigned(bool res);
    void    beSigned(const Bureaucrat &bureau); // change status du form en true si note du bureaucrate est suffisante
};

std::ostream &operator<<(std::ostream &o, const Form &objs);


#endif