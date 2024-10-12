#pragma once

#include <string>

class PhoneNumber {
   private:
      std::string phone_number;
      std::string country_code;
      std::string city_code;
      std::string local_number;
      void check_correctness_and_parse();
   public:
   /* Принимает строку в формате +XXX-YYY-ZZZZZZ
      Часть от '+' до первого '-' - это код страны.
      Часть между первым и вторым символами '-' - код города
      Всё, что идёт после второго символа '-' - местный номер.
      Код страны, код города и местный номер не должны быть пустыми.
      Если строка не соответствует этому формату, нужно выбросить исключение invalid_argument.
      Проверять, что номер содержит только цифры, не нужно.

      Примеры:
      * +7-495-111-22-33
      * +7-495-1112233
      * +323-22-460002
      * +1-2-coursera-cpp
      * 1-2-333 - некорректный номер - не начинается на '+'
      * +7-1233 - некорректный номер - есть только код страны и города
   */
      //friend void check_correctness_and_parse();

      explicit PhoneNumber(const std::string& international_number) : phone_number(international_number) {
         check_correctness_and_parse();
      }

      std::string GetCountryCode() const;
      std::string GetCityCode() const;
      std::string GetLocalNumber() const;
      std::string GetInternationalNumber() const;
};