/*
 * Linux cfg80211 Vendor Extension Code
 *
 * Copyright (C) 1999-2014, Broadcom Corporation
 * Copyright (C) 2021, NVIDIA CORPORATION. All rights reserved.
 *      Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2 (the "GPL"),
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the
 * following added to such license:
 *
 *      As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy and
 * distribute the resulting executable under terms of your choice, provided that
 * you also meet, for each linked independent module, the terms and conditions of
 * the license of that module.  An independent module is a module which is not
 * derived from this software.  The special exception does not apply to any
 * modifications of the software.
 *
 *      Notwithstanding the above, under no circumstances may you combine this
 * software in any way with any other Broadcom software provided under a license
 * other than the GPL, without Broadcom's express prior written consent.
 *
 * $Id: wl_cfgvendor.h 473890 2014-04-30 01:55:06Z $
 */

/*
 * New vendor interface additon to nl80211/cfg80211 to allow vendors
 * to implement proprietary features over the cfg80211 stack.
 */

#ifndef _wl_cfgvendor_h_
#define _wl_cfgvendor_h_

#define OUI_BRCM    0x001018
#define OUI_GOOGLE  0x001A11
#define BRCM_VENDOR_SUBCMD_PRIV_STR	1
#define ATTRIBUTE_U32_LEN                  (NLA_HDRLEN  + 4)
#define VENDOR_ID_OVERHEAD                 ATTRIBUTE_U32_LEN
#define VENDOR_SUBCMD_OVERHEAD             ATTRIBUTE_U32_LEN
#define VENDOR_DATA_OVERHEAD               (NLA_HDRLEN)

#define SCAN_RESULTS_COMPLETE_FLAG_LEN       ATTRIBUTE_U32_LEN
#define SCAN_INDEX_HDR_LEN                   (NLA_HDRLEN)
#define SCAN_ID_HDR_LEN                      ATTRIBUTE_U32_LEN
#define SCAN_FLAGS_HDR_LEN                   ATTRIBUTE_U32_LEN
#define GSCAN_NUM_RESULTS_HDR_LEN            ATTRIBUTE_U32_LEN
#define GSCAN_RESULTS_HDR_LEN                (NLA_HDRLEN)
#define GSCAN_BATCH_RESULT_HDR_LEN  (SCAN_INDEX_HDR_LEN + SCAN_ID_HDR_LEN + \
									SCAN_FLAGS_HDR_LEN + \
							        GSCAN_NUM_RESULTS_HDR_LEN + \
									GSCAN_RESULTS_HDR_LEN)

#define VENDOR_REPLY_OVERHEAD       (VENDOR_ID_OVERHEAD + \
									VENDOR_SUBCMD_OVERHEAD + \
									VENDOR_DATA_OVERHEAD)
typedef enum {
	/* don't use 0 as a valid subcommand */
	VENDOR_NL80211_SUBCMD_UNSPECIFIED,

	/* define all vendor startup commands between 0x0 and 0x0FFF */
	VENDOR_NL80211_SUBCMD_RANGE_START = 0x0001,
	VENDOR_NL80211_SUBCMD_RANGE_END   = 0x0FFF,

	/* define all GScan related commands between 0x1000 and 0x10FF */
	ANDROID_NL80211_SUBCMD_GSCAN_RANGE_START = 0x1000,
	ANDROID_NL80211_SUBCMD_GSCAN_RANGE_END   = 0x10FF,


	/* define all RTT related commands between 0x1100 and 0x11FF */
	ANDROID_NL80211_SUBCMD_RTT_RANGE_START = 0x1100,
	ANDROID_NL80211_SUBCMD_RTT_RANGE_END   = 0x11FF,

	ANDROID_NL80211_SUBCMD_LSTATS_RANGE_START = 0x1200,
	ANDROID_NL80211_SUBCMD_LSTATS_RANGE_END   = 0x12FF,

	ANDROID_NL80211_SUBCMD_TDLS_RANGE_START = 0x1300,
	ANDROID_NL80211_SUBCMD_TDLS_RANGE_END	= 0x13FF,

	ANDROID_NL80211_SUBCMD_DEBUG_RANGE_START = 0x1400,
	ANDROID_NL80211_SUBCMD_DEBUG_RANGE_END	= 0x14FF,

	/* define all NearbyDiscovery related commands between 0x1500 and 0x15FF */
	ANDROID_NL80211_SUBCMD_NBD_RANGE_START = 0x1500,
	ANDROID_NL80211_SUBCMD_NBD_RANGE_END   = 0x15FF,

	/* define all wifi calling related commands between 0x1600 and 0x16FF */
	ANDROID_NL80211_SUBCMD_WIFI_OFFLOAD_RANGE_START = 0x1600,
	ANDROID_NL80211_SUBCMD_WIFI_OFFLOAD_RANGE_END   = 0x16FF,

	/* define all tx power related commands between 0x1900 and 0x1910 */
	ANDROID_NL80211_SUBCMD_TX_POWER_RANGE_START	= 0x1900,
	ANDROID_NL80211_SUBCMD_TX_POWER_RANGE_END	= 0x1910,

	/* This is reserved for future usage */

} ANDROID_VENDOR_SUB_COMMAND;

enum wl_vendor_subcmd {
	BRCM_VENDOR_SCMD_UNSPEC,
	BRCM_VENDOR_SCMD_PRIV_STR,
	GSCAN_SUBCMD_GET_CAPABILITIES = ANDROID_NL80211_SUBCMD_GSCAN_RANGE_START,
	GSCAN_SUBCMD_SET_CONFIG,
	GSCAN_SUBCMD_SET_SCAN_CONFIG,
	GSCAN_SUBCMD_ENABLE_GSCAN,
	GSCAN_SUBCMD_GET_SCAN_RESULTS,
	GSCAN_SUBCMD_SCAN_RESULTS,
	GSCAN_SUBCMD_SET_HOTLIST,
	GSCAN_SUBCMD_SET_SIGNIFICANT_CHANGE_CONFIG,
	GSCAN_SUBCMD_ENABLE_FULL_SCAN_RESULTS,
	GSCAN_SUBCMD_GET_CHANNEL_LIST,
	ANDR_WIFI_SUBCMD_GET_FEATURE_SET,
	ANDR_WIFI_SUBCMD_GET_FEATURE_SET_MATRIX,
	ANDR_WIFI_RANDOM_MAC_OUI,
	ANDR_WIFI_NODFS_CHANNELS,
	ANDR_WIFI_SET_COUNTRY,
	GSCAN_SUBCMD_SET_EPNO_SSID,
	WIFI_SUBCMD_SET_SSID_WHITELIST,
	WIFI_SUBCMD_SET_LAZY_ROAM_PARAMS,
	WIFI_SUBCMD_ENABLE_LAZY_ROAM,
	WIFI_SUBCMD_SET_BSSID_PREF,
	WIFI_SUBCMD_SET_BSSID_BLACKLIST,
	GSCAN_SUBCMD_ANQPO_CONFIG,
	WIFI_SUBCMD_SET_RSSI_MONITOR,
	WIFI_SUBCMD_SET_LATENCY_MODE = 0x101b,
	RTT_SUBCMD_SET_CONFIG = ANDROID_NL80211_SUBCMD_RTT_RANGE_START,
	RTT_SUBCMD_CANCEL_CONFIG,
	RTT_SUBCMD_GETCAPABILITY,
	LSTATS_SUBCMD_GET_INFO = ANDROID_NL80211_SUBCMD_LSTATS_RANGE_START,
	DEBUG_START_LOGGING = ANDROID_NL80211_SUBCMD_DEBUG_RANGE_START,
	DEBUG_TRIGGER_MEM_DUMP,
	DEBUG_GET_MEM_DUMP,
	DEBUG_GET_VER,
	DEBUG_GET_RING_STATUS,
	DEBUG_GET_RING_DATA,
	DEBUG_GET_FEATURE,
	DEBUG_RESET_LOGGING,
	DEBUG_GET_WAKE_REASON_STATS = 0x140d,
	DEBUG_SET_HAL_PID = 0x1412,
	WIFI_OFFLOAD_SUBCMD_START_MKEEP_ALIVE = ANDROID_NL80211_SUBCMD_WIFI_OFFLOAD_RANGE_START,
	WIFI_OFFLOAD_SUBCMD_STOP_MKEEP_ALIVE,
	WIFI_SUBCMD_TX_PWR_SCENARIO =  ANDROID_NL80211_SUBCMD_TX_POWER_RANGE_START,
	/* Add more sub commands here */
    VENDOR_SUBCMD_MAX
};

enum gscan_attributes {
    GSCAN_ATTRIBUTE_NUM_BUCKETS = 10,
    GSCAN_ATTRIBUTE_BASE_PERIOD,
    GSCAN_ATTRIBUTE_BUCKETS_BAND,
    GSCAN_ATTRIBUTE_BUCKET_ID,
    GSCAN_ATTRIBUTE_BUCKET_PERIOD,
    GSCAN_ATTRIBUTE_BUCKET_NUM_CHANNELS,
    GSCAN_ATTRIBUTE_BUCKET_CHANNELS,
    GSCAN_ATTRIBUTE_NUM_AP_PER_SCAN,
    GSCAN_ATTRIBUTE_REPORT_THRESHOLD,
    GSCAN_ATTRIBUTE_NUM_SCANS_TO_CACHE,
    GSCAN_ATTRIBUTE_BAND = GSCAN_ATTRIBUTE_BUCKETS_BAND,

    GSCAN_ATTRIBUTE_ENABLE_FEATURE = 20,
    GSCAN_ATTRIBUTE_SCAN_RESULTS_COMPLETE,
    GSCAN_ATTRIBUTE_FLUSH_FEATURE,
    GSCAN_ATTRIBUTE_ENABLE_FULL_SCAN_RESULTS,
    GSCAN_ATTRIBUTE_REPORT_EVENTS,
    /* remaining reserved for additional attributes */
    GSCAN_ATTRIBUTE_NUM_OF_RESULTS = 30,
    GSCAN_ATTRIBUTE_FLUSH_RESULTS,
    GSCAN_ATTRIBUTE_SCAN_RESULTS,                       /* flat array of wifi_scan_result */
    GSCAN_ATTRIBUTE_SCAN_ID,                            /* indicates scan number */
    GSCAN_ATTRIBUTE_SCAN_FLAGS,                         /* indicates if scan was aborted */
    GSCAN_ATTRIBUTE_AP_FLAGS,                           /* flags on significant change event */
    GSCAN_ATTRIBUTE_NUM_CHANNELS,
    GSCAN_ATTRIBUTE_CHANNEL_LIST,

	/* remaining reserved for additional attributes */

    GSCAN_ATTRIBUTE_SSID = 40,
    GSCAN_ATTRIBUTE_BSSID,
    GSCAN_ATTRIBUTE_CHANNEL,
    GSCAN_ATTRIBUTE_RSSI,
    GSCAN_ATTRIBUTE_TIMESTAMP,
    GSCAN_ATTRIBUTE_RTT,
    GSCAN_ATTRIBUTE_RTTSD,

    /* remaining reserved for additional attributes */

    GSCAN_ATTRIBUTE_HOTLIST_BSSIDS = 50,
    GSCAN_ATTRIBUTE_RSSI_LOW,
    GSCAN_ATTRIBUTE_RSSI_HIGH,
    GSCAN_ATTRIBUTE_HOSTLIST_BSSID_ELEM,
    GSCAN_ATTRIBUTE_HOTLIST_FLUSH,

    /* remaining reserved for additional attributes */
    GSCAN_ATTRIBUTE_RSSI_SAMPLE_SIZE = 60,
    GSCAN_ATTRIBUTE_LOST_AP_SAMPLE_SIZE,
    GSCAN_ATTRIBUTE_MIN_BREACHING,
    GSCAN_ATTRIBUTE_SIGNIFICANT_CHANGE_BSSIDS,
    GSCAN_ATTRIBUTE_SIGNIFICANT_CHANGE_FLUSH,

    /* EPNO */
    GSCAN_ATTRIBUTE_EPNO_SSID_LIST = 70,
    GSCAN_ATTRIBUTE_EPNO_SSID,
    GSCAN_ATTRIBUTE_EPNO_SSID_LEN,
    GSCAN_ATTRIBUTE_EPNO_RSSI,
    GSCAN_ATTRIBUTE_EPNO_FLAGS,
    GSCAN_ATTRIBUTE_EPNO_AUTH,
    GSCAN_ATTRIBUTE_EPNO_SSID_NUM,
    GSCAN_ATTRIBUTE_EPNO_FLUSH,

    /* Roam SSID Whitelist and BSSID pref */
    GSCAN_ATTRIBUTE_WHITELIST_SSID = 80,
    GSCAN_ATTRIBUTE_NUM_WL_SSID,
    GSCAN_ATTRIBUTE_WL_SSID_LEN,
    GSCAN_ATTRIBUTE_WL_SSID_FLUSH,
    GSCAN_ATTRIBUTE_WHITELIST_SSID_ELEM,
    GSCAN_ATTRIBUTE_NUM_BSSID,
    GSCAN_ATTRIBUTE_BSSID_PREF_LIST,
    GSCAN_ATTRIBUTE_BSSID_PREF_FLUSH,
    GSCAN_ATTRIBUTE_BSSID_PREF,
    GSCAN_ATTRIBUTE_RSSI_MODIFIER,


    /* Roam cfg */
    GSCAN_ATTRIBUTE_A_BAND_BOOST_THRESHOLD = 90,
    GSCAN_ATTRIBUTE_A_BAND_PENALTY_THRESHOLD,
    GSCAN_ATTRIBUTE_A_BAND_BOOST_FACTOR,
    GSCAN_ATTRIBUTE_A_BAND_PENALTY_FACTOR,
    GSCAN_ATTRIBUTE_A_BAND_MAX_BOOST,
    GSCAN_ATTRIBUTE_LAZY_ROAM_HYSTERESIS,
    GSCAN_ATTRIBUTE_ALERT_ROAM_RSSI_TRIGGER,
    GSCAN_ATTRIBUTE_LAZY_ROAM_ENABLE,

    /* BSSID blacklist */
    GSCAN_ATTRIBUTE_BSSID_BLACKLIST_FLUSH = 100,
    GSCAN_ATTRIBUTE_BLACKLIST_BSSID,

    GSCAN_ATTRIBUTE_ANQPO_HS_LIST = 110,
    GSCAN_ATTRIBUTE_ANQPO_HS_LIST_SIZE,
    GSCAN_ATTRIBUTE_ANQPO_HS_NETWORK_ID,
    GSCAN_ATTRIBUTE_ANQPO_HS_NAI_REALM,
    GSCAN_ATTRIBUTE_ANQPO_HS_ROAM_CONSORTIUM_ID,
    GSCAN_ATTRIBUTE_ANQPO_HS_PLMN,

    /* Adaptive scan attributes */
    GSCAN_ATTRIBUTE_BUCKET_STEP_COUNT = 120,
    GSCAN_ATTRIBUTE_BUCKET_MAX_PERIOD,

    GSCAN_ATTRIBUTE_MAX
};

enum gscan_bucket_attributes {
	GSCAN_ATTRIBUTE_CH_BUCKET_1,
	GSCAN_ATTRIBUTE_CH_BUCKET_2,
	GSCAN_ATTRIBUTE_CH_BUCKET_3,
	GSCAN_ATTRIBUTE_CH_BUCKET_4,
	GSCAN_ATTRIBUTE_CH_BUCKET_5,
	GSCAN_ATTRIBUTE_CH_BUCKET_6,
	GSCAN_ATTRIBUTE_CH_BUCKET_7
};

enum gscan_ch_attributes {
	GSCAN_ATTRIBUTE_CH_ID_1,
	GSCAN_ATTRIBUTE_CH_ID_2,
	GSCAN_ATTRIBUTE_CH_ID_3,
	GSCAN_ATTRIBUTE_CH_ID_4,
	GSCAN_ATTRIBUTE_CH_ID_5,
	GSCAN_ATTRIBUTE_CH_ID_6,
	GSCAN_ATTRIBUTE_CH_ID_7
};

enum rtt_attributes {
	RTT_ATTRIBUTE_INVALID,
	RTT_ATTRIBUTE_TARGET_CNT,
	RTT_ATTRIBUTE_TARGET_INFO,
	RTT_ATTRIBUTE_TARGET_MAC,
	RTT_ATTRIBUTE_TARGET_TYPE,
	RTT_ATTRIBUTE_TARGET_PEER,
	RTT_ATTRIBUTE_TARGET_CHAN,
	RTT_ATTRIBUTE_TARGET_PERIOD,
	RTT_ATTRIBUTE_TARGET_NUM_BURST,
	RTT_ATTRIBUTE_TARGET_NUM_FTM_BURST,
	RTT_ATTRIBUTE_TARGET_NUM_RETRY_FTM,
	RTT_ATTRIBUTE_TARGET_NUM_RETRY_FTMR,
	RTT_ATTRIBUTE_TARGET_LCI,
	RTT_ATTRIBUTE_TARGET_LCR,
	RTT_ATTRIBUTE_TARGET_BURST_DURATION,
	RTT_ATTRIBUTE_TARGET_PREAMBLE,
	RTT_ATTRIBUTE_TARGET_BW,
	RTT_ATTRIBUTE_RESULTS_COMPLETE = 30,
	RTT_ATTRIBUTE_RESULTS_PER_TARGET,
	RTT_ATTRIBUTE_RESULT_CNT,
	RTT_ATTRIBUTE_RESULT
};

enum debug_attributes {
	DEBUG_ATTRIBUTE_INVALID,
	DEBUG_ATTRIBUTE_GET_DRIVER,
	DEBUG_ATTRIBUTE_GET_FW,
	DEBUG_ATTRIBUTE_RING_ID,
	DEBUG_ATTRIBUTE_RING_NAME,
	DEBUG_ATTRIBUTE_RING_FLAGS,
	DEBUG_ATTRIBUTE_LOG_LEVEL,
	DEBUG_ATTRIBUTE_LOG_TIME_INTVAL,
	DEBUG_ATTRIBUTE_LOG_MIN_DATA_SIZE,
	DEBUG_ATTRIBUTE_FW_DUMP_LEN,
	DEBUG_ATTRIBUTE_FW_DUMP_DATA,
	DEBUG_ATTRIBUTE_FW_ERR_CODE,
	DEBUG_ATTRIBUTE_RING_DATA,
	DEBUG_ATTRIBUTE_RING_STATUS,
	DEBUG_ATTRIBUTE_RING_NUM
};

enum mkeep_alive_attributes {
	MKEEP_ALIVE_ATTRIBUTE_INVALID,
	MKEEP_ALIVE_ATTRIBUTE_ID,
	MKEEP_ALIVE_ATTRIBUTE_IP_PKT,
	MKEEP_ALIVE_ATTRIBUTE_IP_PKT_LEN,
	MKEEP_ALIVE_ATTRIBUTE_SRC_MAC_ADDR,
	MKEEP_ALIVE_ATTRIBUTE_DST_MAC_ADDR,
	MKEEP_ALIVE_ATTRIBUTE_PERIOD_MSEC,
	MKEEP_ALIVE_ATTRIBUTE_ETHER_TYPE
};

enum wifi_rssi_monitor_attr {
	RSSI_MONITOR_ATTRIBUTE_INVALID,
	RSSI_MONITOR_ATTRIBUTE_MAX_RSSI,
	RSSI_MONITOR_ATTRIBUTE_MIN_RSSI,
	RSSI_MONITOR_ATTRIBUTE_START,
};

typedef enum wl_vendor_event {
	BRCM_VENDOR_EVENT_UNSPEC,
	BRCM_VENDOR_EVENT_PRIV_STR,
	GOOGLE_GSCAN_SIGNIFICANT_EVENT,
	GOOGLE_GSCAN_GEOFENCE_FOUND_EVENT,
	GOOGLE_GSCAN_BATCH_SCAN_EVENT,
	GOOGLE_SCAN_FULL_RESULTS_EVENT,
	GOOGLE_RTT_COMPLETE_EVENT,
	GOOGLE_SCAN_COMPLETE_EVENT,
	GOOGLE_GSCAN_GEOFENCE_LOST_EVENT,
	GOOGLE_SCAN_EPNO_EVENT,
	GOOGLE_DEBUG_RING_EVENT,
	GOOGLE_FW_DUMP_EVENT,
	GOOGLE_PNO_HOTSPOT_FOUND_EVENT,
	GOOGLE_RSSI_MONITOR_EVENT,
	GOOGLE_MKEEP_ALIVE_EVENT,
	BRCM_VENDOR_EVENT_IDSUP_STATUS,
	BRCM_VENDOR_EVENT_DRIVER_HANG
} wl_vendor_event_t;

enum andr_wifi_attr {
	ANDR_WIFI_ATTRIBUTE_INVALID,
	ANDR_WIFI_ATTRIBUTE_NUM_FEATURE_SET,
	ANDR_WIFI_ATTRIBUTE_FEATURE_SET,
	ANDR_WIFI_ATTRIBUTE_RANDOM_MAC_OUI,
	ANDR_WIFI_ATTRIBUTE_NODFS_SET,
	ANDR_WIFI_ATTRIBUTE_COUNTRY
};

typedef enum wl_vendor_gscan_attribute {
	ATTR_START_GSCAN,
	ATTR_STOP_GSCAN,
	ATTR_SET_SCAN_BATCH_CFG_ID, /* set batch scan params */
	ATTR_SET_SCAN_GEOFENCE_CFG_ID, /* set list of bssids to track */
	ATTR_SET_SCAN_SIGNIFICANT_CFG_ID, /* set list of bssids, rssi threshold etc.. */
	ATTR_SET_SCAN_CFG_ID, /* set common scan config params here */
	ATTR_GET_GSCAN_CAPABILITIES_ID,
    /* Add more sub commands here */
    ATTR_GSCAN_MAX
} wl_vendor_gscan_attribute_t;

typedef enum gscan_batch_attribute {
	ATTR_GSCAN_BATCH_BESTN,
	ATTR_GSCAN_BATCH_MSCAN,
	ATTR_GSCAN_BATCH_BUFFER_THRESHOLD
} gscan_batch_attribute_t;

typedef enum gscan_geofence_attribute {
	ATTR_GSCAN_NUM_HOTLIST_BSSID,
	ATTR_GSCAN_HOTLIST_BSSID
} gscan_geofence_attribute_t;

typedef enum gscan_complete_event {
	WIFI_SCAN_BUFFER_FULL,
	WIFI_SCAN_COMPLETE
} gscan_complete_event_t;

#if (LINUX_VERSION_CODE > KERNEL_VERSION(3, 13, 0)) || defined(WL_VENDOR_EXT_SUPPORT)
extern int wl_cfgvendor_attach(struct wiphy *wiphy, dhd_pub_t *dhd);
extern int wl_cfgvendor_detach(struct wiphy *wiphy);
extern int wl_cfgvendor_send_async_event(struct wiphy *wiphy,
                  struct net_device *dev, int event_id, const void  *data, int len);
extern int wl_cfgvendor_send_hotlist_event(struct wiphy *wiphy,
                struct net_device *dev, void  *data, int len, wl_vendor_event_t event);
#endif /* (LINUX_VERSION_CODE > KERNEL_VERSION(3, 13, 0)) || defined(WL_VENDOR_EXT_SUPPORT) */

#endif /* _wl_cfgvendor_h_ */
