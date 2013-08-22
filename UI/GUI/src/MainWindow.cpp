#include "MainWindow.h"
#include <QtGui>

StructuredDocument::MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
  QHBoxLayout *l_Hlayout = new QHBoxLayout();
  m_editor = new DocumentEditor();
  l_Hlayout->addWidget(m_editor,2);
  QVBoxLayout *l_Vlayout = new QVBoxLayout();
  l_Hlayout->addLayout(l_Vlayout,1);
  m_helpViewer = new HelpViewer();
  m_viewStructure = new ViewStructureWidget();
  
  l_Vlayout->addWidget(m_helpViewer,1);
  l_Vlayout->addWidget(m_viewStructure,1);
  
  
  setCentralWidget(new QWidget);
  centralWidget()->setLayout(l_Hlayout);
  
  // We connect help slot on help widget to mainwindow help slot
  connect(this,SLOT(setHelp(QString,QString)),m_helpViewer,SLOT(setHelp(QString,QString)));
  
  // Inactivate text edit
  m_editor->setEnabled(false);
}

StructuredDocument::MainWindow::~MainWindow()
{
}

void StructuredDocument::MainWindow::setHelp(QString p_title, QString p_help)
{
}
