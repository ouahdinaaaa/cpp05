/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:55:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/12 14:48:46 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
    srand(time(NULL));
    Bureaucrat jonh("👱 jonh", 5);
    Bureaucrat jim("👱 jim", 3);
    Bureaucrat Lam("👱 Lam", 5);

    Intern RandomIntern;

    Form* rrf;
    Form* fairy;
    Form* Pres;
    Form* Robot;

    std::cout << "\n\n*--------------------------------DEBUT DE PROGRAMME -------------------------------*\n\n" << std::endl;
    Robot = RandomIntern.makeForm("robotomy request", "Bender");
    jonh.signForm(*Robot);
    jonh.executeForm(*Robot);
    jim.signForm(*Robot);
    jonh.executeForm(*Robot);
    Lam.executeForm(*Robot);
    std::cout << "\n*------------------------------------NEXT PART-------------------------------------*\n" << std::endl;

    fairy = RandomIntern.makeForm("shruberry request", "Fairy");
    Lam.executeForm(*fairy);
    jonh.signForm(*fairy);
    jonh.executeForm(*fairy);
    jim.signForm(*fairy);
    jim.executeForm(*fairy);
    
    std::cout << "\n*-------------------------------------NEXT PART------------------------------------*\n\n" << std::endl;
    Pres = RandomIntern.makeForm("presidential request", "Wilson");
    Lam.signForm(*Pres);
    Lam.executeForm(*Pres);
    jonh.executeForm(*Pres);
    jim.signForm(*Pres);
    jonh.executeForm(*Pres);

    std::cout << "*-------------------------------------- FINAL PART -------------------------------------*" << std::endl;
    rrf = RandomIntern.makeForm("Dont match", "Error");
    std::cout << "\n\n-----------------------------------------FINISH-----------------------------------------\n\n" << std::endl;
   
}

/*
        AVANT DE PUSH TROUVER MOYEN POUR VERIFIER SI FORM EST NULL ET DONC RETURN;
    


*/
