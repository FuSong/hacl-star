/* This file was auto-generated by KreMLin! */
#include "kremlib.h"
#ifndef __Ed25519_H
#define __Ed25519_H


#include "FStar.h"


typedef uint64_t Hacl_Lib_Create64_h64;

typedef uint64_t Hacl_Bignum_Constants_limb;

typedef FStar_UInt128_uint128 Hacl_Bignum_Constants_wide;

typedef uint64_t Hacl_Bignum_Parameters_limb;

typedef FStar_UInt128_uint128 Hacl_Bignum_Parameters_wide;

typedef uint32_t Hacl_Bignum_Parameters_ctr;

typedef uint64_t *Hacl_Bignum_Parameters_felem;

typedef FStar_UInt128_uint128 *Hacl_Bignum_Parameters_felem_wide;

typedef void *Hacl_Bignum_Parameters_seqelem;

typedef void *Hacl_Bignum_Parameters_seqelem_wide;

typedef FStar_UInt128_uint128 Hacl_Bignum_Wide_t;

typedef uint64_t Hacl_Bignum_Limb_t;

typedef Prims_int Hacl_Spec_Bignum_Field_elem;

extern void
Hacl_Spec_Bignum_Field_lemma_addition_associativity(Prims_int x0, Prims_int x1, Prims_int x2);

extern void
Hacl_Spec_Bignum_Field_lemma_multiplication_associativity(
  Prims_int x0,
  Prims_int x1,
  Prims_int x2
);

extern void Hacl_Spec_Bignum_Field_lemma_addition_symmetry(Prims_int x0);

extern void Hacl_Spec_Bignum_Field_lemma_multiplication_symmetry(Prims_int x0);

typedef Prims_int Hacl_Spec_Bignum_elem;

typedef void *Hacl_Spec_EC_AddAndDouble2_s_513;

typedef void *Hacl_Spec_EC_AddAndDouble2_s_52;

typedef void *Hacl_Spec_EC_AddAndDouble2_s_53;

typedef void *Hacl_Spec_EC_AddAndDouble2_s_5413;

typedef void *Hacl_Spec_Bignum_Crecip_s_513;

extern void Hacl_Bignum_lemma_diff(Prims_int x0, Prims_int x1, Prims_pos x2);

typedef Prims_nat Hacl_Spec_EC_Format_Lemmas_u51;

typedef struct 
{
  void *fst;
  void *snd;
}
K___FStar_Seq_Base_seq_uint64_t_FStar_Seq_Base_seq_uint64_t;

typedef K___FStar_Seq_Base_seq_uint64_t_FStar_Seq_Base_seq_uint64_t Hacl_Spec_EC_Point_spoint;

typedef void *Hacl_Spec_EC_Point_s_513;

typedef K___FStar_Seq_Base_seq_uint64_t_FStar_Seq_Base_seq_uint64_t
Hacl_Spec_EC_Point_spoint_513;

typedef void *Hacl_Spec_EC_Format_uint8_s;

typedef uint64_t *Hacl_EC_Point_point;

typedef uint8_t *Hacl_EC_Format_uint8_p;

typedef uint64_t Hacl_Bignum25519_limb;

typedef uint64_t *Hacl_Bignum25519_felem;

typedef void *Hacl_Bignum25519_seqelem;

typedef uint64_t *Hacl_Impl_Ed25519_ExtPoint_point;

typedef uint8_t *Hacl_Impl_Store51_uint8_p;

typedef uint64_t *Hacl_Impl_Store51_felem;

typedef uint8_t *Hacl_Impl_Ed25519_PointCompress_hint8_p;

typedef uint64_t *Hacl_Impl_Ed25519_PointCompress_hint64_p;

typedef uint64_t *Hacl_Impl_Ed25519_SwapConditional_felem;

typedef uint8_t *Hacl_Impl_Ed25519_Ladder_Step_uint8_p;

typedef uint64_t *Hacl_Impl_Ed25519_Ladder_elemB;

typedef uint8_t *Hacl_Hash_Lib_LoadStore_uint8_p;

typedef uint8_t Hacl_Hash_Lib_Create_uint8_t;

typedef uint32_t Hacl_Hash_Lib_Create_uint32_t;

typedef uint64_t Hacl_Hash_Lib_Create_uint64_t;

typedef uint8_t Hacl_Hash_Lib_Create_uint8_ht;

typedef uint32_t Hacl_Hash_Lib_Create_uint32_ht;

typedef uint64_t Hacl_Hash_Lib_Create_uint64_ht;

typedef uint8_t *Hacl_Hash_Lib_Create_uint8_p;

typedef uint32_t *Hacl_Hash_Lib_Create_uint32_p;

typedef uint64_t *Hacl_Hash_Lib_Create_uint64_p;

typedef uint8_t Hacl_Hash_SHA2_512_Lemmas_uint8_t;

typedef uint32_t Hacl_Hash_SHA2_512_Lemmas_uint32_t;

typedef uint64_t Hacl_Hash_SHA2_512_Lemmas_uint64_t;

typedef uint8_t Hacl_Hash_SHA2_512_Lemmas_uint8_ht;

typedef uint32_t Hacl_Hash_SHA2_512_Lemmas_uint32_ht;

typedef uint64_t Hacl_Hash_SHA2_512_Lemmas_uint64_ht;

typedef FStar_UInt128_uint128 Hacl_Hash_SHA2_512_Lemmas_uint128_ht;

typedef uint64_t *Hacl_Hash_SHA2_512_Lemmas_uint64_p;

typedef uint8_t *Hacl_Hash_SHA2_512_Lemmas_uint8_p;

typedef uint8_t Hacl_Hash_SHA2_512_uint8_t;

typedef uint32_t Hacl_Hash_SHA2_512_uint32_t;

typedef uint64_t Hacl_Hash_SHA2_512_uint64_t;

typedef uint8_t Hacl_Hash_SHA2_512_uint8_ht;

typedef uint32_t Hacl_Hash_SHA2_512_uint32_ht;

typedef uint64_t Hacl_Hash_SHA2_512_uint64_ht;

typedef FStar_UInt128_uint128 Hacl_Hash_SHA2_512_uint128_ht;

typedef uint64_t *Hacl_Hash_SHA2_512_uint64_p;

typedef uint8_t *Hacl_Hash_SHA2_512_uint8_p;

typedef uint8_t SHA2_512_uint8_t;

typedef uint32_t SHA2_512_uint32_t;

typedef uint64_t SHA2_512_uint64_t;

typedef uint8_t SHA2_512_uint8_ht;

typedef uint32_t SHA2_512_uint32_ht;

typedef uint64_t SHA2_512_uint64_ht;

typedef FStar_UInt128_uint128 SHA2_512_uint128_ht;

typedef uint64_t *SHA2_512_uint64_p;

typedef uint8_t *SHA2_512_uint8_p;

typedef uint8_t *Hacl_Impl_Ed25519_SecretExpand_hint8_p;

typedef uint8_t *Hacl_Impl_Ed25519_SecretToPublic_hint8_p;

typedef Prims_nat Hacl_Impl_Ed25519_Verify_Lemmas_u51;

typedef void *Hacl_Spec_BignumQ_Eval_qelem;

typedef uint32_t Hacl_Spec_BignumQ_Eval_u32;

typedef uint64_t Hacl_Spec_BignumQ_Eval_u64;

typedef uint8_t *Hacl_Impl_Ed25519_PointEqual_uint8_p;

typedef uint64_t *Hacl_Impl_Ed25519_PointEqual_felem;

typedef uint32_t Hacl_Impl_Load56_u32;

typedef uint8_t Hacl_Impl_Load56_h8;

typedef uint64_t Hacl_Impl_Load56_h64;

typedef uint8_t *Hacl_Impl_Load56_hint8_p;

typedef uint64_t *Hacl_Impl_Ed25519_RecoverX_elemB;

typedef uint32_t Hacl_Impl_Load51_u32;

typedef uint8_t Hacl_Impl_Load51_h8;

typedef uint64_t Hacl_Impl_Load51_h64;

typedef uint8_t *Hacl_Impl_Load51_hint8_p;

typedef uint8_t *Hacl_Impl_Store56_hint8_p;

typedef uint64_t *Hacl_Impl_Store56_qelem;

typedef uint8_t *Hacl_Impl_SHA512_Ed25519_1_hint8_p;

typedef uint8_t *Hacl_Impl_SHA512_Ed25519_hint8_p;

typedef uint8_t *Hacl_Impl_Sha512_hint8_p;

typedef FStar_UInt128_uint128 Hacl_Lib_Create128_h128;

typedef uint64_t Hacl_Spec_BignumQ_Mul_Lemmas_3_u56;

typedef Prims_nat Hacl_Spec_BignumQ_Mul_Lemmas_1_u56;

typedef void *Hacl_Spec_BignumQ_Mul_qelem_56;

typedef uint64_t *Hacl_Impl_BignumQ_Mul_qelemB;

typedef uint64_t Hacl_Impl_BignumQ_Mul_h64;

typedef uint8_t *Hacl_Impl_Ed25519_Verify_Steps_uint8_p;

typedef uint64_t *Hacl_Impl_Ed25519_Verify_Steps_felem;

typedef uint8_t *Hacl_Impl_Ed25519_Verify_uint8_p;

typedef uint64_t *Hacl_Impl_Ed25519_Verify_felem;

typedef uint8_t *Hacl_Impl_Ed25519_Sign_Steps_hint8_p;

typedef uint8_t *Hacl_Impl_Ed25519_Sign_hint8_p;

typedef uint8_t *Ed25519_uint8_p;

typedef uint8_t *Ed25519_hint8_p;

void *Ed25519_op_String_Access(FStar_Monotonic_HyperStack_mem h, uint8_t *b);

void Ed25519_sign(uint8_t *signature, uint8_t *secret, uint8_t *msg, uint32_t len1);

bool Ed25519_verify(uint8_t *public, uint8_t *msg, uint32_t len1, uint8_t *signature);

void Ed25519_secret_to_public(uint8_t *out, uint8_t *secret);
#endif
