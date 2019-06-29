TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += $$PWD

SOURCES += \
        main.cpp

HEADERS += \
	dtl/Diff.hpp \
	dtl/Diff3.hpp \
	dtl/Lcs.hpp \
	dtl/Sequence.hpp \
	dtl/Ses.hpp \
	dtl/dtl.hpp \
	dtl/functors.hpp \
	dtl/variables.hpp
