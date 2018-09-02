//
// Created by aykull on 31/08/18.
//

#include "ASubject.h"
#include <algorithm>

using namespace std;


void ASubject::Attach(SocialMedia *socialMedia){
    list.push_back(socialMedia);
}
void ASubject::Detach(SocialMedia *socialMedia){
    list.erase(std::remove(list.begin(), list.end(), socialMedia), list.end());
}

void ASubject::Notify(float follows){
    for(vector<SocialMedia*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(follows);
        }
    }
}

