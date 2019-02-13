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

#include <node.h>
#include <nan.h>
#include <v8.h>

#include "clipboard.h"

namespace cclib {

    void clipboard::foo() {
        NSLog(@"Hello, World111!");
    }
} //cclib