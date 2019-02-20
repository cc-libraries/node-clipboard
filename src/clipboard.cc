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

using namespace v8;

namespace cclib {

//TODO:
// Nan::Persistent<FunctionTemplate> Clipboard::constructor_template;

NAN_MODULE_INIT(Clipboard::Init) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> t = Nan::New<FunctionTemplate>(New);

    t->InstanceTemplate()->SetInternalFieldCount(1);
    t->SetClassName(Nan::New("Clipboard").ToLocalChecked());

    Nan::SetPrototypeMethod(t, "foo", foo);

    //TODO:
    // constructor_template.Reset(t);

    Nan::Set(target, Nan::New("Clipboard").ToLocalChecked(),
        Nan::GetFunction(t).ToLocalChecked());
}

NAN_METHOD(Clipboard::New) {
    if (!info.IsConstructCall()) {
        return Nan::ThrowTypeError("Use the new operator to create new Clipboard objects");
    }

    Clipboard* db = new Clipboard();
    db->Wrap(info.This());

    info.GetReturnValue().Set(info.This());
}

NAN_METHOD(Clipboard::foo) {
    // size_t value = 100;
	// info.GetReturnValue().Set(Nan::New(value).ToLocalChecked());
    Local<Object> obj = Nan::New<Object>();
    Nan::Set(obj, Nan::New("vaule").ToLocalChecked(), Nan::New<Number>(100));
    info.GetReturnValue().Set(obj);
}

} //namespace cclib