// Copyright (c) 2021-2022, The GNTL Project
// Copyright (c) 2017-2018, The Monero Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Adapted from Java code by Sarang Noether

#pragma once

#ifndef BULLETPROOFS_H
#define BULLETPROOFS_H

#include "rctTypes.h"

namespace rct
{

Bulletproof bulletproof_PROVE(const rct::key &v, const rct::key &gamma);
Bulletproof bulletproof_PROVE(uint64_t v, const rct::key &gamma);
Bulletproof bulletproof_PROVE(const rct::keyV &v, const rct::keyV &gamma);
Bulletproof bulletproof_PROVE(const std::vector<uint64_t> &v, const rct::keyV &gamma);

Bulletproof bulletproof_PROVE_old(const rct::key &v, const rct::key &gamma);
Bulletproof bulletproof_PROVE_old(uint64_t v, const rct::key &gamma);
Bulletproof bulletproof_PROVE_old(const rct::keyV &v, const rct::keyV &gamma);
Bulletproof bulletproof_PROVE_old(const std::vector<uint64_t> &v, const rct::keyV &gamma);

bool bulletproof_VERIFY(const Bulletproof &proof);
bool bulletproof_VERIFY(const std::vector<const Bulletproof*> &proofs);
bool bulletproof_VERIFY(const std::vector<Bulletproof> &proofs);

bool bulletproof_VERIFY_old(const Bulletproof &proof);
bool bulletproof_VERIFY_old(const std::vector<const Bulletproof*> &proofs);
bool bulletproof_VERIFY_old(const std::vector<Bulletproof> &proofs);

}

#endif
