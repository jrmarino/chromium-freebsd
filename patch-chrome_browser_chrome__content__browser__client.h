--- chrome/browser/chrome_content_browser_client.h.orig	2024-07-30 11:12:21 UTC
+++ chrome/browser/chrome_content_browser_client.h
@@ -513,7 +513,7 @@ class ChromeContentBrowserClient : public content::Con
   bool IsPluginAllowedToUseDevChannelAPIs(
       content::BrowserContext* browser_context,
       const GURL& url) override;
-#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_MAC)
+#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_BSD)
   void GetAdditionalMappedFilesForChildProcess(
       const base::CommandLine& command_line,
       int child_process_id,
