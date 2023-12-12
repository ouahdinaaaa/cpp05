/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:23:00 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/12 14:09:45 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"
#include <fstream>

ShruberryCreationForm::ShruberryCreationForm() : Form("home", 145, 137), _name("ouahdina")
{
        
}

ShruberryCreationForm::ShruberryCreationForm(const std::string &name) : Form(name, 145, 137), _name(name)
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
        
        fd << BLUE << "                  .o00o                 " << std::endl; 
        fd << BLUE << "               o000000oo                " << std::endl; 
        fd << BLUE << "              00000000000o              " << std::endl;     
        fd << BLUE << "          🧚 00000000000000             " << std::endl; 
        fd << BLUE << "          oooooo  00000000  o88o        " << std::endl; 
        fd << BLUE << "       ooOOOOOOOoo  ```''  888888       " << std::endl; 
        fd << ROSE << "     OOOOOOOOOOOO'.qQQQQq. `8888'       " << std::endl; 
        fd << ROSE << "    oOOOOOOOOOO'.QQQQQQQQQQ/.88'🧚        " << std::endl; 
        fd << ROSE << "    OOOOOOOOOO'🧚.QQQQQQQQQQ/ /q          " << std::endl; 
        fd << ROSE << "     OOOOOOOOO QQQQQQQQQQ/ /QQ          " << std::endl; 
        fd << ROSE << "       OOOOOOOOO `QQQQQQ/ /QQ'          " << std::endl; 
        fd << ROSE << "         OO:F_P:O `QQQ/  /Q' /           " << std::endl; 
        fd <<  MAGENTA << "          \'     |  // | /            " << std::endl; 
        fd <<  MAGENTA << "            \'   |_////|/              " << std::endl; 
        fd <<  MAGENTA << "              \' |\\ _' |              " << std::endl; 
        fd <<  MAGENTA << "                | / \' |              " << std::endl; 
        fd <<  MAGENTA << "                |  |O |                " << std::endl; 
        fd <<  MAGENTA << "                |. \'_ |            " << std::endl; 
        fd << GREEN << "                |_\\   |  _           " << std::endl; 
        fd << GREEN << "             `-'  `-'`-'-'             " << std::endl; 
        fd.close();
    }
    else
        std::cout << "Erreur dans ouverture de fichier" << std::endl;
}

