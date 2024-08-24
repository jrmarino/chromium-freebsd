--- ui/ozone/test/mock_platform_window_delegate.h.orig	2023-11-03 10:09:45 UTC
+++ ui/ozone/test/mock_platform_window_delegate.h
@@ -32,7 +32,7 @@ class MockPlatformWindowDelegate : public PlatformWind
   MOCK_METHOD2(OnWindowStateChanged,
                void(PlatformWindowState old_state,
                     PlatformWindowState new_state));
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   MOCK_METHOD1(OnWindowTiledStateChanged,
                void(WindowTiledEdges new_tiled_edges));
   MOCK_METHOD0(OnFullscreenModeChanged, void());
