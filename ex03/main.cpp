/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:55:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/11 20:26:33 by ayael-ou         ###   ########.fr       */
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
    Form* rrf2;
    Form* fairy2;
    Form* fairy;
    Form* Pres;
    Form* Pres2;

    std::cout << "\n\n*--------------------------------DEBUT DE PROGRAMME -------------------------------*\n\n" << std::endl;
    rrf = RandomIntern.makeForm("robotomy request", "Bender");
    rrf2 = RandomIntern.makeForm("robotomy request2", "Bender2");
    jonh.signForm(*rrf);
    jonh.executeForm(*rrf);
    std::cout << "\n*------------------------------------NEXT PART-------------------------------------*\n" << std::endl;

    
    fairy = RandomIntern.makeForm("shruberry request", "Fairy");
    fairy2 = RandomIntern.makeForm("shruberry", "Fariry22");
    jim.signForm(*fairy);
    // if (fairy2 == NULL)
        // std::cout << "That NULL" << std::endl;
    // jim.signForm(*fairy2);
    // jim.executeForm(*fairy2);
    jim.executeForm(*fairy);
    
    std::cout << "\n*-------------------------------------NEXT PART------------------------------------*\n\n" << std::endl;
    Pres = RandomIntern.makeForm("presidential request", "Wilson");
    Pres2 = RandomIntern.makeForm("Prez", "Prez");
    Lam.signForm(*Pres);
    Lam.executeForm(*Pres);

    std::cout << "\n\n---------------------------------------FINISH---------------------------------------\n\n" << std::endl;
   
}

/*
        AVANT DE PUSH TROUVER MOYEN POUR VERIFIER SI FORM EST NULL ET DONC RETURN;
    


*/
