#include "HelpViewer.h"
#include <QVBoxLayout>

StructuredDocument::HelpViewer::HelpViewer(QWidget *parent):QWidget(parent)
{
  m_title = new QLabel;
  m_content = new QLabel;
  
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

void StructuredDocument::HelpViewer::setHelp(QString p_help)
{
  m_content->setText(p_help);
}

void StructuredDocument::HelpViewer::setHelp(QString p_title, QString p_help)
{
  m_title->setText(p_title);
  m_content->setText(p_help);
}
