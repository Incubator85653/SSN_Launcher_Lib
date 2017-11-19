#include "ssn_launcher_lib.h"

using namespace std;

wstring SSN_Launcher::getWorkingDirectory(){
    auto qStringPath = QCoreApplication::applicationDirPath();
    wstring stdStringPath = qStringPath.toStdWString();
    return stdStringPath;
}

SSN_Launcher::SSN_Launcher()
{

}
