#include "person.h"

Person::Person(const Person& source)
    : m_first_name(source.m_first_name), m_last_name(source.m_last_name)
{
}

Person::Person(std::string_view first_name_param, std::string_view last_name_param)
: m_first_name(first_name_param), m_last_name(last_name_param)
{
}

// Getters
std::string Person::get_first_name() const {
    return m_first_name;
}
std::string Person::get_last_name() const {
    return m_last_name;
}

// Setters
void Person::set_first_name(std::string_view first_name_param) {
    m_first_name = first_name_param;
}
void Person::set_last_name(std::string_view last_name_param) {
    m_last_name = last_name_param;
}

std::ostream& operator<<(std::ostream& out, const Person& person) {
    out << "Person: [ " << person.m_first_name << " " << person.m_last_name << " ]";
    return out;
}