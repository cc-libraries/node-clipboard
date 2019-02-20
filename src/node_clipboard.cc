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
#include "clipboard.h"
// #include "clipboard_mac.h"
// #include "clipboard_x11.h"

//TODO: remove
// #include <node.h>
// #include <nan.h>
// #include <v8.h>

using namespace v8;
using namespace cclib;

// NAN_METHOD(feeo)
// {
//     Clipboard* clipboardInstance = NULL;
// 	//Create our return object.
// 	Local<Object> obj = Nan::New<Object>();

//     //clipboard macos install
//     // #if defined(IS_MACOSX)
//     // clipboardInstance = new ClipboardMac();
//     // #endif

//     // //clipboard linux install
//     // #if defined(USE_X11)
//     // clipboardInstance = new ClipboardX11();
//     // #endif

//     clipboardInstance = new Clipboard();

//     // if(NULL == clipboardInstance) {
//     //     info.GetReturnValue().Set(obj);
//     //     return;
//     // }
//     size_t value = clipboardInstance->foo();
// 	Nan::Set(obj, Nan::New("vaule").ToLocalChecked(), Nan::New<Number>(value));

// 	info.GetReturnValue().Set(obj);

//     delete clipboardInstance;
// }

NAN_MODULE_INIT(InitAll)
{
    Clipboard::Init(target);
}

NODE_MODULE(clipboard, InitAll)