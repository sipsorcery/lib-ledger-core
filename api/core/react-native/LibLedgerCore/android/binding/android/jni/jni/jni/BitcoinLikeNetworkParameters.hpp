// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP_JNI_
#define DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP_JNI_

#include "../../include/BitcoinLikeNetworkParameters.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikeNetworkParameters final {
public:
    using CppType = ::ledger::core::api::BitcoinLikeNetworkParameters;
    using JniType = jobject;

    using Boxed = BitcoinLikeNetworkParameters;

    ~BitcoinLikeNetworkParameters();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    BitcoinLikeNetworkParameters();
    friend ::djinni::JniClass<BitcoinLikeNetworkParameters>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("BitcoinLikeNetworkParameters") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;[B[B[BLBitcoinLikeFeePolicy;JLjava/lang/String;ZJ[BLjava/util/ArrayList;)V") };
    const jfieldID field_Identifier { ::djinni::jniGetFieldID(clazz.get(), "Identifier", "Ljava/lang/String;") };
    const jfieldID field_P2PKHVersion { ::djinni::jniGetFieldID(clazz.get(), "P2PKHVersion", "[B") };
    const jfieldID field_P2SHVersion { ::djinni::jniGetFieldID(clazz.get(), "P2SHVersion", "[B") };
    const jfieldID field_XPUBVersion { ::djinni::jniGetFieldID(clazz.get(), "XPUBVersion", "[B") };
    const jfieldID field_FeePolicy { ::djinni::jniGetFieldID(clazz.get(), "FeePolicy", "LBitcoinLikeFeePolicy;") };
    const jfieldID field_DustAmount { ::djinni::jniGetFieldID(clazz.get(), "DustAmount", "J") };
    const jfieldID field_MessagePrefix { ::djinni::jniGetFieldID(clazz.get(), "MessagePrefix", "Ljava/lang/String;") };
    const jfieldID field_UsesTimestampedTransaction { ::djinni::jniGetFieldID(clazz.get(), "UsesTimestampedTransaction", "Z") };
    const jfieldID field_TimestampDelay { ::djinni::jniGetFieldID(clazz.get(), "TimestampDelay", "J") };
    const jfieldID field_SigHash { ::djinni::jniGetFieldID(clazz.get(), "SigHash", "[B") };
    const jfieldID field_AdditionalBIPs { ::djinni::jniGetFieldID(clazz.get(), "AdditionalBIPs", "Ljava/util/ArrayList;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP_JNI_