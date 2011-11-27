#ifndef SHOWVIDEODIALOG_H
#define SHOWVIDEODIALOG_H

#include <QDialog>
#include <QLabel>

namespace Ui {
    class ShowVideoDialog;
}

class ShowVideoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowVideoDialog(QWidget *parent = 0);
    ~ShowVideoDialog();
    QLabel* label();

private:
    Ui::ShowVideoDialog *ui;
};

#endif // SHOWVIDEODIALOG_H
