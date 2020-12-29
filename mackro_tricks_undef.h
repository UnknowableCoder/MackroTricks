#ifdef MACKRO_TRICKS

/******************************
 *        Mad<ro Trid<s       *
 *                            *
 *  Preprocessing time binary *
 * arithmetic and cycles!     *
 *                            *
 *  By: Nuno Fernandes        *
 *   (a.k.a UnknowableCoder)  *
 *                            *
 ******************************/

//This simply undefines all macros from Mad<ro Trid<s.

#undef MACKRO_EMPTY
#undef MACKRO_DEFER
#undef MACKRO_OBSTRUCT
#undef MACKRO_ABSORB
#undef MACKRO_EXPAND
#undef MACKRO_EVAL
#undef MACKRO_EVAL1
#undef MACKRO_EVAL2
#undef MACKRO_EVAL3
#undef MACKRO_EVAL4
#undef MACKRO_EVAL5
#undef MACKRO_EVAL6
#undef MACKRO_EVAL7
#undef MACKRO_CAT
#undef MACKRO_CAT_H
#undef MACKRO_NOT
#undef MACKRO_NOT_IMP
#undef MACKRO_NOT_0
#undef MACKRO_NOT_1
#undef MACKRO_NOT_
#undef MACKRO_AND
#undef MACKRO_AND_IMP
#undef MACKRO_AND_0
#undef MACKRO_AND_1
#undef MACKRO_AND_
#undef MACKRO_OR
#undef MACKRO_OR_IMP
#undef MACKRO_OR_0
#undef MACKRO_OR_1
#undef MACKRO_OR_
#undef MACKRO_NAND
#undef MACKRO_NAND_IMP
#undef MACKRO_NAND_00
#undef MACKRO_NAND_01
#undef MACKRO_NAND_10
#undef MACKRO_NAND_11
#undef MACKRO_NAND_0
#undef MACKRO_NAND_1
#undef MACKRO_NAND_
#undef MACKRO_NOR
#undef MACKRO_NOR_IMP
#undef MACKRO_NOR_00
#undef MACKRO_NOR_01
#undef MACKRO_NOR_10
#undef MACKRO_NOR_11
#undef MACKRO_NOR_0
#undef MACKRO_NOR_1
#undef MACKRO_NOR_
#undef MACKRO_XOR
#undef MACKRO_XOR_IMP
#undef MACKRO_XOR_00
#undef MACKRO_XOR_01
#undef MACKRO_XOR_10
#undef MACKRO_XOR_11
#undef MACKRO_XOR_0
#undef MACKRO_XOR_1
#undef MACKRO_XOR_
#undef MACKRO_XNOR
#undef MACKRO_XNOR_IMP
#undef MACKRO_XNOR_00
#undef MACKRO_XNOR_01
#undef MACKRO_XNOR_10
#undef MACKRO_XNOR_11
#undef MACKRO_XNOR_0
#undef MACKRO_XNOR_1
#undef MACKRO_XNOR_
#undef MACKRO_IF
#undef MACKRO_IF_0
#undef MACKRO_IF_1
#undef MACKRO_IF_
#undef MACKRO_HEAD
#undef MACKRO_TAIL
#undef MACKRO_FIRST
#undef MACKRO_SECOND
#undef MACKRO_THIRD
#undef MACKRO_FOURTH
#undef MACKRO_FIFTH
#undef MACKRO_PACK
#undef MACKRO_IS_PACK
#undef MACKRO_IS_PACK_IN
#undef MACKRO_IS_PACK_IN_0
#undef MACKRO_IS_PACK_IN_1
#undef MACKRO_IS_PACK_IN_
#undef MACKRO_IF_ELSE
#undef MACKRO_IF_ELSE_1
#undef MACKRO_IF_ELSE_0
#undef MACKRO_IF_ELSE_
#undef MACKRO_BRANCH
#undef MACKRO_BRANCH_IN
#undef MACKRO_BRANCH_H_0
#undef MACKRO_BRANCH_H_1
#undef MACKRO_BRANCH_H_
#undef MACKRO_BRANCH_H_
#undef MACKRO_BRANCH_CONT
#undef MACKRO_BRANCH_STOP
#undef MACKRO_BIT_ADD
#undef MACKRO_BIT_ADD_000
#undef MACKRO_BIT_ADD_001
#undef MACKRO_BIT_ADD_010
#undef MACKRO_BIT_ADD_011
#undef MACKRO_BIT_ADD_100
#undef MACKRO_BIT_ADD_101
#undef MACKRO_BIT_ADD_110
#undef MACKRO_BIT_ADD_111
#undef MACKRO_BIT_SUB
#undef MACKRO_BIT_SUB_000
#undef MACKRO_BIT_SUB_001
#undef MACKRO_BIT_SUB_010
#undef MACKRO_BIT_SUB_011
#undef MACKRO_BIT_SUB_100
#undef MACKRO_BIT_SUB_101
#undef MACKRO_BIT_SUB_110
#undef MACKRO_BIT_SUB_111
#undef MACKRO_BIT_ADD_C
#undef MACKRO_BIT_ADD_C_000
#undef MACKRO_BIT_ADD_C_001
#undef MACKRO_BIT_ADD_C_010
#undef MACKRO_BIT_ADD_C_011
#undef MACKRO_BIT_ADD_C_100
#undef MACKRO_BIT_ADD_C_101
#undef MACKRO_BIT_ADD_C_110
#undef MACKRO_BIT_ADD_C_111
#undef MACKRO_BIT_SUB_C
#undef MACKRO_BIT_SUB_C_000
#undef MACKRO_BIT_SUB_C_001
#undef MACKRO_BIT_SUB_C_010
#undef MACKRO_BIT_SUB_C_011
#undef MACKRO_BIT_SUB_C_100
#undef MACKRO_BIT_SUB_C_101
#undef MACKRO_BIT_SUB_C_110
#undef MACKRO_BIT_SUB_C_111
#undef MACKRO_BIT_ADD_R
#undef MACKRO_BIT_ADD_R_000
#undef MACKRO_BIT_ADD_R_001
#undef MACKRO_BIT_ADD_R_010
#undef MACKRO_BIT_ADD_R_011
#undef MACKRO_BIT_ADD_R_100
#undef MACKRO_BIT_ADD_R_101
#undef MACKRO_BIT_ADD_R_110
#undef MACKRO_BIT_ADD_R_111
#undef MACKRO_BIT_SUB_R
#undef MACKRO_BIT_SUB_R_000
#undef MACKRO_BIT_SUB_R_001
#undef MACKRO_BIT_SUB_R_010
#undef MACKRO_BIT_SUB_R_011
#undef MACKRO_BIT_SUB_R_100
#undef MACKRO_BIT_SUB_R_101
#undef MACKRO_BIT_SUB_R_110
#undef MACKRO_BIT_SUB_R_111
#undef MACKRO_CHAIN_EAT_INITIAL_SEP
#undef MACKRO_EAT_INITIAL_SEP_IN
#undef MACKRO_EAT_INITIAL_SEP_0
#undef MACKRO_EAT_INITIAL_SEP_1
#undef MACKRO_EAT_INITIAL_SEP_
#undef MACKRO_EAT_INITIAL_SEP_CONT
#undef MACKRO_EAT_INITIAL_SEP_STOP
#undef MACKRO_CHAIN_EAT_FINAL_SEP
#undef MACKRO_EAT_FINAL_SEP_IN
#undef MACKRO_EAT_FINAL_SEP_0
#undef MACKRO_EAT_FINAL_SEP_1
#undef MACKRO_EAT_FINAL_SEP_
#undef MACKRO_EAT_FINAL_SEP_CONT
#undef MACKRO_EAT_FINAL_SEP_STOP
#undef MACKRO_CHAIN_REVERSE
#undef MACKRO_REVERSE_START
#undef MACKRO_REVERSE_CHECK_z
#undef MACKRO_REVERSE_CHECK_x
#undef MACKRO_REVERSE_CHECK_1
#undef MACKRO_REVERSE_CHECK_0
#undef MACKRO_REVERSE_CHECK_
#undef MACKRO_REVERSE_A_IN
#undef MACKRO_REVERSE_A_x
#undef MACKRO_REVERSE_A_1
#undef MACKRO_REVERSE_A_0
#undef MACKRO_REVERSE_A_
#undef MACKRO_REVERSE_A_CONT
#undef MACKRO_REVERSE_A_STOP
#undef MACKRO_REVERSE_B_IN
#undef MACKRO_REVERSE_B_z
#undef MACKRO_REVERSE_B_x
#undef MACKRO_REVERSE_B_1
#undef MACKRO_REVERSE_B_0
#undef MACKRO_REVERSE_B_
#undef MACKRO_REVERSE_B_CONT
#undef MACKRO_REVERSE_B_STOP
#undef MACKRO_REVERSE_END
#undef MACKRO_REVERSE_CLEAR
#undef MACKRO_REVERSE_CLEAR_z
#undef MACKRO_REVERSE_CLEAR_1
#undef MACKRO_REVERSE_CLEAR_0
#undef MACKRO_REVERSE_CLEAR_
#undef MACKRO_REVERSE_CLEAR_CONT
#undef MACKRO_REVERSE_CLEAR_STOP
#undef MACKRO_CHAIN_EAT_INITIAL_ZEROS
#undef MACKRO_EAT_INITIAL_ZEROS_IN
#undef MACKRO_EAT_INITIAL_ZEROS_0
#undef MACKRO_EAT_INITIAL_ZEROS_1
#undef MACKRO_EAT_INITIAL_ZEROS_
#undef MACKRO_EAT_INITIAL_ZEROS_CONT
#undef MACKRO_EAT_INITIAL_ZEROS_STOP
#undef MACKRO_EAT_INITIAL_ZEROS_EMPTY
#undef MACKRO_CHAIN_EAT_FINAL_ZEROS
#undef MACKRO_EAT_FINAL_ZEROS_D1
#undef MACKRO_EAT_FINAL_ZEROS_D2
#undef MACKRO_CHAIN_IS_ZERO
#undef MACKRO_CHAIN_IS_ZERO_IN
#undef MACKRO_CHAIN_IS_ZERO_0
#undef MACKRO_CHAIN_IS_ZERO_1
#undef MACKRO_CHAIN_IS_ZERO_
#undef MACKRO_CHAIN_IS_ZERO_CONT
#undef MACKRO_CHAIN_IS_ZERO_FAIL
#undef MACKRO_CHAIN_IS_ZERO_PASS
#undef MACKRO_CHAIN_BITS
#undef MACKRO_BITS_IN
#undef MACKRO_BITS_H_00
#undef MACKRO_BITS_H_01
#undef MACKRO_BITS_H_10
#undef MACKRO_BITS_H_11
#undef MACKRO_BITS_H_0
#undef MACKRO_BITS_H_1
#undef MACKRO_BITS_H_
#undef MACKRO_BITS_OP
#undef MACKRO_BITS_END
#undef MACKRO_BITS_END_0
#undef MACKRO_BITS_END_
#undef MACKRO_BITS_END_1
#undef MACKRO_BITS_END_1_MACKRO_BIT_ADD
#undef MACKRO_BITS_END_1_MACKRO_BIT_SUB
#undef MACKRO_BITS_OUT
#undef MACKRO_BITS_OUT_D
#undef MACKRO_CHAIN_COMPARE
#undef MACKRO_COMPARE_IN
#undef MACKRO_COMPARE_0a0
#undef MACKRO_COMPARE_0a1
#undef MACKRO_COMPARE_1a0
#undef MACKRO_COMPARE_1a1
#undef MACKRO_COMPARE_0a
#undef MACKRO_COMPARE_1a
#undef MACKRO_COMPARE_a0
#undef MACKRO_COMPARE_a1
#undef MACKRO_COMPARE_a
#undef MACKRO_COMPARE_CONT
#undef MACKRO_COMPARE_FAIL
#undef MACKRO_COMPARE_PASS
#undef MACKRO_CHAIN_INTERLEAVE
#undef MACKRO_INTERLEAVE_H
#undef MACKRO_INTERLEAVE_H_0a0
#undef MACKRO_INTERLEAVE_H_0a1
#undef MACKRO_INTERLEAVE_H_1a0
#undef MACKRO_INTERLEAVE_H_1a1
#undef MACKRO_INTERLEAVE_H_a
#undef MACKRO_INTERLEAVE_H_a0
#undef MACKRO_INTERLEAVE_H_a1
#undef MACKRO_INTERLEAVE_H_0a
#undef MACKRO_INTERLEAVE_H_1a
#undef MACKRO_INTERLEAVE_FNONE
#undef MACKRO_INTERLEAVE_SNONE
#undef MACKRO_INTERLEAVE_STOP
#undef MACKRO_INTERLEAVE_CONT
#undef MACKRO_CHAIN_OPERATE
#undef MACKRO_CHAIN_OPERATE_D1
#undef MACKRO_CHAIN_ADD
#undef MACKRO_CHAIN_SUB
#undef MACKRO_CHAIN_INCREMENT
#undef MACKRO_CHAIN_DECREMENT
#undef MACKRO_CHAIN_IS_LESSER_EQUAL
#undef MACKRO_IS_LESSER_EQUAL_D1
#undef MACKRO_CHAIN_IS_GREATER_EQUAL
#undef MACKRO_IS_GREATER_EQUAL_D1
#undef MACKRO_CHAIN_IS_EQUAL
#undef MACKRO_IS_EQUAL_D1
#undef MACKRO_CHAIN_IS_LESSER
#undef MACKRO_IS_LESSER_D1
#undef MACKRO_IS_LESSER_IN
#undef MACKRO_CHAIN_IS_GREATER
#undef MACKRO_IS_GREATER_D1
#undef MACKRO_IS_GREATER_IN
#undef MACKRO_PACK_TO_NUMBER
#undef MACKRO_EAT_INITIAL_SEP
#undef MACKRO_EAT_FINAL_SEP
#undef MACKRO_REVERSE
#undef MACKRO_EAT_INITIAL_ZEROS
#undef MACKRO_EAT_FINAL_ZEROS
#undef MACKRO_INTERLEAVE
#undef MACKRO_OPERATE
#undef MACKRO_ADD
#undef MACKRO_SUB
#undef MACKRO_INCREMENT
#undef MACKRO_DECREMENT
#undef MACKRO_IS_ZERO
#undef MACKRO_IS_ZERO_IN
#undef MACKRO_IS_ZERO_0
#undef MACKRO_IS_ZERO_1
#undef MACKRO_IS_ZERO_
#undef MACKRO_IS_ZERO_CONT
#undef MACKRO_IS_ZERO_FAIL
#undef MACKRO_IS_ZERO_PASS
#undef MACKRO_IS_LESSER_EQUAL
#undef MACKRO_IS_GREATER_EQUAL
#undef MACKRO_IS_EQUAL
#undef MACKRO_IS_GREATER
#undef MACKRO_IS_LESSER
#undef MACKRO_CYCLE
#undef MACKRO_CYCLE_D1
#undef MACKRO_CYCLE_IN
#undef MACKRO_CYCLE_D2
#undef MACKRO_CYCLE_DECIDE_1
#undef MACKRO_CYCLE_DECIDE_0
#undef MACKRO_NUM_TO_VALUE
#undef MACKRO_NUM_TO_VALUE_IN
#undef MACKRO_NUM_TO_VALUE_0
#undef MACKRO_NUM_TO_VALUE_1
#undef MACKRO_NUM_TO_VALUE_
#undef MACKRO_NUM_TO_VALUE_CONT
#undef MACKRO_NUM_TO_VALUE_STOP
#undef MACKRO_TRICKS

#endif