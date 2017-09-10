#
# Copyright (C) 2013 Johan Thelin / Pelagicore AB
#
# This file is part of pyqt-qml-bridge.
#   
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
#
# If you have questions regarding the use of this file, please contact
# Pelagicore at info@pelagicore.com.
#
 
import PyQt5.QtCore, sip, PyQtQmlBridge

class MyClass(PyQt5.QtCore.QObject):
    def __init__(self, name):
        PyQt5.QtCore.QObject.__init__(self)
        self.__name = name;

    @PyQt5.QtCore.pyqtSlot(str)
    def mySlot(self, text):
        print self.__name + ".mySlot: " + text

foo = MyClass("foo")
bar = MyClass("bar")

def initializeRootContext():
    PyQtQmlBridge.registerObject("foo", sip.unwrapinstance(foo))
    PyQtQmlBridge.registerObject("bar", sip.unwrapinstance(bar))
