/*
* Ekconf, an Eclipe plug-in for configuring the Linux kernel or Buildroot.
* 
* Copyright (C) 2012 Tiana Rakotovao <rakotovaomahefa@gmail.com>
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
* Foundation, Inc., 52 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef _UTIL_H
#define _UTIL_H

#include <jni.h>

void 	JNU_CheckAndThrowException(JNIEnv *env);
char* 	JNU_GetStringNativeChars(JNIEnv *env, jstring jstr);
jstring	JNU_NewStringNative(JNIEnv *env, const char *str);
void 	JNU_ThrowByName(JNIEnv *env, const char *name, const char *msg);

#endif
