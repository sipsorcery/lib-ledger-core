// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#include "NJSEthereumLikeWalletCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSEthereumLikeWallet::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEthereumLikeWallet function can only be called as constructor (use New)");
    }
    NJSEthereumLikeWallet *node_instance = new NJSEthereumLikeWallet(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSEthereumLikeWallet::EthereumLikeWallet_prototype;

Handle<Object> NJSEthereumLikeWallet::wrap(const std::shared_ptr<ledger::core::api::EthereumLikeWallet> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EthereumLikeWallet_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSEthereumLikeWallet *new_obj = new NJSEthereumLikeWallet(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSEthereumLikeWallet::wrap: object template not valid");
    }
    return obj;
}

void NJSEthereumLikeWallet::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEthereumLikeWallet::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEthereumLikeWallet").ToLocalChecked());

    //SetPrototypeMethod all methods
    //Set object prototype
    EthereumLikeWallet_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSEthereumLikeWallet").ToLocalChecked(), func_template->GetFunction());
}
