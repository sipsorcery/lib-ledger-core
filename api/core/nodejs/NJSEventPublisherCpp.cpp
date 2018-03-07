// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#include "NJSEventPublisherCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEventPublisher::getEventBus) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEventPublisher::getEventBus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEventPublisher* obj = Nan::ObjectWrap::Unwrap<NJSEventPublisher>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::getEventBus : implementation of EventPublisher is not valid");
    }

    auto result = cpp_impl->getEventBus();

    //Wrap result in node object
    auto arg_0 = NJSEventBus::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEventPublisher::post) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventPublisher::post needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSEvent *njs_ptr_arg_0 = static_cast<NJSEvent *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSEvent failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSEventPublisher* obj = Nan::ObjectWrap::Unwrap<NJSEventPublisher>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::post : implementation of EventPublisher is not valid");
    }
    cpp_impl->post(arg_0);
}
NAN_METHOD(NJSEventPublisher::postSticky) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSEventPublisher::postSticky needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSEvent *njs_ptr_arg_0 = static_cast<NJSEvent *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSEvent failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();

    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEventPublisher* obj = Nan::ObjectWrap::Unwrap<NJSEventPublisher>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::postSticky : implementation of EventPublisher is not valid");
    }
    cpp_impl->postSticky(arg_0,arg_1);
}
NAN_METHOD(NJSEventPublisher::relay) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventPublisher::relay needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSEventBus *njs_ptr_arg_0 = static_cast<NJSEventBus *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSEventBus failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSEventPublisher* obj = Nan::ObjectWrap::Unwrap<NJSEventPublisher>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::relay : implementation of EventPublisher is not valid");
    }
    cpp_impl->relay(arg_0);
}
NAN_METHOD(NJSEventPublisher::newInstance) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventPublisher::newInstance needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSExecutionContext *njs_ptr_arg_0 = static_cast<NJSExecutionContext *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    std::shared_ptr<NJSExecutionContext> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSEventPublisher* obj = Nan::ObjectWrap::Unwrap<NJSEventPublisher>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventPublisher::newInstance : implementation of EventPublisher is not valid");
    }

    auto result = cpp_impl->newInstance(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSEventPublisher::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSEventPublisher::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEventPublisher function can only be called as constructor (use New)");
    }

    //Check if NJSEventPublisher::New called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventPublisher::New needs same number of arguments as ledger::core::api::EventPublisher::newInstance method");
    }

    //Unwrap objects to get C++ classes
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSExecutionContext *njs_ptr_arg_0 = static_cast<NJSExecutionContext *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    std::shared_ptr<NJSExecutionContext> arg_0(njs_ptr_arg_0);


    //Call factory
    auto cpp_instance = ledger::core::api::EventPublisher::newInstance(arg_0);
    NJSEventPublisher *node_instance = new NJSEventPublisher(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSEventPublisher::EventPublisher_prototype;

Handle<Object> NJSEventPublisher::wrap(const std::shared_ptr<ledger::core::api::EventPublisher> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EventPublisher_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSEventPublisher *new_obj = new NJSEventPublisher(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSEventPublisher::wrap: object template not valid");
    }
    return obj;
}

void NJSEventPublisher::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEventPublisher::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEventPublisher").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getEventBus", getEventBus);
    Nan::SetPrototypeMethod(func_template,"post", post);
    Nan::SetPrototypeMethod(func_template,"postSticky", postSticky);
    Nan::SetPrototypeMethod(func_template,"relay", relay);
    //Set object prototype
    EventPublisher_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSEventPublisher").ToLocalChecked(), func_template->GetFunction());
}
