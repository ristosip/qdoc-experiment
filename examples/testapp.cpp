#include "testapp.h"
#include <QPushButton>
#include <QVBoxLayout>

TestApp::TestApp(QWidget *parent) : QMainWindow(parent)
{
    m_test_object = new QDocExperiment::MyClass(1, this);

    m_num = 0;

    QPushButton *button = new QPushButton("&Increment");
    connect(button, &QPushButton::clicked, this,
            [=]() { this->runTest(); });

    m_label = new QLabel("0");

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(button);
    layout->addWidget(m_label);

    QWidget* centralWidget = new QWidget;
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
}

//! [testing]
void TestApp::runTest()
{
    m_num = m_test_object->doSomething(m_num);
    m_label->setText(QString::number(m_num));
}
//! [testing]
