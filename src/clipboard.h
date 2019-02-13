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

<<<<<<< HEAD
#include "base/os.h"

#if defined(IS_MACOSX)
#include <AppKit/AppKit.h>
#include <AppKit/NSPasteboard.h>
#include <Foundation/Foundation.h>
=======
#include <base/os.h>

#if defined(IS_MACOSX)
#include <AppKit/AppKit.h>
>>>>>>> 11a64641e812971529bf58cb60df51640e2c636e

#endif

namespace cclib {

<<<<<<< HEAD
class clipboard{
  public:
    clipboard();
    ~clipboard();

  public:
    void foo();
}; //class clipboard

} //namespace cclib
=======
} //cclib
>>>>>>> 11a64641e812971529bf58cb60df51640e2c636e

#endif  // CCLIB_CLIPBOARD_H_