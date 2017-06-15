/* This file was auto-generated by KreMLin! */
#ifndef __Poly1305_64_H
#define __Poly1305_64_H



#include "kremlib.h"
#include "testlib.h"

typedef uint64_t Hacl_Bignum_Constants_limb;

typedef FStar_UInt128_t Hacl_Bignum_Constants_wide;

typedef FStar_UInt128_t Hacl_Bignum_Wide_t;

typedef uint64_t Hacl_Bignum_Limb_t;

typedef void *Hacl_Impl_Poly1305_64_State_log_t;

typedef uint8_t *Hacl_Impl_Poly1305_64_State_uint8_p;

typedef uint64_t *Hacl_Impl_Poly1305_64_State_bigint;

typedef void *Hacl_Impl_Poly1305_64_State_seqelem;

typedef uint64_t *Hacl_Impl_Poly1305_64_State_elemB;

typedef uint8_t *Hacl_Impl_Poly1305_64_State_wordB;

typedef uint8_t *Hacl_Impl_Poly1305_64_State_wordB_16;

typedef struct 
{
  uint64_t *x00;
  uint64_t *x01;
}
Hacl_Impl_Poly1305_64_State_poly1305_state;

typedef void *Hacl_Impl_Poly1305_64_log_t;

typedef uint64_t *Hacl_Impl_Poly1305_64_bigint;

typedef uint8_t *Hacl_Impl_Poly1305_64_uint8_p;

typedef uint64_t *Hacl_Impl_Poly1305_64_elemB;

typedef uint8_t *Hacl_Impl_Poly1305_64_wordB;

typedef uint8_t *Hacl_Impl_Poly1305_64_wordB_16;

typedef uint8_t *Poly1305_64_uint8_p;

typedef uint64_t Poly1305_64_uint64_t;

void *Poly1305_64_op_String_Access(FStar_HyperStack_mem h, uint8_t *b);

typedef uint8_t *Poly1305_64_key;

typedef Hacl_Impl_Poly1305_64_State_poly1305_state Poly1305_64_state;

Hacl_Impl_Poly1305_64_State_poly1305_state Poly1305_64_mk_state(uint64_t *r, uint64_t *acc);

void Poly1305_64_init(Hacl_Impl_Poly1305_64_State_poly1305_state st, uint8_t *k1);

extern void *Poly1305_64_empty_log;

void Poly1305_64_update_block(Hacl_Impl_Poly1305_64_State_poly1305_state st, uint8_t *m);

void
Poly1305_64_update(Hacl_Impl_Poly1305_64_State_poly1305_state st, uint8_t *m, uint32_t len1);

void
Poly1305_64_update_last(
  Hacl_Impl_Poly1305_64_State_poly1305_state st,
  uint8_t *m,
  uint32_t len1
);

void
Poly1305_64_finish(Hacl_Impl_Poly1305_64_State_poly1305_state st, uint8_t *mac, uint8_t *k1);

void
Poly1305_64_crypto_onetimeauth(uint8_t *output, uint8_t *input, uint64_t len1, uint8_t *k1);
#endif
