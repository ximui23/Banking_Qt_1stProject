#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QGroupBox;

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

signals:

public slots:

private:
    QGroupBox *createAccountInfo();
    QGroupBox *createAccountSelector();
    QGroupBox *createAccountActions();
};

#endif // WINDOW_H
