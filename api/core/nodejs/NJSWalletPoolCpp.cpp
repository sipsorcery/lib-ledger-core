// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#include "NJSWalletPoolCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSWalletPool::getLogger) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getLogger needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getLogger : implementation of WalletPool is not valid");
    }

    auto result = cpp_impl->getLogger();

    //Wrap result in node object
    auto arg_0 = NJSLogger::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWalletPool::getName) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getName needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getName : implementation of WalletPool is not valid");
    }

    auto result = cpp_impl->getName();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWalletPool::getPreferences) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getPreferences needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getPreferences : implementation of WalletPool is not valid");
    }

    auto result = cpp_impl->getPreferences();

    //Wrap result in node object
    auto arg_0 = NJSPreferences::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWalletPool::getWalletCount) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getWalletCount needs 0 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSI32Callback *njs_ptr_arg_0 = static_cast<NJSI32Callback *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    std::shared_ptr<NJSI32Callback> arg_0(njs_ptr_arg_0);

    //Create promise and set it into Callcack
    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    arg_0->SetPromise(resolver);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getWalletCount : implementation of WalletPool is not valid");
    }
    cpp_impl->getWalletCount(arg_0);
    info.GetReturnValue().Set(resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getWallets) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSWalletPool::getWallets needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();
    Local<Object> njs_arg_2 = info[2]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSWalletListCallback *njs_ptr_arg_2 = static_cast<NJSWalletListCallback *>(Nan::GetInternalFieldPointer(njs_arg_2,0));
    std::shared_ptr<NJSWalletListCallback> arg_2(njs_ptr_arg_2);

    //Create promise and set it into Callcack
    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    arg_2->SetPromise(resolver);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getWallets : implementation of WalletPool is not valid");
    }
    cpp_impl->getWallets(arg_0,arg_1,arg_2);
    info.GetReturnValue().Set(resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getWallet) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPool::getWallet needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSWalletCallback *njs_ptr_arg_1 = static_cast<NJSWalletCallback *>(Nan::GetInternalFieldPointer(njs_arg_1,0));
    std::shared_ptr<NJSWalletCallback> arg_1(njs_ptr_arg_1);

    //Create promise and set it into Callcack
    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    arg_1->SetPromise(resolver);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getWallet : implementation of WalletPool is not valid");
    }
    cpp_impl->getWallet(arg_0,arg_1);
    info.GetReturnValue().Set(resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::createWallet) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSWalletPool::createWallet needs 3 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto field_arg_1_1 = Nan::Get(info[1]->ToObject(), Nan::New<String>("walletType").ToLocalChecked()).ToLocalChecked();
    auto arg_1_1 = (ledger::core::api::WalletType)Nan::To<int>(field_arg_1_1).FromJust();

    auto field_arg_1_2 = Nan::Get(info[1]->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_1_2(field_arg_1_2->ToString());
    auto arg_1_2 = std::string(*string_arg_1_2);

    auto field_arg_1_3 = Nan::Get(info[1]->ToObject(), Nan::New<String>("bip44CoinType").ToLocalChecked()).ToLocalChecked();
    auto arg_1_3 = Nan::To<int32_t>(field_arg_1_3).FromJust();

    auto field_arg_1_4 = Nan::Get(info[1]->ToObject(), Nan::New<String>("paymentUriScheme").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_1_4(field_arg_1_4->ToString());
    auto arg_1_4 = std::string(*string_arg_1_4);

    auto field_arg_1_5 = Nan::Get(info[1]->ToObject(), Nan::New<String>("units").ToLocalChecked()).ToLocalChecked();
    vector<CurrencyUnit> arg_1_5;
    Local<Array> arg_1_5_container = Local<Array>::Cast(field_arg_1_5);
    for(uint32_t i = 0; i < arg_1_5_container->Length(); i++)
    {
        if(arg_1_5_container->Get(i)->IsObject())
        {

            auto field_arg_1_5_elem_1 = Nan::Get(arg_1_5_container->Get(i)->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_1_5_elem_1(field_arg_1_5_elem_1->ToString());
            auto arg_1_5_elem_1 = std::string(*string_arg_1_5_elem_1);

            auto field_arg_1_5_elem_2 = Nan::Get(arg_1_5_container->Get(i)->ToObject(), Nan::New<String>("symbol").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_1_5_elem_2(field_arg_1_5_elem_2->ToString());
            auto arg_1_5_elem_2 = std::string(*string_arg_1_5_elem_2);

            auto field_arg_1_5_elem_3 = Nan::Get(arg_1_5_container->Get(i)->ToObject(), Nan::New<String>("code").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_1_5_elem_3(field_arg_1_5_elem_3->ToString());
            auto arg_1_5_elem_3 = std::string(*string_arg_1_5_elem_3);

            auto field_arg_1_5_elem_4 = Nan::Get(arg_1_5_container->Get(i)->ToObject(), Nan::New<String>("numberOfDecimal").ToLocalChecked()).ToLocalChecked();
            auto arg_1_5_elem_4 = Nan::To<int32_t>(field_arg_1_5_elem_4).FromJust();
            CurrencyUnit arg_1_5_elem(arg_1_5_elem_1, arg_1_5_elem_2, arg_1_5_elem_3, arg_1_5_elem_4);

            arg_1_5.emplace_back(arg_1_5_elem);
        }
    }


    auto field_arg_1_6 = Nan::Get(info[1]->ToObject(), Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();

    auto field_arg_1_6_1 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_1_6_1(field_arg_1_6_1->ToString());
    auto arg_1_6_1 = std::string(*string_arg_1_6_1);

    auto field_arg_1_6_2 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("P2PKHVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_1_6_2;
    Local<Array> arg_1_6_2_container = Local<Array>::Cast(field_arg_1_6_2);
    for(uint32_t i = 0; i < arg_1_6_2_container->Length(); i++)
    {
        if(arg_1_6_2_container->Get(i)->IsUint32())
        {
            auto arg_1_6_2_elem = Nan::To<uint32_t>(arg_1_6_2_container->Get(i)).FromJust();
            arg_1_6_2.emplace_back(arg_1_6_2_elem);
        }
    }


    auto field_arg_1_6_3 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("P2SHVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_1_6_3;
    Local<Array> arg_1_6_3_container = Local<Array>::Cast(field_arg_1_6_3);
    for(uint32_t i = 0; i < arg_1_6_3_container->Length(); i++)
    {
        if(arg_1_6_3_container->Get(i)->IsUint32())
        {
            auto arg_1_6_3_elem = Nan::To<uint32_t>(arg_1_6_3_container->Get(i)).FromJust();
            arg_1_6_3.emplace_back(arg_1_6_3_elem);
        }
    }


    auto field_arg_1_6_4 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_1_6_4;
    Local<Array> arg_1_6_4_container = Local<Array>::Cast(field_arg_1_6_4);
    for(uint32_t i = 0; i < arg_1_6_4_container->Length(); i++)
    {
        if(arg_1_6_4_container->Get(i)->IsUint32())
        {
            auto arg_1_6_4_elem = Nan::To<uint32_t>(arg_1_6_4_container->Get(i)).FromJust();
            arg_1_6_4.emplace_back(arg_1_6_4_elem);
        }
    }


    auto field_arg_1_6_5 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("FeePolicy").ToLocalChecked()).ToLocalChecked();
    auto arg_1_6_5 = (ledger::core::api::BitcoinLikeFeePolicy)Nan::To<int>(field_arg_1_6_5).FromJust();

    auto field_arg_1_6_6 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("DustAmount").ToLocalChecked()).ToLocalChecked();
    auto arg_1_6_6 = Nan::To<int64_t>(field_arg_1_6_6).FromJust();

    auto field_arg_1_6_7 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_1_6_7(field_arg_1_6_7->ToString());
    auto arg_1_6_7 = std::string(*string_arg_1_6_7);

    auto field_arg_1_6_8 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked()).ToLocalChecked();
    auto arg_1_6_8 = Nan::To<bool>(field_arg_1_6_8).FromJust();
    BitcoinLikeNetworkParameters arg_1_6(arg_1_6_1, arg_1_6_2, arg_1_6_3, arg_1_6_4, arg_1_6_5, arg_1_6_6, arg_1_6_7, arg_1_6_8);

    Currency arg_1(arg_1_1, arg_1_2, arg_1_3, arg_1_4, arg_1_5, arg_1_6);

    Local<Object> njs_arg_2 = info[2]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSDynamicObject *njs_ptr_arg_2 = static_cast<NJSDynamicObject *>(Nan::GetInternalFieldPointer(njs_arg_2,0));
    if(!njs_ptr_arg_2)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicObject failed");
    }
    auto arg_2 = njs_ptr_arg_2->getCppImpl();

    Local<Object> njs_arg_3 = info[3]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSWalletCallback *njs_ptr_arg_3 = static_cast<NJSWalletCallback *>(Nan::GetInternalFieldPointer(njs_arg_3,0));
    std::shared_ptr<NJSWalletCallback> arg_3(njs_ptr_arg_3);

    //Create promise and set it into Callcack
    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    arg_3->SetPromise(resolver);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::createWallet : implementation of WalletPool is not valid");
    }
    cpp_impl->createWallet(arg_0,arg_1,arg_2,arg_3);
    info.GetReturnValue().Set(resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getCurrencies) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getCurrencies needs 0 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSCurrencyListCallback *njs_ptr_arg_0 = static_cast<NJSCurrencyListCallback *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    std::shared_ptr<NJSCurrencyListCallback> arg_0(njs_ptr_arg_0);

    //Create promise and set it into Callcack
    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    arg_0->SetPromise(resolver);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getCurrencies : implementation of WalletPool is not valid");
    }
    cpp_impl->getCurrencies(arg_0);
    info.GetReturnValue().Set(resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getCurrency) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPool::getCurrency needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSCurrencyCallback *njs_ptr_arg_1 = static_cast<NJSCurrencyCallback *>(Nan::GetInternalFieldPointer(njs_arg_1,0));
    std::shared_ptr<NJSCurrencyCallback> arg_1(njs_ptr_arg_1);

    //Create promise and set it into Callcack
    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    arg_1->SetPromise(resolver);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getCurrency : implementation of WalletPool is not valid");
    }
    cpp_impl->getCurrency(arg_0,arg_1);
    info.GetReturnValue().Set(resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getLastBlock) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPool::getLastBlock needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBlockCallback *njs_ptr_arg_1 = static_cast<NJSBlockCallback *>(Nan::GetInternalFieldPointer(njs_arg_1,0));
    std::shared_ptr<NJSBlockCallback> arg_1(njs_ptr_arg_1);

    //Create promise and set it into Callcack
    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    arg_1->SetPromise(resolver);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getLastBlock : implementation of WalletPool is not valid");
    }
    cpp_impl->getLastBlock(arg_0,arg_1);
    info.GetReturnValue().Set(resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getEventBus) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getEventBus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSWalletPool* obj = Nan::ObjectWrap::Unwrap<NJSWalletPool>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getEventBus : implementation of WalletPool is not valid");
    }

    auto result = cpp_impl->getEventBus();

    //Wrap result in node object
    auto arg_0 = NJSEventBus::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSWalletPool::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSWalletPool function can only be called as constructor (use New)");
    }
    NJSWalletPool *node_instance = new NJSWalletPool(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSWalletPool::WalletPool_prototype;

Handle<Object> NJSWalletPool::wrap(const std::shared_ptr<ledger::core::api::WalletPool> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(WalletPool_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSWalletPool *new_obj = new NJSWalletPool(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSWalletPool::wrap: object template not valid");
    }
    return obj;
}

void NJSWalletPool::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSWalletPool::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSWalletPool").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getLogger", getLogger);
    Nan::SetPrototypeMethod(func_template,"getName", getName);
    Nan::SetPrototypeMethod(func_template,"getPreferences", getPreferences);
    Nan::SetPrototypeMethod(func_template,"getWalletCount", getWalletCount);
    Nan::SetPrototypeMethod(func_template,"getWallets", getWallets);
    Nan::SetPrototypeMethod(func_template,"getWallet", getWallet);
    Nan::SetPrototypeMethod(func_template,"createWallet", createWallet);
    Nan::SetPrototypeMethod(func_template,"getCurrencies", getCurrencies);
    Nan::SetPrototypeMethod(func_template,"getCurrency", getCurrency);
    Nan::SetPrototypeMethod(func_template,"getLastBlock", getLastBlock);
    Nan::SetPrototypeMethod(func_template,"getEventBus", getEventBus);
    //Set object prototype
    WalletPool_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSWalletPool").ToLocalChecked(), func_template->GetFunction());
}
