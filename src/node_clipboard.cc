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

#include "clipboard_mac.h"
// #if defined(IS_MACOSX)
// #endif

using namespace v8;

// NAN_METHOD(foo)
// {
//     Clipboard* clipboardInstance = NULL;
// 	//Create our return object.
// 	Local<Object> obj = Nan::New<Object>();

//     #if defined(IS_MACOSX)
//     clipboardInstance = new ClipboardMac();
//     #endif

//     if(NULL == clipboardInstance) {
//         info.GetReturnValue().Set(obj);
//         return NULL;
//     }

// 	Nan::Set(obj, Nan::New("vaule").ToLocalChecked(), Nan::New<Number>(clipboardInstance.foo()));

// 	info.GetReturnValue().Set(obj);
// }

// NAN_MODULE_INIT(InitAll)
// {
//     Nan::Set(target, Nan::New("foo").ToLocalChecked(),
// 		Nan::GetFunction(Nan::New<FunctionTemplate>(foo)).ToLocalChecked());
// }

// NODE_MODULE(clipboard, InitAll)