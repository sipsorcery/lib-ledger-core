// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#ifndef DJINNI_GENERATED_ERROR_HPP
#define DJINNI_GENERATED_ERROR_HPP

#include "ErrorCode.hpp"
#include <iostream>
#include <string>
#include <utility>

namespace ledger { namespace core { namespace api {

struct Error final {
    ErrorCode code;
    std::string message;

    Error(ErrorCode code_,
          std::string message_)
    : code(std::move(code_))
    , message(std::move(message_))
    {}

    Error(const Error& cpy) {
       this->code = cpy.code;
       this->message = cpy.message;
    }

    Error() = default;


    Error& operator=(const Error& cpy) {
       this->code = cpy.code;
       this->message = cpy.message;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(code, message);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(code, message);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ERROR_HPP