/*********************************************************************
 * node-clipboard
 *
 * Copyright (c) 2019 node-clipboard contributors:
 *   - hello_chenchen <https://github.com/hello-chenchen>
 *
 * MIT License <https://github.com/hello-chenchen/node-clipboard/blob/master/LICENSE>
 * See https://github.com/hello-chenchen/node-clipboard for the latest update to this file
 *
 * author: hello_chenchen <https://github.com/hello-chenchen>
 **********************************************************************************/

#ifndef CCLIB_CLIPBOARD_H_
#define CCLIB_CLIPBOARD_H_

#include <node.h>
#include <nan.h>
#include <v8.h>

#include "base/os.h"

// namespace cclib {

class Clipboard;

class Clipboard : public Nan::ObjectWrap {
public:
    // static NAN_MODULE_INIT(Init);
    //TODO:
    // static Nan::Persistent<FunctionTemplate> constructor_template;

    // static inline bool HasInstance(Local<Value> val) {
    //     Nan::HandleScope scope;
    //     if (!val->IsObject()) return false;
    //     Local<Object> obj = val.As<Object>();
    //     return Nan::New(constructor_template)->HasInstance(obj);
    // }

public:
    Clipboard();
    ~Clipboard();

    size_t foo();
    // void call();
    // static NAN_METHOD(New);
    // static NAN_METHOD(foo);

    size_t flag;
}; //class clipboard

// } //namespace cclib

#endif  // CCLIB_CLIPBOARD_H_