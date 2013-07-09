#include <QApplication>
#include <MainWindow.h>

int main(int p_argc, char **p_argv) {
    QApplication l_application(p_argc, p_argv);

    StructuredDocument::MainWindow l_mainWindow;
    
    l_mainWindow.showMaximized();

    return l_application.exec();
}
