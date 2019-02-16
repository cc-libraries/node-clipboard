/*********************************************************************
 * node-clipboard-api-adapter
 *
 * Copyright (c) 2019 node-clipboard-api-adapter contributors:
 *   - hello_chenchen <https://github.com/hello-chenchen>
 *
 * MIT License <https://github.com/hello-chenchen/node-clipboard-api-adapter/blob/master/LICENSE>
 * See https://github.com/hello-chenchen/node-clipboard-api-adapter for the latest update to this file
 *
 * author: hello_chenchen <https://github.com/hello-chenchen>
 **********************************************************************************/

#ifndef CCLIB_CLIPBOARD_H_
#define CCLIB_CLIPBOARD_H_

#include <node.h>
#include <nan.h>
#include <v8.h>

#include "base/os.h"

#if defined(IS_MACOSX1)
#include <AppKit/AppKit.h>
#include <AppKit/NSPasteboard.h>
#include <Foundation/Foundation.h>

#endif

namespace cclib {

class Clipboard;

class clipboard: public Nan::ObjectWrap {
  public:
    clipboard() : Nan::ObjectWrap(),
    flag(-1) {
      //TODO: constructor
    };
    virtual ~clipboard();

    public:
    virtual size_t foo() = 0;

  private:
    size_t flag;
}; //class clipboard

} //namespace cclib

#endif  // CCLIB_CLIPBOARD_H_