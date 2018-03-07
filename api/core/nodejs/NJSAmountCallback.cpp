// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSAmountCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSAmountCallback::onCallback(const std::shared_ptr<Amount> & result, const std::experimental::optional<Error> & error)
{
    //Wrap parameters
    auto arg_0 = NJSAmount::wrap(result);

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

NAN_METHOD(NJSAmountCallback::addRef) {

    NJSAmountCallback *obj = Nan::ObjectWrap::Unwrap<NJSAmountCallback>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSAmountCallback::removeRef) {

    NJSAmountCallback *obj = Nan::ObjectWrap::Unwrap<NJSAmountCallback>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSAmountCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSAmountCallback function can only be called as constructor (use New)");
    }

    NJSAmountCallback *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSAmountCallback(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSAmountCallback::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSAmountCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSAmountCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSAmountCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSAmountCallback").ToLocalChecked(), func_template->GetFunction());
}
