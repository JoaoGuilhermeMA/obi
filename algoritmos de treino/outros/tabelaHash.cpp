#include <iostream>
#include <unordered_map>
#include <string>

using std::cout;
using std::endl;

std::unordered_map<std::string, bool> voted;

void check_voter(const std::string& name) {
    auto search = voted.find(name);
    if (search == voted.end() || search->second == false) {
        voted.insert({name, true});
        cout << "Let them vote!" << endl;;
    } else {
        cout << "Kick them out!" << endl;
    }
}

int main() {
    check_voter("tom");
    check_voter("mike");
    check_voter("mike");
}

/*#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>

using std::cout;
using std::endl;

int main() {
    std::unordered_map<std::string, float> book = {
        {"apple", 0.67},
        {"milk", 1.49},
        {"avocado", 1.49}
    };

    // print book
    for (std::pair<std::string, float> pair : book) {
        cout << pair.first << ": " << pair.second << "$" << endl;
    }
}*/