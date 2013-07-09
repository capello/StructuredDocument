#ifndef __DOCUMENT_EDITOR_H__
#define __DOCUMENT_EDITOR_H__
#include <QTextEdit>


namespace StructuredDocument
{
  class DocumentEditor:public QTextEdit
  {
    Q_OBJECT
  public:
    explicit DocumentEditor(QWidget* parent = 0);
    virtual ~DocumentEditor();
    
  };
};

#endif
