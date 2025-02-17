/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/filters/network/http_connection_manager/v3/http_connection_manager.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/extensions/filters/network/http_connection_manager/v3/http_connection_manager.upb.h"
#include "envoy/config/accesslog/v3/accesslog.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/config_source.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/core/v3/protocol.upb.h"
#include "envoy/config/core/v3/substitution_format_string.upb.h"
#include "envoy/config/route/v3/route.upb.h"
#include "envoy/config/route/v3/scoped_route.upb.h"
#include "envoy/config/trace/v3/http_tracer.upb.h"
#include "envoy/type/http/v3/path_transformation.upb.h"
#include "envoy/type/tracing/v3/custom_tag.upb.h"
#include "envoy/type/v3/percent.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/security.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_submsgs[22] = {
  {.submsg = &envoy_config_accesslog_v3_AccessLog_msginit},
  {.submsg = &envoy_config_core_v3_Http1ProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_Http2ProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_Http3ProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_HttpProtocolOptions_msginit},
  {.submsg = &envoy_config_core_v3_SchemeHeaderTransformation_msginit},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
  {.submsg = &envoy_config_route_v3_RouteConfiguration_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_ProxyStatusConfig_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_Rds_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager__fields[47] = {
  {1, UPB_SIZE(4, 4), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {2, UPB_SIZE(32, 32), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {3, UPB_SIZE(164, 296), UPB_SIZE(-169, -305), 16, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(164, 296), UPB_SIZE(-169, -305), 7, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(148, 264), 0, 14, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {6, UPB_SIZE(56, 80), 1, 19, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {7, UPB_SIZE(60, 88), 2, 12, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {8, UPB_SIZE(64, 96), 3, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {9, UPB_SIZE(68, 104), 4, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {10, UPB_SIZE(40, 48), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {12, UPB_SIZE(72, 112), 5, 20, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {13, UPB_SIZE(152, 272), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {14, UPB_SIZE(76, 120), 6, 19, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {15, UPB_SIZE(80, 128), 7, 19, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {16, UPB_SIZE(8, 8), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {17, UPB_SIZE(84, 136), 8, 11, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {18, UPB_SIZE(24, 24), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {19, UPB_SIZE(20, 20), 0, 0, 13, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {20, UPB_SIZE(25, 25), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {21, UPB_SIZE(26, 26), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {22, UPB_SIZE(48, 64), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {23, UPB_SIZE(156, 280), 0, 13, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {24, UPB_SIZE(88, 144), 9, 20, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {25, UPB_SIZE(92, 152), 10, 8, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {26, UPB_SIZE(96, 160), 11, 20, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {28, UPB_SIZE(100, 168), 12, 20, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {29, UPB_SIZE(104, 176), 13, 21, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {30, UPB_SIZE(108, 184), 14, 19, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {31, UPB_SIZE(164, 296), UPB_SIZE(-169, -305), 18, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {32, UPB_SIZE(27, 27), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {33, UPB_SIZE(28, 28), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {34, UPB_SIZE(12, 12), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {35, UPB_SIZE(112, 192), 15, 4, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {36, UPB_SIZE(116, 200), 16, 17, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {37, UPB_SIZE(29, 29), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {38, UPB_SIZE(120, 208), 17, 15, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {39, UPB_SIZE(30, 30), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {40, UPB_SIZE(124, 216), 18, 19, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {41, UPB_SIZE(128, 224), 19, 20, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {42, UPB_SIZE(172, 308), UPB_SIZE(-177, -313), 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {43, UPB_SIZE(132, 232), 20, 9, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {44, UPB_SIZE(136, 240), 21, 3, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {45, UPB_SIZE(16, 16), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {46, UPB_SIZE(160, 288), 0, 6, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {47, UPB_SIZE(31, 31), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {48, UPB_SIZE(140, 248), 22, 5, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {49, UPB_SIZE(144, 256), 23, 10, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager__fields[0],
  UPB_SIZE(184, 320), 47, upb_ExtMode_NonExtendable, 10, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_submsgs[4] = {
  {.submsg = &envoy_config_trace_v3_Tracing_Http_msginit},
  {.submsg = &envoy_type_tracing_v3_CustomTag_msginit},
  {.submsg = &envoy_type_v3_Percent_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing__fields[7] = {
  {3, UPB_SIZE(4, 8), 1, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(8, 16), 2, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(12, 24), 3, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {6, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {7, UPB_SIZE(16, 32), 4, 3, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {8, UPB_SIZE(24, 48), 0, 1, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {9, UPB_SIZE(20, 40), 5, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing__fields[0],
  UPB_SIZE(32, 56), 7, upb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig_msginit = {
  NULL,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_submsgs[1] = {
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails__fields[5] = {
  {1, UPB_SIZE(8, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {4, UPB_SIZE(2, 2), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {5, UPB_SIZE(3, 3), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 4), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails__fields[0],
  UPB_SIZE(16, 16), 5, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_submsgs[2] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 32), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 1, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig__fields[0],
  UPB_SIZE(24, 48), 3, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_submsgs[1] = {
  {.submsg = &envoy_type_http_v3_PathTransformation_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions__fields[0],
  UPB_SIZE(16, 24), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_ProxyStatusConfig__fields[6] = {
  {1, UPB_SIZE(0, 0), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {2, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {3, UPB_SIZE(2, 2), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {4, UPB_SIZE(3, 3), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_ProxyStatusConfig_msginit = {
  NULL,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_ProxyStatusConfig__fields[0],
  UPB_SIZE(16, 32), 6, upb_ExtMode_NonExtendable, 6, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_SubstitutionFormatString_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig__fields[2] = {
  {1, UPB_SIZE(8, 16), 0, 1, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig__fields[0],
  UPB_SIZE(16, 24), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_submsgs[5] = {
  {.submsg = &envoy_config_accesslog_v3_AccessLogFilter_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_HeaderValueOption_msginit},
  {.submsg = &envoy_config_core_v3_SubstitutionFormatString_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper__fields[5] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 4, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 3, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32), 4, 3, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(20, 40), 0, 2, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper__fields[0],
  UPB_SIZE(24, 48), 5, upb_ExtMode_NonExtendable, 5, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_Rds_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_Rds__fields[2] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_Rds_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_Rds_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_Rds__fields[0],
  UPB_SIZE(16, 32), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_submsgs[1] = {
  {.submsg = &envoy_config_route_v3_ScopedRouteConfiguration_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_submsgs[4] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_msginit},
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes__fields[5] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), 1, 3, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(20, 40), UPB_SIZE(-25, -49), 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(20, 40), UPB_SIZE(-25, -49), 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes__fields[0],
  UPB_SIZE(32, 64), 5, upb_ExtMode_NonExtendable, 5, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_submsgs[1] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_submsgs[1] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_submsgs[1] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor__fields[4] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), UPB_SIZE(-21, -41), 0, 13, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32), UPB_SIZE(-21, -41), 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor__fields[0],
  UPB_SIZE(24, 48), 4, upb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement_msginit = {
  NULL,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement__fields[0],
  UPB_SIZE(16, 32), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds__fields[2] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds__fields[0],
  UPB_SIZE(16, 32), 2, upb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_ExtensionConfigSource_msginit},
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter__fields[4] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 24), UPB_SIZE(-17, -33), 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(12, 24), UPB_SIZE(-17, -33), 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {6, UPB_SIZE(0, 0), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter__fields[0],
  UPB_SIZE(24, 48), 4, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager_submsgs[1] = {
  {.submsg = &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_msginit},
};

static const upb_MiniTable_Field envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager_msginit = {
  &envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager_submsgs[0],
  &envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager__fields[0],
  UPB_SIZE(8, 16), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[20] = {
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_Tracing_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_InternalAddressConfig_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_SetCurrentClientCertDetails_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_UpgradeConfig_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_PathNormalizationOptions_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpConnectionManager_ProxyStatusConfig_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_LocalReplyConfig_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ResponseMapper_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_Rds_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRouteConfigurationsList_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRoutes_ScopeKeyBuilder_FragmentBuilder_HeaderValueExtractor_KvElement_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_ScopedRds_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_HttpFilter_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_RequestIDExtension_msginit,
  &envoy_extensions_filters_network_http_connection_manager_v3_EnvoyMobileHttpConnectionManager_msginit,
};

const upb_MiniTable_File envoy_extensions_filters_network_http_connection_manager_v3_http_connection_manager_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  20,
  0,
  0,
};

#include "upb/port_undef.inc"

