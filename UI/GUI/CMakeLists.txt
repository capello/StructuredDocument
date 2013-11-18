
include_directories(if inc)

set(structureddocument_HEADERS inc/MainWindow.h inc/HelpViewer.h inc/DocumentEditor.h
           inc/ViewStructureWidget.h inc/Menu.h)
set(structureddocument_SOURCES src/main.cpp src/MainWindow.cpp src/HelpViewer.cpp src/DocumentEditor.cpp 
           src/ViewStructureWidget.cpp src/Menu.cpp)
QT4_WRAP_CPP(structureddocument_HEADERS_MOC ${structureddocument_HEADERS})

add_executable(structureddocument ${structureddocument_SOURCES} ${structureddocument_HEADERS_MOC})
TARGET_LINK_LIBRARIES(structureddocument ${QT_LIBRARIES})
