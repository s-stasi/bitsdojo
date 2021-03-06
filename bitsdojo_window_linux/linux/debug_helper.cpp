#include "./debug_helper.h"

#include <gtk/gtk.h>

namespace bitsdojo_window {

#define CHECK_FLAG(x)                                                          \
    if (state & x)                                                             \
        g_string_append_printf(result, "%s%s", (result->len > 0) ? " | " : "", \
                               #x);

#define CHECK_EQUAL(x)                                                         \
    if (state == x)                                                            \
        g_string_append_printf(result, "%s%s", (result->len > 0) ? " | " : "", \
                               #x);

void printWindowStateMask(const char *description, GdkWindowState state) {
    auto result = g_string_new(nullptr);
    CHECK_FLAG(GDK_WINDOW_STATE_WITHDRAWN)
    CHECK_FLAG(GDK_WINDOW_STATE_ICONIFIED)
    CHECK_FLAG(GDK_WINDOW_STATE_MAXIMIZED)
    CHECK_FLAG(GDK_WINDOW_STATE_STICKY)
    CHECK_FLAG(GDK_WINDOW_STATE_FULLSCREEN)
    CHECK_FLAG(GDK_WINDOW_STATE_ABOVE)
    CHECK_FLAG(GDK_WINDOW_STATE_BELOW)
    CHECK_FLAG(GDK_WINDOW_STATE_FOCUSED)
    CHECK_FLAG(GDK_WINDOW_STATE_TILED)
    CHECK_FLAG(GDK_WINDOW_STATE_TOP_TILED)
    CHECK_FLAG(GDK_WINDOW_STATE_TOP_RESIZABLE)
    CHECK_FLAG(GDK_WINDOW_STATE_RIGHT_TILED)
    CHECK_FLAG(GDK_WINDOW_STATE_RIGHT_RESIZABLE)
    CHECK_FLAG(GDK_WINDOW_STATE_BOTTOM_TILED)
    CHECK_FLAG(GDK_WINDOW_STATE_BOTTOM_RESIZABLE)
    CHECK_FLAG(GDK_WINDOW_STATE_LEFT_TILED)
    CHECK_FLAG(GDK_WINDOW_STATE_LEFT_RESIZABLE)
    printf("%s: %s\n", description, result->str);
    g_string_free(result, TRUE);
}

void printGdkEvent(const char *description, GdkEventType state) {
    auto result = g_string_new(nullptr);
    CHECK_EQUAL(GDK_DELETE)
    CHECK_EQUAL(GDK_DESTROY)
    CHECK_EQUAL(GDK_EXPOSE)
    CHECK_EQUAL(GDK_MOTION_NOTIFY)
    CHECK_EQUAL(GDK_BUTTON_PRESS)
    CHECK_EQUAL(GDK_2BUTTON_PRESS)
    CHECK_EQUAL(GDK_3BUTTON_PRESS)
    CHECK_EQUAL(GDK_BUTTON_RELEASE)
    CHECK_EQUAL(GDK_KEY_PRESS)
    CHECK_EQUAL(GDK_KEY_RELEASE)
    CHECK_EQUAL(GDK_ENTER_NOTIFY)
    CHECK_EQUAL(GDK_LEAVE_NOTIFY)
    CHECK_EQUAL(GDK_FOCUS_CHANGE)
    CHECK_EQUAL(GDK_CONFIGURE)
    CHECK_EQUAL(GDK_MAP)
    CHECK_EQUAL(GDK_UNMAP)
    CHECK_EQUAL(GDK_PROPERTY_NOTIFY)
    CHECK_EQUAL(GDK_SELECTION_CLEAR)
    CHECK_EQUAL(GDK_SELECTION_REQUEST)
    CHECK_EQUAL(GDK_SELECTION_NOTIFY)
    CHECK_EQUAL(GDK_PROXIMITY_IN)
    CHECK_EQUAL(GDK_PROXIMITY_OUT)
    CHECK_EQUAL(GDK_DRAG_ENTER)
    CHECK_EQUAL(GDK_DRAG_LEAVE)
    CHECK_EQUAL(GDK_DRAG_MOTION)
    CHECK_EQUAL(GDK_DRAG_STATUS)
    CHECK_EQUAL(GDK_DROP_START)
    CHECK_EQUAL(GDK_DROP_FINISHED)
    CHECK_EQUAL(GDK_CLIENT_EVENT)
    CHECK_EQUAL(GDK_VISIBILITY_NOTIFY)
    CHECK_EQUAL(GDK_SCROLL)
    CHECK_EQUAL(GDK_WINDOW_STATE)
    CHECK_EQUAL(GDK_SETTING)
    CHECK_EQUAL(GDK_OWNER_CHANGE)
    CHECK_EQUAL(GDK_GRAB_BROKEN)
    CHECK_EQUAL(GDK_DAMAGE)
    CHECK_EQUAL(GDK_TOUCH_BEGIN)
    CHECK_EQUAL(GDK_TOUCH_UPDATE)
    CHECK_EQUAL(GDK_TOUCH_END)
    CHECK_EQUAL(GDK_TOUCH_CANCEL)
    CHECK_EQUAL(GDK_TOUCHPAD_SWIPE)
    CHECK_EQUAL(GDK_TOUCHPAD_PINCH)
    CHECK_EQUAL(GDK_PAD_BUTTON_PRESS)
    CHECK_EQUAL(GDK_PAD_BUTTON_RELEASE)
    CHECK_EQUAL(GDK_PAD_RING)
    CHECK_EQUAL(GDK_PAD_STRIP)
    CHECK_EQUAL(GDK_PAD_GROUP_MODE)
    printf("%s: %s\n", description, result->str);
    g_string_free(result, TRUE);
}

}  // namespace bitsdojo_window