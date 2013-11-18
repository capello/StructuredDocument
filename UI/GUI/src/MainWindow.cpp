#include "MainWindow.h"
#include <QtGui>
#include <QShortcut>

StructuredDocument::MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
  QHBoxLayout *l_Hlayout = new QHBoxLayout();
  m_editor = new DocumentEditor();
  l_Hlayout->addWidget(m_editor,2);
  QVBoxLayout *l_Vlayout = new QVBoxLayout();
  l_Hlayout->addLayout(l_Vlayout,1);
  m_helpViewer = new HelpViewer();
  m_viewStructure = new ViewStructureWidget();
  m_menu = new Menu();
  
  l_Vlayout->addWidget(m_helpViewer,1);
  l_Vlayout->addWidget(m_viewStructure,1);
  
  
  setCentralWidget(new QWidget);
  centralWidget()->setLayout(l_Hlayout);
  
  // We connect help slot on help widget to mainwindow help slot
  connect(this,SIGNAL(setHelp(QString,QString)),m_helpViewer,SLOT(setHelp(QString,QString)));
  
  // Inactivate text edit
  m_editor->setEnabled(false);
  
  // Set QActions
  QShortcut *ActivateMenu_withAlt = new QShortcut(QKeySequence("Alt+m"),this);
  QShortcut *ActivateMenu_withEnter = new QShortcut(QKeySequence("Return"),this);
  
  qDebug() << "ActivateMenu_withAlt";
  connect(ActivateMenu_withAlt,SIGNAL(activated()),m_menu,SLOT(Display()));
  connect(ActivateMenu_withAlt,SIGNAL(activatedAmbiguously()),m_menu,SLOT(Display()));
  connect(ActivateMenu_withEnter,SIGNAL(activated()),m_menu,SLOT(Display()));
  connect(ActivateMenu_withEnter,SIGNAL(activatedAmbiguously()),m_menu,SLOT(Display()));
  ActivateMenu_withAlt->setEnabled(true);
  ActivateMenu_withEnter->setEnabled(true);
  qDebug() << "\tDone.";
  
  // Set Help.
  emit setHelp(tr("Start"),tr("To start press <Alt>+<M> or <enter> to display menu"));
  
}

StructuredDocument::MainWindow::~MainWindow()
{
}
