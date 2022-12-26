// Copyright © 2017-2022 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "TWBase.h"

TW_EXTERN_C_BEGIN

/// Private key types, the vast majority of chains use the default, 32-byte key.
TW_EXPORT_ENUM(uint32_t)
enum TWPrivateKeyType {
    TWPrivateKeyTypeDefault = 0,  // 32 bytes long
    TWPrivateKeyTypeCardano = 1,  // 2 extended keys plus chainCode, 96 bytes long, used by Cardano
};

TW_EXTERN_C_END
