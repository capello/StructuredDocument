#include "HelpViewer.h"
#include <QVBoxLayout>
#include <QDebug>

StructuredDocument::HelpViewer::HelpViewer(QWidget *parent):QWidget(parent)
{
  m_title = new QLabel;
  m_content = new QLabel;
  qDebug() << (char*)__func__;
  QVBoxLayout *l_layout = new QVBoxLayout;
  
  l_layout->addWidget(m_title);
  l_layout->addWidget(m_content,1);
  m_title->setAlignment(Qt::AlignCenter);
  QFont l_font = m_title->font();
  l_font.setBold(true);
  l_font.setPointSize(30);
  l_font.setCapitalization(QFont::SmallCaps);
  m_title->setFont(l_font);
  l_font = m_content->font();
  l_font.setPointSize(15);
  m_content->setFont(l_font);
  m_content->setAlignment(Qt::AlignJustify);
  m_content->setWordWrap(true);
  
  setHelp(trUtf8("HelpViewer"),trUtf8("This widget show help."));
  
  setLayout(l_layout);
}

StructuredDocument::HelpViewer::~HelpViewer()
{
}


void StructuredDocument::HelpViewer::setHelp(QString p_title, QString p_help)
{
  qDebug() << "Start setHelp";
  if (m_helpStack.isEmpty())
  {
    push(p_title,p_help);
  }
  else
  {
    m_helpStack.head().first = p_title;
    m_helpStack.head().second = p_help;
  }
  qDebug() << "Call displayCurrent";
  displayCurrent();
}


void StructuredDocument::HelpViewer::push(QString p_help, QString p_title)
{
  m_helpStack.enqueue(QPair<QString,QString>(p_help,p_title));
  displayCurrent();
}

void StructuredDocument::HelpViewer::pop(void)
{
  if (m_helpStack.size() != 1)
    (void) m_helpStack.dequeue();
  displayCurrent();
}
    

void StructuredDocument::HelpViewer::displayCurrent()
{
  qDebug() << "Set title";
  m_title->setText(m_helpStack.head().first);
  qDebug() << "Set Text";
  m_content->setText(m_helpStack.head().second);
  qDebug() << "Return displayCurrent";
}
