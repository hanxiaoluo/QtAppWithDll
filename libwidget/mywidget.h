#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

//定义两个宏，把对象导出
#if defined(LIBWIDGET_BUILD)
#  define WIDGET_API Q_DECL_EXPORT
#else
#  define WIDGET_API Q_DECL_IMPORT
#endif

//class后面跟着WIDGET_API，表示我们把MyselfWidget类导出，编译成一个dll文件，其它类可以使用这个导出类
class WIDGET_API MyselfWidget:public QWidget
{
    Q_OBJECT

public:
    MyselfWidget(QWidget * parent=0);

private slots:
    void btn_slot();

private:
    QPushButton *btn;
};

#endif // WIDGET_H
