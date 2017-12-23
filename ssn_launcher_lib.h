#ifndef SSN_LAUNCHER_H
#define SSN_LAUNCHER_H

#include <string>
#include <iostream>
#include <QCoreApplication>

using namespace std;

namespace SSN_Launcher_Lib_Static {
    namespace Environment {
        QString getWorkingDirectory(){
            auto pathFromQt = QCoreApplication::applicationDirPath();

            return pathFromQt;
        }
    }

    namespace Type {
        QString qString_fromWstring(wstring input){
            return QString::fromWCharArray(input.c_str());
        }
        wstring wstring_fromQString(QString input){

            return input.toStdWString();
        }
    }
}

#endif // SSN_LAUNCHER_H
