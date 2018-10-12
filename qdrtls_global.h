#ifndef QDRTLS_GLOBAL_H
#define QDRTLS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QDRTLS_LIBRARY)
#  define QDRTLSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QDRTLSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QDRTLS_GLOBAL_H
