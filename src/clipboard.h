/*********************************************************************
 * node-clipboard-api-adapter
 *
 * Copyright (c) 2018 node-clipboard-api-adapter contributors:
 *   - hello_chenchen <https://github.com/hello-chenchen>
 *
 * MIT License <https://github.com/hello-chenchen/node-clipboard-api-adapter/blob/master/LICENSE>
 * See https://github.com/hello-chenchen/node-clipboard-api-adapter for the latest update to this file
 *
 * author: hello_chenchen <https://github.com/hello-chenchen>
 **********************************************************************************/

#ifndef CCLIB_CLIPBOARD_H_
#define CCLIB_CLIPBOARD_H_

#include "base/os.h"

#if defined(IS_MACOSX)
#include <AppKit/AppKit.h>
#include <AppKit/NSPasteboard.h>
#include <Foundation/Foundation.h>

#endif

namespace cclib {

class clipboard{
  public:
    clipboard();
    ~clipboard();

  public:
    int foo();
}; //class clipboard

} //namespace cclib

#endif  // CCLIB_CLIPBOARD_H_