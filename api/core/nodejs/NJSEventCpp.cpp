// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#include "NJSEventCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEvent::getCode) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEvent::getCode needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEvent* obj = Nan::ObjectWrap::Unwrap<NJSEvent>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEvent::getCode : implementation of Event is not valid");
    }

    auto result = cpp_impl->getCode();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEvent::getPayload) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEvent::getPayload needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEvent* obj = Nan::ObjectWrap::Unwrap<NJSEvent>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEvent::getPayload : implementation of Event is not valid");
    }

    auto result = cpp_impl->getPayload();

    //Wrap result in node object
    auto arg_0 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEvent::isSticky) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEvent::isSticky needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEvent* obj = Nan::ObjectWrap::Unwrap<NJSEvent>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEvent::isSticky : implementation of Event is not valid");
    }

    auto result = cpp_impl->isSticky();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEvent::getStickyTag) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEvent::getStickyTag needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEvent* obj = Nan::ObjectWrap::Unwrap<NJSEvent>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEvent::getStickyTag : implementation of Event is not valid");
    }

    auto result = cpp_impl->getStickyTag();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEvent::newInstance) {
    Nan::HandleScope scope;

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSEvent::newInstance needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::EventCode)Nan::To<int>(info[0]).FromJust();
    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSDynamicObject *njs_ptr_arg_1 = static_cast<NJSDynamicObject *>(Nan::GetInternalFieldPointer(njs_arg_1,0));
    if(!njs_ptr_arg_1)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicObject failed");
    }
    auto arg_1 = njs_ptr_arg_1->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSEvent* obj = Nan::ObjectWrap::Unwrap<NJSEvent>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEvent::newInstance : implementation of Event is not valid");
    }

    auto result = cpp_impl->newInstance(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSEvent::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}

NAN_METHOD(NJSEvent::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEvent function can only be called as constructor (use New)");
    }

    //Check if NJSEvent::New called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSEvent::New needs same number of arguments as ledger::core::api::Event::newInstance method");
    }

    //Unwrap objects to get C++ classes
    auto arg_0 = (ledger::core::api::EventCode)Nan::To<int>(info[0]).FromJust();
    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSDynamicObject *njs_ptr_arg_1 = static_cast<NJSDynamicObject *>(Nan::GetInternalFieldPointer(njs_arg_1,0));
    if(!njs_ptr_arg_1)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicObject failed");
    }
    auto arg_1 = njs_ptr_arg_1->getCppImpl();


    //Call factory
    auto cpp_instance = ledger::core::api::Event::newInstance(arg_0,arg_1);
    NJSEvent *node_instance = new NJSEvent(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSEvent::Event_prototype;

Handle<Object> NJSEvent::wrap(const std::shared_ptr<ledger::core::api::Event> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Event_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSEvent *new_obj = new NJSEvent(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSEvent::wrap: object template not valid");
    }
    return obj;
}

void NJSEvent::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEvent::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEvent").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getCode", getCode);
    Nan::SetPrototypeMethod(func_template,"getPayload", getPayload);
    Nan::SetPrototypeMethod(func_template,"isSticky", isSticky);
    Nan::SetPrototypeMethod(func_template,"getStickyTag", getStickyTag);
    //Set object prototype
    Event_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSEvent").ToLocalChecked(), func_template->GetFunction());
}
