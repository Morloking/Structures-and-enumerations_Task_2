#include <iostream>
#include <string>

struct AccountInfo {
    int accountNumb{ 0 };
    float balance{ 0.f };
    std::string name{ "" };
};

void setNewBalance(AccountInfo& accInfo, float newBalance) {
    accInfo.balance = newBalance;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    AccountInfo accInfo;
    
    std::cout << "¬ведите номер счЄта: ";
    std::cin >> accInfo.accountNumb;
    std::cout << "¬ведите им€ владельца: ";
    std::cin >> accInfo.name;
    std::cout << "¬ведите баланс: ";
    std::cin >> accInfo.balance;
    std::cout << "¬ведите новый баланс: ";
    int newBalance{ 0 };
    std::cin >> newBalance;
    setNewBalance(accInfo, newBalance);
    std::cout << "¬аш счЄт: " << accInfo.name << ", "
        << accInfo.accountNumb << ", "
        << accInfo.balance << "\n";
}