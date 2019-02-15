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

#include <AppKit/AppKit.h>
#include <AppKit/NSPasteboard.h>
#include <Foundation/Foundation.h>
// #include "clipboard.h"


// namespace cclib {

//     int clipboard::foo() {
//         NSLog(@"Hello, World111!");
//         return 100;
//     }
// } //cclib

using namespace v8;

NAN_METHOD(foo)
{

    NSLog(@"Hello, World111!");
    // size_t vaule = 100;

	//Create our return object.
	Local<Object> obj = Nan::New<Object>();
	Nan::Set(obj, Nan::New("vaule").ToLocalChecked(), Nan::New<Number>(1000));

	info.GetReturnValue().Set(obj);
}

NAN_MODULE_INIT(InitAll)
{
    Nan::Set(target, Nan::New("foo").ToLocalChecked(),
		Nan::GetFunction(Nan::New<FunctionTemplate>(foo)).ToLocalChecked());
}

NODE_MODULE(clipboard, InitAll)