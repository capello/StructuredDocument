
#ifndef __VIEW_STRUCTURE_WIDGET__
#define __VIEW_STRUCTURE_WIDGET__

#include <QWidget>

namespace StructuredDocument {
  class ViewStructureWidget:public QWidget
  {
    Q_OBJECT
    
  public:
    ViewStructureWidget(QWidget* parent = 0);
    virtual ~ViewStructureWidget();
    
  public slots:
    
  };
};

#endif
