#include <QtTest/QtTest>
#include <HelpViewer.h>

class TestHelpViewer: public QObject
{
  Q_OBJECT
  
private slots:
  void initHelpViewer();
  
private:
  StructuredDocument::HelpViewer *m_helpViewer;
};
