#include "window.h"
#include<QtWidgets>

Window::Window(QWidget *parent) : QWidget(parent)
{
    QGridLayout *grid = new QGridLayout;
    grid->addWidget(createAccountInfo(), 0, 0);
    grid->addWidget(createAccountSelector(), 1, 0);
    grid->addWidget(createAccountActions(), 0, 1);
    setLayout(grid);

    setWindowTitle(tr("BankingWindow"));
    resize(480, 320);

}
QGroupBox *Window::createAccountInfo()
{
    QGroupBox *groupBox = new QGroupBox(tr("Account Information"));

    QLabel *label1 = new QLabel("UserName ");
    QLabel *label2 = new QLabel("AccountNumber: ");
    QLabel *label3 = new QLabel("Selected Account Balance: ");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(label1);
    vbox->addWidget(label2);
    vbox->addWidget(label3);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;

}

QGroupBox *Window::createAccountSelector()
{
    QGroupBox *groupBox = new QGroupBox(tr("Select Account Type"));

    QPushButton *saving = new QPushButton(tr("Saving"));
    QPushButton *checking = new QPushButton(tr("Checking"));

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(saving);
    vbox->addWidget(checking);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;
}

QGroupBox *Window::createAccountActions()
{
    QGroupBox *groupBox = new QGroupBox(tr("Transaction/History"));

    QPushButton *deposit = new QPushButton(tr("Deposit"));
    QPushButton *withdraw = new QPushButton(tr("Withdraw"));
    QPushButton *transfer = new QPushButton(tr("Transfer"));
    QPushButton *history = new QPushButton(tr("History"));

    QVBoxLayout *vbox = new QVBoxLayout;

    vbox->addWidget(deposit);
    vbox->addWidget(withdraw);
    vbox->addWidget(transfer);
    vbox->addWidget(history);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);
    return groupBox;

}
