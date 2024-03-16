#include <iostream>
#include <string>
using namespace std;
class String {
private:
    static int countInstances;
    string str;
public:
    String() : String(80) {}
    String(int size) : str(string(size, ' ')) {
        countInstances++;
    }
    String(const string& inputString) : str(inputString) {
        countInstances++;
    }
    ~String() {
        countInstances--;
    }
    static int getCountInstances() {
        return countInstances;
    }
    void input() {
        cout << "Введіть рядок: ";
        getline(std::cin >> ws, str);
    }
    void display() const {
        cout << "Рядок: " << str << endl;
    }
};
int String::countInstances = 0;
int main() {
    String s1;
    cout << "Кількість екземплярів класу String: " << String::getCountInstances() << endl;
    String s2(100);
    cout << "Кількість екземплярів класу String: " << String::getCountInstances() << endl;
    String s3("Hello, World!");
    cout << "Кількість екземплярів класу String: " << String::getCountInstances() << endl;
    s1.input();
    s1.display();
    s2.input();
    s2.display();
    s3.display();
    return 0;
}