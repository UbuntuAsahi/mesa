/*
 * Copyright 2017-2019 Lyude Paul
 * Copyright 2017-2019 Alyssa Rosenzweig
 * SPDX-License-Identifier: MIT
 *
 */

#ifndef __AGX_DECODE_H__
#define __AGX_DECODE_H__

#include "agx_bo.h"

#ifndef __APPLE__
#include "drm-uapi/asahi_drm.h"
#endif

void agxdecode_next_frame(void);

void agxdecode_close(void);

void agxdecode_cmdstream(unsigned cmdbuf_index, unsigned map_index,
                         bool verbose);
void agxdecode_drm_cmd_render(struct drm_asahi_cmd_render *cmdbuf,
                              bool verbose);
void agxdecode_drm_cmd_compute(struct drm_asahi_cmd_compute *cmdbuf,
                               bool verbose);

void agxdecode_dump_file_open(void);

void agxdecode_track_alloc(struct agx_bo *alloc);

void agxdecode_dump_mappings(unsigned map_index);

void agxdecode_track_free(struct agx_bo *bo);

#endif /* __AGX_DECODE_H__ */
