--- base/allocator/partition_allocator/src/partition_alloc/page_allocator.h.orig	2023-12-10 06:10:27 UTC
+++ base/allocator/partition_allocator/src/partition_alloc/page_allocator.h
@@ -258,7 +258,7 @@ void DecommitAndZeroSystemPages(void* address,
 // recommitted. Do not assume that this will not change over time.
 constexpr PA_COMPONENT_EXPORT(
     PARTITION_ALLOC) bool DecommittedMemoryIsAlwaysZeroed() {
-#if BUILDFLAG(IS_APPLE)
+#if BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_BSD)
   return false;
 #else
   return true;
