// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSBitcoinLikeOutputListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSBitcoinLikeOutputListCallback::onCallback(const std::experimental::optional<std::vector<std::shared_ptr<BitcoinLikeOutput>>> & result, const std::experimental::optional<Error> & error)
{
    //Wrap parameters
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < (*result).size(); i++)
    {
        auto arg_0_elem = NJSBitcoinLikeOutput::wrap((*result)[i]);

        arg_0->Set((int)i,arg_0_elem);
    }

    auto arg_1 = Nan::New<Object>();
    auto arg_1_1 = Nan::New<Integer>((int)(*error).code);
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("code").ToLocalChecked(), arg_1_1);
    auto arg_1_2 = Nan::New<String>((*error).message).ToLocalChecked();
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("message").ToLocalChecked(), arg_1_2);

    Nan::HandleScope scope;
    auto local_resolver = Nan::New<Promise::Resolver>(pers_resolver);
    if(error)
    {
        auto rejected = local_resolver->Reject(Nan::GetCurrentContext(), arg_1);
        rejected.FromJust();
    }
    else
    {
        auto resolve = local_resolver->Resolve(Nan::GetCurrentContext(), arg_0);
        resolve.FromJust();
    }
}

NAN_METHOD(NJSBitcoinLikeOutputListCallback::addRef) {

    NJSBitcoinLikeOutputListCallback *obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeOutputListCallback>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSBitcoinLikeOutputListCallback::removeRef) {

    NJSBitcoinLikeOutputListCallback *obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeOutputListCallback>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSBitcoinLikeOutputListCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeOutputListCallback function can only be called as constructor (use New)");
    }

    NJSBitcoinLikeOutputListCallback *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSBitcoinLikeOutputListCallback(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSBitcoinLikeOutputListCallback::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSBitcoinLikeOutputListCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeOutputListCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeOutputListCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeOutputListCallback").ToLocalChecked(), func_template->GetFunction());
}
