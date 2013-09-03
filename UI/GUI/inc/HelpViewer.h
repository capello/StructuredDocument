
#ifndef __HELP_VIEWER__
#define __HELP_VIEWER__
#include <QWidget>
#include <QLabel>
#include <QQueue>


namespace StructuredDocument {
  class HelpViewer:public QWidget
  {
    Q_OBJECT
    
  public:
    explicit HelpViewer(QWidget* parent = 0);
    virtual ~HelpViewer();
    
  public slots:
    void setHelp(QString p_title, QString p_help);
    void push(QString p_title, QString p_help);
    void pop(void);
    
  private:
    void displayCurrent();
    
  private:
    QLabel *m_title;
    QLabel *m_content;
    QQueue<QPair<QString,QString> > m_helpStack;
  };
};

#endif
