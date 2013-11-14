include_directories(inc ../../UI/GUI/inc/ )

QT4_WRAP_CPP(test_helpViewer_HEADERS_MOC inc/test_helpViewer.h ../../UI/GUI/inc/HelpViewer.h)

add_executable(Test_HelpViewer src/test_helpViewer.cpp ../../UI/GUI/src/HelpViewer.cpp ${test_helpViewer_HEADERS_MOC})

TARGET_LINK_LIBRARIES(Test_HelpViewer ${QT_LIBRARIES} ${QT_QTTEST_LIBRARY})

