
#ifndef __HELP_VIEWER__
#define __HELP_VIEWER__
#include <QWidget>
#include <QLabel>

namespace StructuredDocument {
  class HelpViewer:public QWidget
  {
    Q_OBJECT
    
  public:
    explicit HelpViewer(QWidget* parent = 0);
    virtual ~HelpViewer();
    
  public slots:
    void setHelp(QString p_help);
    void setHelp(QString p_title, QString p_help);
    
  private:
    QLabel *m_title;
    QLabel *m_content;
  };
};

#endif
