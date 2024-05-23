#include <QCoreApplication>
#include <setting.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Setting Obj;
    Obj.SaveSettings();
    Obj.LoadSettings();

    return a.exec();
}
