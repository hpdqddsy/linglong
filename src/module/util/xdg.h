/*
 * Copyright (c) 2021. Uniontech Software Ltd. All rights reserved.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <QString>
#include <QDir>

namespace linglong {
namespace util {

QDir userCacheDir();

QDir userRuntimeDir();

QStringList parseExec(const QString &exec);

/*!
 * parseEnv will convert ${HOME}/Desktop:${HOME}/Desktop to real value as pair
 * /home/linglong/Desktop, /home/linglong/Desktop
 * support format:
 * ${HOME}/Desktop:${HOME}/Desktop
 * ${HOME}/Desktop=${HOME}/Desktop
 * @return
 */
QPair<QString, QString> parseEnvKeyValue(QString env, const QString &sep);

} // namespace util
} // namespace linglong
