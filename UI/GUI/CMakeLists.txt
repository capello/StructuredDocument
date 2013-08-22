
include_directories(if inc)

set(structureddocument_HEADERS inc/MainWindow.h inc/HelpViewer.h inc/DocumentEditor.h)
set(structureddocument_SOURCES src/main.cpp src/MainWindow.cpp src/HelpViewer.cpp src/DocumentEditor.cpp)
QT4_WRAP_CPP(structureddocument_HEADERS_MOC ${structureddocument_HEADERS})

add_executable(structureddocument ${structureddocument_SOURCES} ${structureddocument_HEADERS_MOC})
TARGET_LINK_LIBRARIES(structureddocument ${QT_LIBRARIES})
