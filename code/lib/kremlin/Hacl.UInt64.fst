module Hacl.UInt64
(* This module generated automatically using [mk_int.sh] *)

include FStar.UInt64

inline_for_extraction val gt_mask: a:t -> b:t -> Tot (c:t{(v a > v b ==> v c = pow2 n - 1) /\ (v a <= v b ==> v c = 0)})
inline_for_extraction let gt_mask a b =
  FStar.UInt.lognot_lemma_1 #n;
  FStar.UInt.(lognot_self (zero n));
  lognot (gte_mask b a)

inline_for_extraction val lt_mask: a:t -> b:t -> Tot (c:t{(v a < v b ==> v c = pow2 n - 1) /\ (v a >= v b ==> v c = 0)})
inline_for_extraction let lt_mask a b =
  FStar.UInt.lognot_lemma_1 #n;
  FStar.UInt.(lognot_self (zero n));
  lognot (gte_mask a b)

inline_for_extraction val lte_mask: a:t -> b:t -> Tot (c:t{(v a <= v b ==> v c = pow2 n - 1) /\ (v a > v b ==> v c = 0)})
inline_for_extraction let lte_mask a b =
  FStar.UInt.lognot_lemma_1 #n;
  FStar.UInt.(lognot_self (zero n));
  lognot (gt_mask a b)
