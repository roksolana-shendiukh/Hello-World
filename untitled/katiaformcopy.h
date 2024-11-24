#ifndef KATIAFORMCOPY_H
#define KATIAFORMCOPY_H

#include <QWidget>

namespace Ui {
class KatiaFormCopy;
}

class KatiaFormCopy : public QWidget
{
    Q_OBJECT

public:
    explicit KatiaFormCopy(QWidget *parent = nullptr);
    ~KatiaFormCopy();

private:
    Ui::KatiaFormCopy *ui;
};

#endif // KATIAFORMCOPY_H
