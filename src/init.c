/*
 * init.c
 * libansilove 1.0.0
 * https://www.ansilove.org
 *
 * Copyright (c) 2011-2018 Stefan Vogt, Brian Cassidy, and Frederic Cambus
 * All rights reserved.
 *
 * libansilove is licensed under the BSD 2-Clause License.
 * See LICENSE file for details.
 */

#include <string.h>
#include "ansilove.h"

int
ansilove_init(struct ansilove_ctx *ctx, struct ansilove_options *options) {
	if (ctx == NULL || options == NULL) {
		if (ctx)
			ctx->error = ANSILOVE_INVALID_PARAM;

		return -1;
	}

	memset(ctx, 0, sizeof(*ctx));
	memset(options, 0, sizeof(*options));

	/* default to 8 if bits option is not specified */
	options->bits = 8;

	return 0;
}
