/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:23:00 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/12 18:44:03 by ayael-ou         ###   ########.fr       */
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
        
        fd << BLUE << "                  .o00o                              .o00o                                             " << std::endl; 
        fd << BLUE << "               o000000oo                          o000000oo             \033[34m        ..........            " << std::endl; 
        fd << BLUE << "              00000000000o                       00000000000o            \033[34m      /          \\....    " << std::endl;     
        fd << BLUE << "             00000000000000                     00000000000000           \033[34m .-----               \\     " << std::endl; 
        fd << BLUE << "       🧚  oooooo  00000000  o88o          🧚  oooooo  00000000  o88888o    \033[34m/                      |       " << std::endl; 
        fd << MAGENTA << "       ooOOOOOOOoo  ``🧚''  888888         ooOOOOOOOoo  ``🧚''  8888888  \033[34m \\....            ...../        " << std::endl; 
        fd << MAGENTA <<    "     OOOOOOOOOOOO'.qQQQQq. `888888'     OOOOOOOOOOOO'.qQQQQq. `888888'     \033[34m  \\.........../             " << std::endl; 
        fd << MAGENTA <<    "    oOOOOOOOOOO'.QQQQQQQQQQ/.8888'     oOOOOOOOOOO'.QQQQQQQQQQ/.8888'                                  " << std::endl; 
        fd << MAGENTA <<    "    OOOOOOOOOO'.QQQQQQQQQQ/ /q         OOOOOOOOOO'.QQQQQQQQQQ/ /q                                      " << std::endl; 
        fd << MAGENTA <<    "     \\OOOOOOOOO QQQQQQQQQQ/ /QQ/       \\OOOOOOOOO QQQQQQQQQQ/ /QQ/                                   " << std::endl; 
        fd << MAGENTA <<    "       \\OOOOOOOOO `QQQQQQ/ /QQ/          \\OOOOOOOOO `QQQQQQ/ /QQ/                                    " << std::endl; 
        fd << ROSE <<    "         \\OO:F_P:O `QQQ/  /Q'/🧚            \\OO:F_P:O `QQQ/  /Q'/🧚                                  " << std::endl; 
        fd << ROSE <<    "          \\....|  // |...//                  \\....|  // |...//                                       " << std::endl; 
        fd << ROSE <<    "               |\'  ' |                           |\'  ' |                                             " << std::endl; 
        fd << ROSE <<    "               | \\ _ |                           | \\ _ |                                             " << std::endl; 
        fd << ROSE <<    "               |'  / |                           |'  / |                                               " << std::endl; 
        fd << ROSE <<    "               |  | O|                           |  | O|                                               " << std::endl; 
        fd << BLUE <<    "              /\'. \'/'\\                          /\'. \'/'\\                                         " << std::endl; 
        fd << GREEN <<   "      `---__/|_\\   //|\\ _ _              `---__/|_\\   //|\\ _ _                                     " << std::endl; 
        fd << GREEN <<   "              `-'  `-'`-'-'                       `-'  `-'`-'-'                                        " << std::endl; 
        fd.close();
    }
    else
        std::cout << "Erreur dans ouverture de fichier" << std::endl;
}


