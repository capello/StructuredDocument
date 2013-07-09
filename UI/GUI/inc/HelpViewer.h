
#ifndef __HELP_VIEWER__
#define __HELP_VIEWER__
#include <QTextEdit>

namespace StructuredDocument {
  class HelpViewer:public QTextEdit
  {
    Q_OBJECT
    
  public:
    explicit HelpViewer(QWidget* parent = 0);
    virtual ~HelpViewer();
    
  public slots:
    void setHelp(QString p_help);
  };
};

#endif
