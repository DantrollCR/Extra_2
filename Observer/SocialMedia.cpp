//
// Created by aykull on 31/08/18.
//

#include "SocialMedia.h"

SocialMedia::SocialMedia(std::string name) {
    this->name = name;
}

void SocialMedia::Update(float follows) {
    this->follows = follows;

    //Lets print on console just to test the working
    std::cout << "La cuenta de "<< name << " tiene "<< follows << " seguidores"<< "\n";
}