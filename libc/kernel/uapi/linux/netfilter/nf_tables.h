/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_NF_TABLES_H
#define _LINUX_NF_TABLES_H
#define NFT_TABLE_MAXNAMELEN 32
#define NFT_CHAIN_MAXNAMELEN 32
#define NFT_SET_MAXNAMELEN 32
#define NFT_OBJ_MAXNAMELEN 32
#define NFT_USERDATA_MAXLEN 256
enum nft_registers {
  NFT_REG_VERDICT,
  NFT_REG_1,
  NFT_REG_2,
  NFT_REG_3,
  NFT_REG_4,
  __NFT_REG_MAX,
  NFT_REG32_00 = 8,
  NFT_REG32_01,
  NFT_REG32_02,
  NFT_REG32_03,
  NFT_REG32_04,
  NFT_REG32_05,
  NFT_REG32_06,
  NFT_REG32_07,
  NFT_REG32_08,
  NFT_REG32_09,
  NFT_REG32_10,
  NFT_REG32_11,
  NFT_REG32_12,
  NFT_REG32_13,
  NFT_REG32_14,
  NFT_REG32_15,
};
#define NFT_REG_MAX (__NFT_REG_MAX - 1)
#define NFT_REG_SIZE 16
#define NFT_REG32_SIZE 4
enum nft_verdicts {
  NFT_CONTINUE = - 1,
  NFT_BREAK = - 2,
  NFT_JUMP = - 3,
  NFT_GOTO = - 4,
  NFT_RETURN = - 5,
};
enum nf_tables_msg_types {
  NFT_MSG_NEWTABLE,
  NFT_MSG_GETTABLE,
  NFT_MSG_DELTABLE,
  NFT_MSG_NEWCHAIN,
  NFT_MSG_GETCHAIN,
  NFT_MSG_DELCHAIN,
  NFT_MSG_NEWRULE,
  NFT_MSG_GETRULE,
  NFT_MSG_DELRULE,
  NFT_MSG_NEWSET,
  NFT_MSG_GETSET,
  NFT_MSG_DELSET,
  NFT_MSG_NEWSETELEM,
  NFT_MSG_GETSETELEM,
  NFT_MSG_DELSETELEM,
  NFT_MSG_NEWGEN,
  NFT_MSG_GETGEN,
  NFT_MSG_TRACE,
  NFT_MSG_NEWOBJ,
  NFT_MSG_GETOBJ,
  NFT_MSG_DELOBJ,
  NFT_MSG_GETOBJ_RESET,
  NFT_MSG_MAX,
};
enum nft_list_attributes {
  NFTA_LIST_UNPEC,
  NFTA_LIST_ELEM,
  __NFTA_LIST_MAX
};
#define NFTA_LIST_MAX (__NFTA_LIST_MAX - 1)
enum nft_hook_attributes {
  NFTA_HOOK_UNSPEC,
  NFTA_HOOK_HOOKNUM,
  NFTA_HOOK_PRIORITY,
  NFTA_HOOK_DEV,
  __NFTA_HOOK_MAX
};
#define NFTA_HOOK_MAX (__NFTA_HOOK_MAX - 1)
enum nft_table_flags {
  NFT_TABLE_F_DORMANT = 0x1,
};
enum nft_table_attributes {
  NFTA_TABLE_UNSPEC,
  NFTA_TABLE_NAME,
  NFTA_TABLE_FLAGS,
  NFTA_TABLE_USE,
  __NFTA_TABLE_MAX
};
#define NFTA_TABLE_MAX (__NFTA_TABLE_MAX - 1)
enum nft_chain_attributes {
  NFTA_CHAIN_UNSPEC,
  NFTA_CHAIN_TABLE,
  NFTA_CHAIN_HANDLE,
  NFTA_CHAIN_NAME,
  NFTA_CHAIN_HOOK,
  NFTA_CHAIN_POLICY,
  NFTA_CHAIN_USE,
  NFTA_CHAIN_TYPE,
  NFTA_CHAIN_COUNTERS,
  NFTA_CHAIN_PAD,
  __NFTA_CHAIN_MAX
};
#define NFTA_CHAIN_MAX (__NFTA_CHAIN_MAX - 1)
enum nft_rule_attributes {
  NFTA_RULE_UNSPEC,
  NFTA_RULE_TABLE,
  NFTA_RULE_CHAIN,
  NFTA_RULE_HANDLE,
  NFTA_RULE_EXPRESSIONS,
  NFTA_RULE_COMPAT,
  NFTA_RULE_POSITION,
  NFTA_RULE_USERDATA,
  NFTA_RULE_PAD,
  __NFTA_RULE_MAX
};
#define NFTA_RULE_MAX (__NFTA_RULE_MAX - 1)
enum nft_rule_compat_flags {
  NFT_RULE_COMPAT_F_INV = (1 << 1),
  NFT_RULE_COMPAT_F_MASK = NFT_RULE_COMPAT_F_INV,
};
enum nft_rule_compat_attributes {
  NFTA_RULE_COMPAT_UNSPEC,
  NFTA_RULE_COMPAT_PROTO,
  NFTA_RULE_COMPAT_FLAGS,
  __NFTA_RULE_COMPAT_MAX
};
#define NFTA_RULE_COMPAT_MAX (__NFTA_RULE_COMPAT_MAX - 1)
enum nft_set_flags {
  NFT_SET_ANONYMOUS = 0x1,
  NFT_SET_CONSTANT = 0x2,
  NFT_SET_INTERVAL = 0x4,
  NFT_SET_MAP = 0x8,
  NFT_SET_TIMEOUT = 0x10,
  NFT_SET_EVAL = 0x20,
  NFT_SET_OBJECT = 0x40,
};
enum nft_set_policies {
  NFT_SET_POL_PERFORMANCE,
  NFT_SET_POL_MEMORY,
};
enum nft_set_desc_attributes {
  NFTA_SET_DESC_UNSPEC,
  NFTA_SET_DESC_SIZE,
  __NFTA_SET_DESC_MAX
};
#define NFTA_SET_DESC_MAX (__NFTA_SET_DESC_MAX - 1)
enum nft_set_attributes {
  NFTA_SET_UNSPEC,
  NFTA_SET_TABLE,
  NFTA_SET_NAME,
  NFTA_SET_FLAGS,
  NFTA_SET_KEY_TYPE,
  NFTA_SET_KEY_LEN,
  NFTA_SET_DATA_TYPE,
  NFTA_SET_DATA_LEN,
  NFTA_SET_POLICY,
  NFTA_SET_DESC,
  NFTA_SET_ID,
  NFTA_SET_TIMEOUT,
  NFTA_SET_GC_INTERVAL,
  NFTA_SET_USERDATA,
  NFTA_SET_PAD,
  NFTA_SET_OBJ_TYPE,
  __NFTA_SET_MAX
};
#define NFTA_SET_MAX (__NFTA_SET_MAX - 1)
enum nft_set_elem_flags {
  NFT_SET_ELEM_INTERVAL_END = 0x1,
};
enum nft_set_elem_attributes {
  NFTA_SET_ELEM_UNSPEC,
  NFTA_SET_ELEM_KEY,
  NFTA_SET_ELEM_DATA,
  NFTA_SET_ELEM_FLAGS,
  NFTA_SET_ELEM_TIMEOUT,
  NFTA_SET_ELEM_EXPIRATION,
  NFTA_SET_ELEM_USERDATA,
  NFTA_SET_ELEM_EXPR,
  NFTA_SET_ELEM_PAD,
  NFTA_SET_ELEM_OBJREF,
  __NFTA_SET_ELEM_MAX
};
#define NFTA_SET_ELEM_MAX (__NFTA_SET_ELEM_MAX - 1)
enum nft_set_elem_list_attributes {
  NFTA_SET_ELEM_LIST_UNSPEC,
  NFTA_SET_ELEM_LIST_TABLE,
  NFTA_SET_ELEM_LIST_SET,
  NFTA_SET_ELEM_LIST_ELEMENTS,
  NFTA_SET_ELEM_LIST_SET_ID,
  __NFTA_SET_ELEM_LIST_MAX
};
#define NFTA_SET_ELEM_LIST_MAX (__NFTA_SET_ELEM_LIST_MAX - 1)
enum nft_data_types {
  NFT_DATA_VALUE,
  NFT_DATA_VERDICT = 0xffffff00U,
};
#define NFT_DATA_RESERVED_MASK 0xffffff00U
enum nft_data_attributes {
  NFTA_DATA_UNSPEC,
  NFTA_DATA_VALUE,
  NFTA_DATA_VERDICT,
  __NFTA_DATA_MAX
};
#define NFTA_DATA_MAX (__NFTA_DATA_MAX - 1)
#define NFT_DATA_VALUE_MAXLEN 64
enum nft_verdict_attributes {
  NFTA_VERDICT_UNSPEC,
  NFTA_VERDICT_CODE,
  NFTA_VERDICT_CHAIN,
  __NFTA_VERDICT_MAX
};
#define NFTA_VERDICT_MAX (__NFTA_VERDICT_MAX - 1)
enum nft_expr_attributes {
  NFTA_EXPR_UNSPEC,
  NFTA_EXPR_NAME,
  NFTA_EXPR_DATA,
  __NFTA_EXPR_MAX
};
#define NFTA_EXPR_MAX (__NFTA_EXPR_MAX - 1)
enum nft_immediate_attributes {
  NFTA_IMMEDIATE_UNSPEC,
  NFTA_IMMEDIATE_DREG,
  NFTA_IMMEDIATE_DATA,
  __NFTA_IMMEDIATE_MAX
};
#define NFTA_IMMEDIATE_MAX (__NFTA_IMMEDIATE_MAX - 1)
enum nft_bitwise_attributes {
  NFTA_BITWISE_UNSPEC,
  NFTA_BITWISE_SREG,
  NFTA_BITWISE_DREG,
  NFTA_BITWISE_LEN,
  NFTA_BITWISE_MASK,
  NFTA_BITWISE_XOR,
  __NFTA_BITWISE_MAX
};
#define NFTA_BITWISE_MAX (__NFTA_BITWISE_MAX - 1)
enum nft_byteorder_ops {
  NFT_BYTEORDER_NTOH,
  NFT_BYTEORDER_HTON,
};
enum nft_byteorder_attributes {
  NFTA_BYTEORDER_UNSPEC,
  NFTA_BYTEORDER_SREG,
  NFTA_BYTEORDER_DREG,
  NFTA_BYTEORDER_OP,
  NFTA_BYTEORDER_LEN,
  NFTA_BYTEORDER_SIZE,
  __NFTA_BYTEORDER_MAX
};
#define NFTA_BYTEORDER_MAX (__NFTA_BYTEORDER_MAX - 1)
enum nft_cmp_ops {
  NFT_CMP_EQ,
  NFT_CMP_NEQ,
  NFT_CMP_LT,
  NFT_CMP_LTE,
  NFT_CMP_GT,
  NFT_CMP_GTE,
};
enum nft_cmp_attributes {
  NFTA_CMP_UNSPEC,
  NFTA_CMP_SREG,
  NFTA_CMP_OP,
  NFTA_CMP_DATA,
  __NFTA_CMP_MAX
};
#define NFTA_CMP_MAX (__NFTA_CMP_MAX - 1)
enum nft_range_ops {
  NFT_RANGE_EQ,
  NFT_RANGE_NEQ,
};
enum nft_range_attributes {
  NFTA_RANGE_UNSPEC,
  NFTA_RANGE_SREG,
  NFTA_RANGE_OP,
  NFTA_RANGE_FROM_DATA,
  NFTA_RANGE_TO_DATA,
  __NFTA_RANGE_MAX
};
#define NFTA_RANGE_MAX (__NFTA_RANGE_MAX - 1)
enum nft_lookup_flags {
  NFT_LOOKUP_F_INV = (1 << 0),
};
enum nft_lookup_attributes {
  NFTA_LOOKUP_UNSPEC,
  NFTA_LOOKUP_SET,
  NFTA_LOOKUP_SREG,
  NFTA_LOOKUP_DREG,
  NFTA_LOOKUP_SET_ID,
  NFTA_LOOKUP_FLAGS,
  __NFTA_LOOKUP_MAX
};
#define NFTA_LOOKUP_MAX (__NFTA_LOOKUP_MAX - 1)
enum nft_dynset_ops {
  NFT_DYNSET_OP_ADD,
  NFT_DYNSET_OP_UPDATE,
};
enum nft_dynset_flags {
  NFT_DYNSET_F_INV = (1 << 0),
};
enum nft_dynset_attributes {
  NFTA_DYNSET_UNSPEC,
  NFTA_DYNSET_SET_NAME,
  NFTA_DYNSET_SET_ID,
  NFTA_DYNSET_OP,
  NFTA_DYNSET_SREG_KEY,
  NFTA_DYNSET_SREG_DATA,
  NFTA_DYNSET_TIMEOUT,
  NFTA_DYNSET_EXPR,
  NFTA_DYNSET_PAD,
  NFTA_DYNSET_FLAGS,
  __NFTA_DYNSET_MAX,
};
#define NFTA_DYNSET_MAX (__NFTA_DYNSET_MAX - 1)
enum nft_payload_bases {
  NFT_PAYLOAD_LL_HEADER,
  NFT_PAYLOAD_NETWORK_HEADER,
  NFT_PAYLOAD_TRANSPORT_HEADER,
};
enum nft_payload_csum_types {
  NFT_PAYLOAD_CSUM_NONE,
  NFT_PAYLOAD_CSUM_INET,
};
enum nft_payload_csum_flags {
  NFT_PAYLOAD_L4CSUM_PSEUDOHDR = (1 << 0),
};
enum nft_payload_attributes {
  NFTA_PAYLOAD_UNSPEC,
  NFTA_PAYLOAD_DREG,
  NFTA_PAYLOAD_BASE,
  NFTA_PAYLOAD_OFFSET,
  NFTA_PAYLOAD_LEN,
  NFTA_PAYLOAD_SREG,
  NFTA_PAYLOAD_CSUM_TYPE,
  NFTA_PAYLOAD_CSUM_OFFSET,
  NFTA_PAYLOAD_CSUM_FLAGS,
  __NFTA_PAYLOAD_MAX
};
#define NFTA_PAYLOAD_MAX (__NFTA_PAYLOAD_MAX - 1)
enum nft_exthdr_attributes {
  NFTA_EXTHDR_UNSPEC,
  NFTA_EXTHDR_DREG,
  NFTA_EXTHDR_TYPE,
  NFTA_EXTHDR_OFFSET,
  NFTA_EXTHDR_LEN,
  __NFTA_EXTHDR_MAX
};
#define NFTA_EXTHDR_MAX (__NFTA_EXTHDR_MAX - 1)
enum nft_meta_keys {
  NFT_META_LEN,
  NFT_META_PROTOCOL,
  NFT_META_PRIORITY,
  NFT_META_MARK,
  NFT_META_IIF,
  NFT_META_OIF,
  NFT_META_IIFNAME,
  NFT_META_OIFNAME,
  NFT_META_IIFTYPE,
  NFT_META_OIFTYPE,
  NFT_META_SKUID,
  NFT_META_SKGID,
  NFT_META_NFTRACE,
  NFT_META_RTCLASSID,
  NFT_META_SECMARK,
  NFT_META_NFPROTO,
  NFT_META_L4PROTO,
  NFT_META_BRI_IIFNAME,
  NFT_META_BRI_OIFNAME,
  NFT_META_PKTTYPE,
  NFT_META_CPU,
  NFT_META_IIFGROUP,
  NFT_META_OIFGROUP,
  NFT_META_CGROUP,
  NFT_META_PRANDOM,
};
enum nft_rt_keys {
  NFT_RT_CLASSID,
  NFT_RT_NEXTHOP4,
  NFT_RT_NEXTHOP6,
};
enum nft_hash_attributes {
  NFTA_HASH_UNSPEC,
  NFTA_HASH_SREG,
  NFTA_HASH_DREG,
  NFTA_HASH_LEN,
  NFTA_HASH_MODULUS,
  NFTA_HASH_SEED,
  NFTA_HASH_OFFSET,
  __NFTA_HASH_MAX,
};
#define NFTA_HASH_MAX (__NFTA_HASH_MAX - 1)
enum nft_meta_attributes {
  NFTA_META_UNSPEC,
  NFTA_META_DREG,
  NFTA_META_KEY,
  NFTA_META_SREG,
  __NFTA_META_MAX
};
#define NFTA_META_MAX (__NFTA_META_MAX - 1)
enum nft_rt_attributes {
  NFTA_RT_UNSPEC,
  NFTA_RT_DREG,
  NFTA_RT_KEY,
  __NFTA_RT_MAX
};
#define NFTA_RT_MAX (__NFTA_RT_MAX - 1)
enum nft_ct_keys {
  NFT_CT_STATE,
  NFT_CT_DIRECTION,
  NFT_CT_STATUS,
  NFT_CT_MARK,
  NFT_CT_SECMARK,
  NFT_CT_EXPIRATION,
  NFT_CT_HELPER,
  NFT_CT_L3PROTOCOL,
  NFT_CT_SRC,
  NFT_CT_DST,
  NFT_CT_PROTOCOL,
  NFT_CT_PROTO_SRC,
  NFT_CT_PROTO_DST,
  NFT_CT_LABELS,
  NFT_CT_PKTS,
  NFT_CT_BYTES,
};
enum nft_ct_attributes {
  NFTA_CT_UNSPEC,
  NFTA_CT_DREG,
  NFTA_CT_KEY,
  NFTA_CT_DIRECTION,
  NFTA_CT_SREG,
  __NFTA_CT_MAX
};
#define NFTA_CT_MAX (__NFTA_CT_MAX - 1)
enum nft_limit_type {
  NFT_LIMIT_PKTS,
  NFT_LIMIT_PKT_BYTES
};
enum nft_limit_flags {
  NFT_LIMIT_F_INV = (1 << 0),
};
enum nft_limit_attributes {
  NFTA_LIMIT_UNSPEC,
  NFTA_LIMIT_RATE,
  NFTA_LIMIT_UNIT,
  NFTA_LIMIT_BURST,
  NFTA_LIMIT_TYPE,
  NFTA_LIMIT_FLAGS,
  NFTA_LIMIT_PAD,
  __NFTA_LIMIT_MAX
};
#define NFTA_LIMIT_MAX (__NFTA_LIMIT_MAX - 1)
enum nft_counter_attributes {
  NFTA_COUNTER_UNSPEC,
  NFTA_COUNTER_BYTES,
  NFTA_COUNTER_PACKETS,
  NFTA_COUNTER_PAD,
  __NFTA_COUNTER_MAX
};
#define NFTA_COUNTER_MAX (__NFTA_COUNTER_MAX - 1)
enum nft_log_attributes {
  NFTA_LOG_UNSPEC,
  NFTA_LOG_GROUP,
  NFTA_LOG_PREFIX,
  NFTA_LOG_SNAPLEN,
  NFTA_LOG_QTHRESHOLD,
  NFTA_LOG_LEVEL,
  NFTA_LOG_FLAGS,
  __NFTA_LOG_MAX
};
#define NFTA_LOG_MAX (__NFTA_LOG_MAX - 1)
enum nft_queue_attributes {
  NFTA_QUEUE_UNSPEC,
  NFTA_QUEUE_NUM,
  NFTA_QUEUE_TOTAL,
  NFTA_QUEUE_FLAGS,
  NFTA_QUEUE_SREG_QNUM,
  __NFTA_QUEUE_MAX
};
#define NFTA_QUEUE_MAX (__NFTA_QUEUE_MAX - 1)
#define NFT_QUEUE_FLAG_BYPASS 0x01
#define NFT_QUEUE_FLAG_CPU_FANOUT 0x02
#define NFT_QUEUE_FLAG_MASK 0x03
enum nft_quota_flags {
  NFT_QUOTA_F_INV = (1 << 0),
  NFT_QUOTA_F_DEPLETED = (1 << 1),
};
enum nft_quota_attributes {
  NFTA_QUOTA_UNSPEC,
  NFTA_QUOTA_BYTES,
  NFTA_QUOTA_FLAGS,
  NFTA_QUOTA_PAD,
  NFTA_QUOTA_CONSUMED,
  __NFTA_QUOTA_MAX
};
#define NFTA_QUOTA_MAX (__NFTA_QUOTA_MAX - 1)
enum nft_reject_types {
  NFT_REJECT_ICMP_UNREACH,
  NFT_REJECT_TCP_RST,
  NFT_REJECT_ICMPX_UNREACH,
};
enum nft_reject_inet_code {
  NFT_REJECT_ICMPX_NO_ROUTE = 0,
  NFT_REJECT_ICMPX_PORT_UNREACH,
  NFT_REJECT_ICMPX_HOST_UNREACH,
  NFT_REJECT_ICMPX_ADMIN_PROHIBITED,
  __NFT_REJECT_ICMPX_MAX
};
#define NFT_REJECT_ICMPX_MAX (__NFT_REJECT_ICMPX_MAX - 1)
enum nft_reject_attributes {
  NFTA_REJECT_UNSPEC,
  NFTA_REJECT_TYPE,
  NFTA_REJECT_ICMP_CODE,
  __NFTA_REJECT_MAX
};
#define NFTA_REJECT_MAX (__NFTA_REJECT_MAX - 1)
enum nft_nat_types {
  NFT_NAT_SNAT,
  NFT_NAT_DNAT,
};
enum nft_nat_attributes {
  NFTA_NAT_UNSPEC,
  NFTA_NAT_TYPE,
  NFTA_NAT_FAMILY,
  NFTA_NAT_REG_ADDR_MIN,
  NFTA_NAT_REG_ADDR_MAX,
  NFTA_NAT_REG_PROTO_MIN,
  NFTA_NAT_REG_PROTO_MAX,
  NFTA_NAT_FLAGS,
  __NFTA_NAT_MAX
};
#define NFTA_NAT_MAX (__NFTA_NAT_MAX - 1)
enum nft_masq_attributes {
  NFTA_MASQ_UNSPEC,
  NFTA_MASQ_FLAGS,
  NFTA_MASQ_REG_PROTO_MIN,
  NFTA_MASQ_REG_PROTO_MAX,
  __NFTA_MASQ_MAX
};
#define NFTA_MASQ_MAX (__NFTA_MASQ_MAX - 1)
enum nft_redir_attributes {
  NFTA_REDIR_UNSPEC,
  NFTA_REDIR_REG_PROTO_MIN,
  NFTA_REDIR_REG_PROTO_MAX,
  NFTA_REDIR_FLAGS,
  __NFTA_REDIR_MAX
};
#define NFTA_REDIR_MAX (__NFTA_REDIR_MAX - 1)
enum nft_dup_attributes {
  NFTA_DUP_UNSPEC,
  NFTA_DUP_SREG_ADDR,
  NFTA_DUP_SREG_DEV,
  __NFTA_DUP_MAX
};
#define NFTA_DUP_MAX (__NFTA_DUP_MAX - 1)
enum nft_fwd_attributes {
  NFTA_FWD_UNSPEC,
  NFTA_FWD_SREG_DEV,
  __NFTA_FWD_MAX
};
#define NFTA_FWD_MAX (__NFTA_FWD_MAX - 1)
enum nft_objref_attributes {
  NFTA_OBJREF_UNSPEC,
  NFTA_OBJREF_IMM_TYPE,
  NFTA_OBJREF_IMM_NAME,
  NFTA_OBJREF_SET_SREG,
  NFTA_OBJREF_SET_NAME,
  NFTA_OBJREF_SET_ID,
  __NFTA_OBJREF_MAX
};
#define NFTA_OBJREF_MAX (__NFTA_OBJREF_MAX - 1)
enum nft_gen_attributes {
  NFTA_GEN_UNSPEC,
  NFTA_GEN_ID,
  __NFTA_GEN_MAX
};
#define NFTA_GEN_MAX (__NFTA_GEN_MAX - 1)
enum nft_fib_attributes {
  NFTA_FIB_UNSPEC,
  NFTA_FIB_DREG,
  NFTA_FIB_RESULT,
  NFTA_FIB_FLAGS,
  __NFTA_FIB_MAX
};
#define NFTA_FIB_MAX (__NFTA_FIB_MAX - 1)
enum nft_fib_result {
  NFT_FIB_RESULT_UNSPEC,
  NFT_FIB_RESULT_OIF,
  NFT_FIB_RESULT_OIFNAME,
  NFT_FIB_RESULT_ADDRTYPE,
  __NFT_FIB_RESULT_MAX
};
#define NFT_FIB_RESULT_MAX (__NFT_FIB_RESULT_MAX - 1)
enum nft_fib_flags {
  NFTA_FIB_F_SADDR = 1 << 0,
  NFTA_FIB_F_DADDR = 1 << 1,
  NFTA_FIB_F_MARK = 1 << 2,
  NFTA_FIB_F_IIF = 1 << 3,
  NFTA_FIB_F_OIF = 1 << 4,
};
#define NFT_OBJECT_UNSPEC 0
#define NFT_OBJECT_COUNTER 1
#define NFT_OBJECT_QUOTA 2
#define __NFT_OBJECT_MAX 3
#define NFT_OBJECT_MAX (__NFT_OBJECT_MAX - 1)
enum nft_object_attributes {
  NFTA_OBJ_UNSPEC,
  NFTA_OBJ_TABLE,
  NFTA_OBJ_NAME,
  NFTA_OBJ_TYPE,
  NFTA_OBJ_DATA,
  NFTA_OBJ_USE,
  __NFTA_OBJ_MAX
};
#define NFTA_OBJ_MAX (__NFTA_OBJ_MAX - 1)
enum nft_trace_attributes {
  NFTA_TRACE_UNSPEC,
  NFTA_TRACE_TABLE,
  NFTA_TRACE_CHAIN,
  NFTA_TRACE_RULE_HANDLE,
  NFTA_TRACE_TYPE,
  NFTA_TRACE_VERDICT,
  NFTA_TRACE_ID,
  NFTA_TRACE_LL_HEADER,
  NFTA_TRACE_NETWORK_HEADER,
  NFTA_TRACE_TRANSPORT_HEADER,
  NFTA_TRACE_IIF,
  NFTA_TRACE_IIFTYPE,
  NFTA_TRACE_OIF,
  NFTA_TRACE_OIFTYPE,
  NFTA_TRACE_MARK,
  NFTA_TRACE_NFPROTO,
  NFTA_TRACE_POLICY,
  NFTA_TRACE_PAD,
  __NFTA_TRACE_MAX
};
#define NFTA_TRACE_MAX (__NFTA_TRACE_MAX - 1)
enum nft_trace_types {
  NFT_TRACETYPE_UNSPEC,
  NFT_TRACETYPE_POLICY,
  NFT_TRACETYPE_RETURN,
  NFT_TRACETYPE_RULE,
  __NFT_TRACETYPE_MAX
};
#define NFT_TRACETYPE_MAX (__NFT_TRACETYPE_MAX - 1)
enum nft_ng_attributes {
  NFTA_NG_UNSPEC,
  NFTA_NG_DREG,
  NFTA_NG_MODULUS,
  NFTA_NG_TYPE,
  NFTA_NG_OFFSET,
  __NFTA_NG_MAX
};
#define NFTA_NG_MAX (__NFTA_NG_MAX - 1)
enum nft_ng_types {
  NFT_NG_INCREMENTAL,
  NFT_NG_RANDOM,
  __NFT_NG_MAX
};
#define NFT_NG_MAX (__NFT_NG_MAX - 1)
#endif
