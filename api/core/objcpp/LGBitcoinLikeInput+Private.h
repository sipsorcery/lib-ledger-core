// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "LGBitcoinLikeInput.h"
#include "BitcoinLikeInput.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGBitcoinLikeInput;

namespace djinni_generated {

struct BitcoinLikeInput
{
    using CppType = ::ledger::core::api::BitcoinLikeInput;
    using ObjcType = LGBitcoinLikeInput*;

    using Boxed = BitcoinLikeInput;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated