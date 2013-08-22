#ifndef __MAIN_WINDOW_H__
#define __MAIN_WINDOW_H__

#include <QMainWindow>
#include <QString>
#include "HelpViewer.h"
#include "DocumentEditor.h"
#include "ViewStructureWidget.h"

namespace StructuredDocument
{
  class MainWindow:public QMainWindow
  {
    Q_OBJECT
    
  public:
    MainWindow(QWidget *parent=0);
    ~MainWindow();
    
  public slots:
    void setHelp(QString p_title, QString p_help);
    
  private:
    HelpViewer *m_helpViewer;
    DocumentEditor *m_editor;
    ViewStructureWidget *m_viewStructure;
  };
};


#endif
