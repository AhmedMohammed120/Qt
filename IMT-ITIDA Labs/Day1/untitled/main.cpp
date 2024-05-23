#include <QCoreApplication>
#include <QTextStream>
#include <QByteArray>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream qout(stdout);
    QTextStream qin(stdin);
   // QString Name;
    // QByteArray Arr = "Ahmed";
    // QString Str = QString(Arr);
    // qout<<Str<<Qt::endl;
    // QTextStream ss(&Str);

    // ss<<"Hello, I am Ahmed ";
    // ss<<"Second Line";
    // qout<<"string Stream: "<<ss.readAll()<<Qt::endl;
    // Str = QString::number(15);
    QString Str = "My name is Ahmed"  ;

    if (Str.contains("Ahmed"))
    {
        Str.replace("Ahmed","Mohanad");
    }
    qout<<Str<<Qt::endl;
    return a.exec();
}
