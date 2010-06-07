/*
* Copyright (C) 2009 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tdav_session_audio.h
 * @brief Audio Session plugin.
 *
 * @author Mamadou Diop <diopmamadou(at)doubango.org>
 *
 * @date Created: Sat Nov 8 16:54:58 2009 mdiop
 */
#ifndef TINYDAV_SESSION_AUDIO_H
#define TINYDAV_SESSION_AUDIO_H

#include "tinydav_config.h"

#include "tinymedia/tmedia_session.h"

typedef struct tdav_session_audio_s
{
	TMEDIA_DECLARE_SESSION_AUDIO;

	uint16_t local_port;
	uint16_t remote_port;
}
tdav_session_audio_t;


TINYDAV_GEXTERN const tmedia_session_plugin_def_t *tdav_session_audio_plugin_def_t;

#endif /* TINYDAV_SESSION_AUDIO_H */