/*
 * QFloat Module
 *
 * Copyright IBM, Corp. 2009
 * Copyright 2016 - Cyberhaven
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *  Vitaly Chipounov  <vitaly@cyberhaven.io>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#ifndef QFLOAT_H
#define QFLOAT_H

#include <stdint.h>
#include "qobject.h"

typedef struct QFloat {
    QObject_HEAD;
    double value;
} QFloat;

QFloat *qfloat_from_double(double value);
double qfloat_get_double(const QFloat *qi);
QFloat *qobject_to_qfloat(const QObject *obj);

#endif /* QFLOAT_H */
