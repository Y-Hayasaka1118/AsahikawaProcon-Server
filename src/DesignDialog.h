#ifndef DESIGNDIALOG_H
#define DESIGNDIALOG_H

#include <QDialog>

namespace Ui {
class DesignDialog;
}

class DesignDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DesignDialog(QWidget *parent = 0);

    bool GetCheckDark() const;
    bool GetCheckBot() const;
    void Export();

    ~DesignDialog();

private:
    Ui::DesignDialog *ui;
};

#endif // DESIGNDIALOG_H
