#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

namespace QDocExperiment {

class MyClass : public QObject
{
    Q_OBJECT
public:
    MyClass(int value, QObject *parent = nullptr);
    int doSomething(int input);

private:
    int m_my_value;
};

}

#endif // MYCLASS_H
