#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

class Dog {
public:
    explicit Dog(const std::string& name_params);
    Dog() = default;
    ~Dog(); // Explicitly stating that the destructor is default

    void print_dog() const {
        std::cout << "Printing dog: " << m_dog_name << std::endl;
    }

    std::string get_name() const {
        std::cout << "Printing the name of the dog: " << m_dog_name << std::endl;
        return m_dog_name;
    }

    void set_dog_name(const std::string& name) {
        m_dog_name = name;
    }

private:
    std::string m_dog_name;
};

#endif // DOG_H
