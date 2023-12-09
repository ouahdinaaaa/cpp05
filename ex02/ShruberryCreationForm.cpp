/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:23:00 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 19:37:39 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm() : AForm(), _name("ouahdina")
{
        
}

ShruberryCreationForm::ShruberryCreationForm(const std::string &name) : AForm(name), _name(name)
{
    
}

ShruberryCreationForm::~ShruberryCreationForm()
{

}


void    ShruberryCreationForm::CreationForm()
{
    /* 
    std::fd << "                  .o00o                 " << std::endl; 
    std::fd << "               o000000oo                " << std::endl; 
    std::fd << "              00000000000o              " << std::endl;     
    std::fd << "             00000000000000             " << std::endl; 
    std::fd << "          oooooo  00000000  o88o        " << std::endl; 
    std::fd << "       ooOOOOOOOoo  ```''  888888       " << std::endl; 
    std::fd << "     OOOOOOOOOOOO'.qQQQQq. `8888'       " << std::endl; 
    std::fd << "    oOOOOOOOOOO'.QQQQQQQQQQ/.88'        " << std::endl; 
    std::fd << "    OOOOOOOOOO'.QQQQQQQQQQ/ /q          " << std::endl; 
    std::fd << "     OOOOOOOOO QQQQQQQQQQ/ /QQ          " << std::endl; 
    std::fd << "       OOOOOOOOO `QQQQQQ/ /QQ'          " << std::endl; 
    std::fd << "         OO:F_P:O `QQQ/  /Q'            " << std::endl; 
    std::fd << "            \\. \ |  // |               " << std::endl; 
    std::fd << "            d\ \\\|_////                " << std::endl; 
    std::fd << "            qP| \\ _' `|Ob              " << std::endl; 
    std::fd << "               \  / \  \Op              " << std::endl; 
    std::fd << "               |  | O| |                " << std::endl; 
    std::fd << "       _       /\. \_/ /\               " << std::endl; 
    std::fd << "        `---__/|_\\   //|  __           " << std::endl; 
    std::fd << "              `-'  `-'`-'-'             " << std::endl; 
    */
 // creer fichier avec ofstream || is_open pour ouvrir fichier qui est creer
 //puis on ecrit a linterieur avec des getline fd, line et chaque lifne   
 //on oublie pas de close
 
}

