#include "phonenumber.h"

#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

void PhoneNumber::check_correctness_and_parse() {
    if (phone_number.size() == 0 || phone_number.find(' ') != std::string::npos) {throw std::invalid_argument("Zero/with whitespaces string");}
    else if (phone_number[0] != '+') {throw std::invalid_argument("Missing + in phone number");}

    auto first_dash = phone_number.find('-');
    if (first_dash == std::string::npos) {throw std::invalid_argument("Missing 1st dash in phone number");}

    auto second_dash = phone_number.find('-', first_dash + 1);
    if (second_dash == std::string::npos) {throw std::invalid_argument("Missing 2st dash in phone number");}

    if (phone_number.find('-', second_dash + 1) != std::string::npos) {throw std::invalid_argument("Incorrect entry form");}
    else if (std::distance(phone_number.begin(), phone_number.begin() + first_dash) == 1) {throw std::invalid_argument("Missing country code in phone number");}
    else if (std::distance(phone_number.begin() + first_dash, phone_number.begin() + second_dash) == 1) {throw std::invalid_argument("Missing city code in phone number");}

    country_code = std::string(phone_number.begin() + 1, phone_number.begin() + first_dash);
    city_code = std::string(phone_number.begin() + (first_dash + 1), phone_number.begin() + second_dash);
    local_number = std::string(phone_number.begin() + (second_dash + 1), phone_number.end());
}

std::string PhoneNumber::GetCountryCode() const {
    return country_code;
}

std::string PhoneNumber::GetCityCode() const {
    return city_code;
}

std::string PhoneNumber::GetLocalNumber() const {
    return local_number;
}

std::string PhoneNumber::GetInternationalNumber() const {
    return phone_number;
}