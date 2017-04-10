#include "gameinfoblock.h"
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iostream>

GameInfoBlock::GameInfoBlock()
{

}

const std::string defaultOptions [6] = {
    "#auto generated config file\n",
    "#removing some of these options may prevent the game from starting\n"
    "RESX=1280\n",
    "RESY=720\n",
    "FSCR=false\n",
    "FRLIM=60\n"
};


bool GameInfoBlock::Load(std::string path)
{
    struct pairs{
        std::string command;
        std::string value;
    };

    std::fstream sFile;
    sFile.open(path, std::ios_base::in | std::ios_base::out);
    std::vector <std::string> options;
    if(!sFile)
    {
        sFile.open(path, std::ios_base::trunc | std::ios_base::out);
        sFile.close();
        sFile.open(path, std::ios_base::in | std::ios_base::out );
    }
    if(sFile)
    {
        std::string temp;
        while(std::getline(sFile, temp))
        {
           options.push_back(temp);
        }
        if(options.size() == 0)
        {
            sFile.close();
            sFile.open(path, std::ios_base::out);
            for(auto&& option : defaultOptions)
            {
                sFile << option;
                options.push_back(option);
            }
        }
        sFile.close();
    }

    auto which = std::remove_if(options.begin(), options.end(), [](const std::string& line){
       return line[0] == '#' || line.length() < 2;
    });
    options.erase(which, options.end());

    std::vector <pairs> Parsed;
    for(auto&& line : options)
    {
        if(line.find("="))
        {
            if(line.find('=') == line.size()-1)
            {
                Parsed.push_back({line.substr(0, line.find('=')), "0"});
            }
            else if(line.find("true") != std::string::npos)
            {
                Parsed.push_back({line.substr(0, line.find('=')), "1"});
            }
            else if(line.find("false") != std::string::npos)
            {
                Parsed.push_back({line.substr(0, line.find('=')), "0"});
            }
            else
            {
                Parsed.push_back({line.substr(0, line.find('=')), line.substr(line.find('=')+1, line.size())});
            }
        }
        else
            continue;
    }
    for(auto&& pair:Parsed)
    {
        if(pair.command == "RESX")
            this->ResX = std::stoi(pair.value);
        else if(pair.command == "RESY")
            this->ResY = std::stoi(pair.value);
        else if(pair.command == "FRLIM")
            if(std::stoi(pair.value) > 0)
                this->FrameRateLimit = std::stoi(pair.value);
            else
                this->FrameRateLimit = 60;
        else if(pair.command == "FSCR")
            this->FullScreen = (bool)std::stoi(pair.value);
    }
    return true;
}
