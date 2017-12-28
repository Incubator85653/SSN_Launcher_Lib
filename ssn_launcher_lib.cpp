#include "ssn_launcher_lib.h"

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
