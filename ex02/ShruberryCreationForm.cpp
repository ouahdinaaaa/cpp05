/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:23:00 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/11 20:22:49 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"
#include <fstream>

ShruberryCreationForm::ShruberryCreationForm() : AForm("home", 145, 137), _name("ouahdina")
{
        
}

ShruberryCreationForm::ShruberryCreationForm(const std::string &name) : AForm(name, 145, 137), _name(name)
{
    
}

ShruberryCreationForm::~ShruberryCreationForm()
{

}


void    ShruberryCreationForm::Grade(const Bureaucrat &bureau) const
{
    this->Form::execute(bureau);
    std::ofstream    fd(this->_name.c_str());
    if (fd.is_open()){
        
        fd << MAGENTA << "                  .o00o                 " << std::endl; 
        fd << MAGENTA << "               o000000oo                " << std::endl; 
        fd << MAGENTA << "              00000000000o              " << std::endl;     
        fd << MAGENTA << "             00000000000000             " << std::endl; 
        fd << MAGENTA << "       🧚‍♀️  oooooo  00000000  o88o        " << std::endl; 
        fd << MAGENTA << "       ooOOOOOOOoo  ``🧚‍♀️''  888888       " << std::endl; 
        fd << ROSE <<    "     OOOOOOOOOOOO'.qQQQQq. `8888'          " << std::endl; 
        fd << ROSE <<    "    oOOOOOOOOOO'.QQQQQQQQQQ/.88'           " << std::endl; 
        fd << ROSE <<    "    OOOOOOOOOO'.QQQQQQQQQQ/ /q             " << std::endl; 
        fd << ROSE <<    "     OOOOOOOOO QQQQQQQQQQ/ /QQ             " << std::endl; 
        fd << ROSE <<    "       OOOOOOOOO `QQQQQQ/ /QQ'             " << std::endl; 
        fd << ROSE <<    "         OO:F_P:O `QQQ/  /Q'🧚‍♀️               " << std::endl; 
        fd << BLUE <<    "            \\. \' |  // |                 " << std::endl; 
        fd << BLUE <<    "            d\' \\\'|_////                 " << std::endl; 
        fd << BLUE <<    "            qP| \\ _' `|Ob                 " << std::endl; 
        fd << BLUE <<    "               \'  / \'  \'Op              " << std::endl; 
        fd << BLUE <<    "               |  | O| |                   " << std::endl; 
        fd << BLUE <<    "       _       /\'. \'_/ /\'               " << std::endl; 
        fd << GREEN <<   "        `---__/|_\\   //|  __             " << std::endl; 
        fd << GREEN <<   "              `-'  `-'`-'-'               " << std::endl; 
        fd.close();
    }
    else
        std::cout << "Erreur dans ouverture de fichier" << std::endl;
}

