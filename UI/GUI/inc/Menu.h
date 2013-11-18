#ifndef __MENU__
#define __MENU____
#include <QMenu>



namespace StructuredDocument {
  class Menu:public QMenu
  {
    Q_OBJECT
    
  public:
    Menu(QWidget* parent = 0):QMenu(parent) {};
    virtual ~Menu() {};
    
  public slots:
    void Display();
    void set();
    
   
  private:
 };
};

#endif
