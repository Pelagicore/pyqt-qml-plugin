/*
 * Copyright (C) 2013 Johan Thelin / Pelagicore AB
 *
 * This file is part of pyqt-qml-bridge.
 *   
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * If you have questions regarding the use of this file, please contact
 * Pelagicore at info@pelagicore.com.
 */

#ifndef PYQT_QML_PLUGIN_H
#define PYQT_QML_PLUGIN_H

#include <QQmlExtensionPlugin>

class QQmlEngine;

class PyQtQmlPlugin : public QQmlExtensionPlugin
{
        Q_OBJECT
        Q_PLUGIN_METADATA(IID "com.pelagicore.PyQtQmlPlugin" FILE "pyqt-qml-plugin.json")

public:
        void registerTypes(const char *uri);
        void initializeEngine(QQmlEngine *engine, const char *uri);
};

#endif // PYQT_QML_PLUGIN_H

