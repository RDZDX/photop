#ifndef _VRE_APP_WIZARDTEMPLATE_
#define	_VRE_APP_WIZARDTEMPLATE_

#define MRE_STR_SIZE_MAX            (100)

#include "vmsys.h"
#include "vmio.h"
#include "vmgraph.h"
#include "vmchset.h"
#include "vmstdlib.h"
#include "ResID.h"
#include "vm4res.h"
#include "vmcamera.h"
#include "vmtimer.h"
#include "string.h"
#include "vmmm.h"
#include "vmpromng.h"
#include "vmvideo.h"
#include <time.h>

/* ---------------------------------------------------------------------------
 * global variables
 * ------------------------------------------------------------------------ */

VMINT		layer_hdl[1];

const unsigned short tr_color = VM_COLOR_888_TO_565(0, 255, 255);

/* ---------------------------------------------------------------------------
 * local variables
 * ------------------------------------------------------------------------ */

void handle_sysevt(VMINT message, VMINT param);
void handle_keyevt(VMINT event, VMINT keycode);
void handle_penevt(VMINT event, VMINT x, VMINT y);
static void draw_hello(void);
static void draw_hello1(void);
void start_cam_preview(void);
void cam_message_callback(vm_cam_notify_data_t* notify_data, void* user_data);
void app_set_current_preview_size(VM_CAMERA_HANDLE camera_handle);
static void scene_1(void);
static void scene_2(void);
void tt(VMINT tid);

#endif

