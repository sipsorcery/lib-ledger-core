// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#include "StringArrayCallback.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

StringArrayCallback::StringArrayCallback() : ::djinni::JniInterface<::ledger::core::api::StringArrayCallback, StringArrayCallback>() {}

StringArrayCallback::~StringArrayCallback() = default;

StringArrayCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

StringArrayCallback::JavaProxy::~JavaProxy() = default;

void StringArrayCallback::JavaProxy::onCallback(const std::vector<std::string> & c_strs) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::StringArrayCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::List<::djinni::String>::fromCpp(jniEnv, c_strs)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated