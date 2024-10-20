#include "../header/mocha.h"

Mocha::Mocha(Beverage *beverage) : AddOnDecorator(beverage) {}

std::string Mocha::getDescription() const {
    return beverage_->getDescription() + " + Mocha\n";
}

double Mocha::cost() const {
    return beverage_->cost() + 4;
}