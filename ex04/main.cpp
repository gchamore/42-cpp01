/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:45:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/24 15:50:21 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "wrong nb of arguments for : " << av[0] << "correct args are : <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::ifstream ifs(av[1]);
    if (!ifs)
    {
        std::cerr << "Error: Cannot open file " << av[1] << std::endl;
        return 1;
    }
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string content;
    std::string line;
	
    while (std::getline(ifs, line))
        content += line + "\n";
    ifs.close();
	
    std::string output_content;
    std::string::size_type pos = 0;
    std::string::size_type found;
    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        output_content += content.substr(pos, found - pos);
        output_content += s2;
        pos = found + s1.length();
    }
    output_content += content.substr(pos);
    std::string output_filename = std::string(av[1]) + ".replace";
    std::ofstream ofs(output_filename.c_str());
    if (!ofs)
    {
        std::cerr << "Error: Cannot create file " << output_filename << std::endl;
        return 1;
    }
    ofs << output_content;
    ofs.close();
    std::cout << "Replacement done. Output written to " << output_filename << std::endl;
    return 0;
}
