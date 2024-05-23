#include "setting.h"
#include <QString>


QString Path = "C:\\Users\\Ahmed Mohammed\\Desktop\\ITIDA_Qt_Labs\\Settings\\QtSetting.ini";

Setting::Setting(QObject *parent)
    : QObject{parent}
{
    Settings = new QSettings(Path,QSettings::IniFormat);
}

void Setting::SaveSettings()
{
    Settings->beginGroup("Font");
    Settings->setValue("FontColor","Black");
    Settings->setValue("FontSize",20);
    Settings->endGroup();

    Settings->beginGroup("Graphics");
    Settings->setValue("DisplaySize","1024*768");
    Settings->setValue("GraphicsQuality","Full HD");
    Settings->endGroup();



}

void Setting::LoadSettings()
{
    Settings->beginGroup("Font");
    QString Color = Settings->value("FontColor").toString();
    qint32 Size = Settings->value("FontSize").toInt();
    Settings->endGroup();

    Settings->beginGroup("Graphics");
    QString Graphics = Settings->value("DisplaySize").toString();
    QString Quality =Settings->value("GraphicsQuality").toString();
    Settings->endGroup();
    qDebug()<<"Font Color: "<<Color<<Qt::endl;
    qDebug()<<"Font Size: "<<Size<<Qt::endl;
    qDebug()<<"Graphics: "<<Graphics<<Qt::endl;
    qDebug()<<"Quality: "<<Quality<<Qt::endl;
}

