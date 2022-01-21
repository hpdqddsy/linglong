/*
 * Copyright (c) 2022. Uniontech Software Ltd. All rights reserved.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "builder.h"

#include "project.h"

void linglong::builder::registerAllMetaType()
{
    qJsonRegister<linglong::builder::BuildDepend>();
    qJsonRegister<linglong::builder::Project>();
    qJsonRegister<linglong::builder::Variables>();
    qJsonRegister<linglong::builder::Package>();
    qJsonRegister<linglong::builder::BuilderRuntime>();
    qJsonRegister<linglong::builder::Source>();
    qJsonRegister<linglong::builder::Build>();
    qJsonRegister<linglong::builder::BuildManual>();
}
