/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:23:00 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 23:33:56 by ayael-ou         ###   ########.fr       */
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


void    ShruberryCreationForm::CreationForm(const Bureaucrat &bureau) const
{
    this->Form::execute(bureau);
    std::ofstream    fd(this->_name.c_str());

    if (fd.is_open()){
        
        fd << "                  .o00o                 " << std::endl; 
        fd << "               o000000oo                " << std::endl; 
        fd << "              00000000000o              " << std::endl;     
        fd << "             00000000000000             " << std::endl; 
        fd << "          oooooo  00000000  o88o        " << std::endl; 
        fd << "       ooOOOOOOOoo  ```''  888888       " << std::endl; 
        fd << "     OOOOOOOOOOOO'.qQQQQq. `8888'       " << std::endl; 
        fd << "    oOOOOOOOOOO'.QQQQQQQQQQ/.88'        " << std::endl; 
        fd << "    OOOOOOOOOO'.QQQQQQQQQQ/ /q          " << std::endl; 
        fd << "     OOOOOOOOO QQQQQQQQQQ/ /QQ          " << std::endl; 
        fd << "       OOOOOOOOO `QQQQQQ/ /QQ'          " << std::endl; 
        fd << "         OO:F_P:O `QQQ/  /Q'            " << std::endl; 
        fd << "            \\. \' |  // |              " << std::endl; 
        fd << "            d\' \\\'|_////              " << std::endl; 
        fd << "            qP| \\ _' `|Ob              " << std::endl; 
        fd << "               \'  / \'  \'Op           " << std::endl; 
        fd << "               |  | O| |                " << std::endl; 
        fd << "       _       /\'. \'_/ /\'            " << std::endl; 
        fd << "        `---__/|_\\   //|  __           " << std::endl; 
        fd << "              `-'  `-'`-'-'             " << std::endl; 
        fd.close();
    }
    else
        std::cout << "Erreur dans ouverture de fichier" << std::endl;
}

