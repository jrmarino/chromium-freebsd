--- content/shell/utility/shell_content_utility_client.cc.orig	2023-03-09 06:31:50 UTC
+++ content/shell/utility/shell_content_utility_client.cc
@@ -38,7 +38,7 @@
 #include "sandbox/policy/sandbox.h"
 #include "services/test/echo/echo_service.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "content/test/sandbox_status_service.h"
 #endif
 
@@ -187,7 +187,7 @@ void ShellContentUtilityClient::ExposeInterfacesToBrow
   binders->Add<mojom::PowerMonitorTest>(
       base::BindRepeating(&PowerMonitorTestImpl::MakeSelfOwnedReceiver),
       base::SingleThreadTaskRunner::GetCurrentDefault());
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (register_sandbox_status_helper_) {
     binders->Add<content::mojom::SandboxStatusService>(
         base::BindRepeating(
