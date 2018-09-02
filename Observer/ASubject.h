//
// Created by aykull on 31/08/18.
//


#pragma once
#include <vector>
#include <list>
#include "SocialMedia.h"

class ASubject{
    //Lets keep a track of all the shops we have observing
    std::vector<SocialMedia*> list;

public:
    void Attach(SocialMedia *product);
    void Detach(SocialMedia *product);
    void Notify(float follows);
};


