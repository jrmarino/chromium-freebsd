--- ui/ozone/platform/wayland/host/wayland_window.h.orig	2024-07-30 11:12:21 UTC
+++ ui/ozone/platform/wayland/host/wayland_window.h
@@ -41,7 +41,7 @@
 #include "ui/platform_window/platform_window_init_properties.h"
 #include "ui/platform_window/wm/wm_drag_handler.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/ozone/platform/wayland/host/wayland_async_cursor.h"
 #endif
 
@@ -269,7 +269,7 @@ class WaylandWindow : public PlatformWindow,
     bool is_snapped_secondary = false;
     bool is_floated = false;
     bool is_pip = false;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     WindowTiledEdges tiled_edges;
 #endif
 
@@ -551,7 +551,7 @@ class WaylandWindow : public PlatformWindow,
 
   void UpdateCursorShape(scoped_refptr<BitmapCursor> cursor);
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   void OnCursorLoaded(scoped_refptr<WaylandAsyncCursor> cursor,
                       scoped_refptr<BitmapCursor> bitmap_cursor);
 #endif
@@ -620,7 +620,7 @@ class WaylandWindow : public PlatformWindow,
 
   wl::Object<zaura_surface> aura_surface_;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // The current asynchronously loaded cursor (Linux specific).
   scoped_refptr<WaylandAsyncCursor> async_cursor_;
 #else
