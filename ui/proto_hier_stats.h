/** @file
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef __UI_PROTO_HIER_STATS_H__
#define __UI_PROTO_HIER_STATS_H__

#include <epan/proto.h>
#include "cfile.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** @file
 * Protocol Hierarchy Statistics
 */

typedef struct {
    header_field_info	*hfinfo;
    guint		num_pkts_total;
    guint		num_pdus_total;
    guint		num_pkts_last;
    guint		num_bytes_total;
    guint		num_bytes_last;
    guint		last_pkt;
} ph_stats_node_t;


typedef struct {
    guint	tot_packets;
    guint	tot_bytes;
    GNode	*stats_tree;
    double	first_time;	/* seconds (msec resolution) of first packet */
    double	last_time;	/* seconds (msec resolution) of last packet  */
} ph_stats_t;

ph_stats_t *ph_stats_new(capture_file *cf);

void ph_stats_free(ph_stats_t *ps);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __UI_PROTO_HIER_STATS_H__ */
