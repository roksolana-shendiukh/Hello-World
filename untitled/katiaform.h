#ifndef KATIAFORM_H
#define KATIAFORM_H

#include <QWidget>

namespace Ui {
class KatiaForm;
}

class KatiaForm : public QWidget
{
    Q_OBJECT

public:
    explicit KatiaForm(QWidget *parent = nullptr);
    ~KatiaForm();

private:
    Ui::KatiaForm *ui;
};

#endif // KATIAFORM_H
