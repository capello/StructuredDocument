#include <QtTest/QtTest>
#include <HelpViewer.h>

class TestHelpViewer: public QObject
{
  Q_OBJECT
  
public:
    TestHelpViewer(QObject* parent = 0):m_helpViewer(0) {};
  
private slots:
  void initHelpViewer();
  
private:
  StructuredDocument::HelpViewer *m_helpViewer;
};
