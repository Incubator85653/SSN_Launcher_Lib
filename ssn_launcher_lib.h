#ifndef SSN_LAUNCHER_H
#define SSN_LAUNCHER_H

#include <string>
#include <iostream>
#include <QCoreApplication>

using namespace std;

namespace SSN_Launcher_Lib_Static{
    namespace Environment{
        QString getWorkingDirectory();
    }
    namespace Type{
        QString qString_fromWstring(wstring input);
        wstring wstring_fromQString(QString input);
    }
}

#endif // SSN_LAUNCHER_H
