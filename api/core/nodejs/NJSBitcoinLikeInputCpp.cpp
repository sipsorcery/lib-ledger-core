// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeInputCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeInput::getAddress) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getAddress needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeInput* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeInput>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getAddress : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getAddress();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>((*result)).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getValue) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getValue needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeInput* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeInput>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getValue : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getValue();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::isCoinbase) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::isCoinbase needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeInput* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeInput>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::isCoinbase : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->isCoinbase();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getCoinbase) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getCoinbase needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeInput* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeInput>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getCoinbase : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getCoinbase();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>((*result)).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getPreviousTxHash) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousTxHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeInput* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeInput>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousTxHash : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getPreviousTxHash();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>((*result)).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeInput::getPreviousOutputIndex) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousOutputIndex needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeInput* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeInput>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeInput::getPreviousOutputIndex : implementation of BitcoinLikeInput is not valid");
    }

    auto result = cpp_impl->getPreviousOutputIndex();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>((*result));

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSBitcoinLikeInput::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeInput function can only be called as constructor (use New)");
    }
    NJSBitcoinLikeInput *node_instance = new NJSBitcoinLikeInput(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeInput::BitcoinLikeInput_prototype;

Handle<Object> NJSBitcoinLikeInput::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeInput> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeInput_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBitcoinLikeInput *new_obj = new NJSBitcoinLikeInput(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeInput::wrap: object template not valid");
    }
    return obj;
}

void NJSBitcoinLikeInput::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeInput::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeInput").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getAddress", getAddress);
    Nan::SetPrototypeMethod(func_template,"getValue", getValue);
    Nan::SetPrototypeMethod(func_template,"isCoinbase", isCoinbase);
    Nan::SetPrototypeMethod(func_template,"getCoinbase", getCoinbase);
    Nan::SetPrototypeMethod(func_template,"getPreviousTxHash", getPreviousTxHash);
    Nan::SetPrototypeMethod(func_template,"getPreviousOutputIndex", getPreviousOutputIndex);
    //Set object prototype
    BitcoinLikeInput_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeInput").ToLocalChecked(), func_template->GetFunction());
}
