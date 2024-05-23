#ifndef SETTING_H
#define SETTING_H
#include <QSettings>
#include <QObject>

class Setting : public QObject
{
    Q_OBJECT
public:
    explicit Setting(QObject *parent = nullptr);
    void SaveSettings();
    void LoadSettings();
public:
    QSettings* Settings;
};

#endif // SETTING_H
