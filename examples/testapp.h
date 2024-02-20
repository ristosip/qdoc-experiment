#ifndef TESTAPP_H
#define TESTAPP_H

#include <QMainWindow>
#include <QLabel>
#include "src/myclass.h"

class TestApp : public QMainWindow
{
    Q_OBJECT
public:
    TestApp(QWidget *parent = nullptr);
    void runTest();
private:
    QDocExperiment::MyClass *m_test_object;
    QLabel *m_label;
    int m_num;
};

#endif // TESTAPP_H
