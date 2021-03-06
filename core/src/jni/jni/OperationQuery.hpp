// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_OPERATIONQUERY_HPP_JNI_
#define DJINNI_GENERATED_OPERATIONQUERY_HPP_JNI_

#include "../../api/OperationQuery.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class OperationQuery final : ::djinni::JniInterface<::ledger::core::api::OperationQuery, OperationQuery> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::OperationQuery>;
    using CppOptType = std::shared_ptr<::ledger::core::api::OperationQuery>;
    using JniType = jobject;

    using Boxed = OperationQuery;

    ~OperationQuery();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<OperationQuery>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<OperationQuery>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    OperationQuery();
    friend ::djinni::JniClass<OperationQuery>;
    friend ::djinni::JniInterface<::ledger::core::api::OperationQuery, OperationQuery>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_OPERATIONQUERY_HPP_JNI_
