#include <iostream>
#include "DummyProduct.h"

int main(int argc, char* argv[]) {
    DummyProduct product;

    // We have four shops wanting to keep updated price set by product owner
    SocialMedia sm1("Pinterest");
    SocialMedia sm2("Instagram");

    product.Attach(&sm1);
    product.Attach(&sm2);

    //Now lets try changing the products price, this should update the shops automatically
    product.UpdateFollows(23.0f);

    //Now shop2 is not interested in new prices so they unsubscribe
    product.Detach(&sm2);

    //Now lets try changing the products price again
    product.UpdateFollows(26.0f);

    getchar();
    return 0;
}