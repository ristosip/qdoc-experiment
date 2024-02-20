/*!
    \class QDocExperiment::MyClass

    \inmodule QDocExperiment

    \brief MyClass is simple nonsensical class implemented for learning about QDoc documentation.

    MyClass does not do anything useful. It contains a private member \c m_my_value and a function
    that changes its value. Here are the main features:

    \list
    \li feature 1
    \li feature 2
    \li feature 3
    \endlist

    Here's an unrelated image:

    \image ../images/test_image.png

    MyClass can be used to do many unhelpful thigs, such as the following.

    \snippet ../examples/testapp.cpp testing

*/

#include "myclass.h"
/*!
    \namespace QDocExperiment

    \inmodule QDocExperiment

    \brief Contains identifiers related to QDocExperiment.
*/
namespace QDocExperiment {
/*!
    \fn MyClass::MyClass(int value, QObject *parent)

    Constructor that initializes the internal state of a MyClass instance
    based on \a value and \a parent.
*/
MyClass::MyClass(int value, QObject *parent) : QObject(parent), m_my_value(value)
{

}

/*!
    \fn int MyClass::doSomething(int input)

    This function does something based on \a input.
*/

int MyClass::doSomething(int input)
{
    return input + m_my_value;
}

} // namespace
