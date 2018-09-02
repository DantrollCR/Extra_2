//
// Created by aykull on 31/08/18.
//
#pragma once
#include <iostream>
#include <string>
#include "IObserver.h"

class SocialMedia : IObserver {
    //Name of the Shop
    std::string name;
    float follows;
public:
    SocialMedia(std::string n);
    void Update(float follows);
};