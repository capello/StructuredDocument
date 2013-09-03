#include <QtTest/QTest>
#include "test_helpViewer.h"
#include <HelpViewer.h>

void TestHelpViewer::initHelpViewer()
{
  m_helpViewer = new StructuredDocument::HelpViewer();
}

QTEST_MAIN(TestHelpViewer)
