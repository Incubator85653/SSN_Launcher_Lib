#ifndef SSN_LAUNCHER_H
#define SSN_LAUNCHER_H

#include <string>
#include <iostream>
#include <QCoreApplication>

using namespace std;

class SSN_Launcher_Lib
{
namespace SSN_Launcher_Lib_Static {
    namespace Environment {
        QString getWorkingDirectory(){
            auto pathFromQt = QCoreApplication::applicationDirPath();

public:
    wstring getWorkingDirectory();
    SSN_Launcher_Lib();
};

#endif // SSN_LAUNCHER_H
