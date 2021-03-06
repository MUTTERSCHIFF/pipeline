
#includes
include_directories(
)

#definitions
add_definitions(
  -DDP_SG_XBAR_CULLING_EXPORTS
)

#sources
set(XBAR_CULLING_SOURCES
  src/Culling.cpp
  src/CullingImpl.cpp
  src/ResultImpl.cpp
)

set(XBAR_CULLING_PUBLIC_HEADERS
  Config.h
  Culling.h
)

set(XBAR_CULLING_PRIVATE_HEADERS
  inc/ResultImpl.h
  inc/CullingImpl.h
)

source_group(sources FILES ${XBAR_CULLING_SOURCES})
source_group(headers FILES ${XBAR_CULLING_PRIVATE_HEADERS})
source_group("" FILES ${XBAR_CULLING_PUBLIC_HEADERS})

#target
add_library( DPSgXbarCulling SHARED
  ${XBAR_CULLING_SOURCES}
  ${XBAR_CULLING_PUBLIC_HEADERS}
  ${XBAR_CULLING_PRIVATE_HEADERS}
)

target_link_libraries( DPSgXbarCulling
  DPSgCore
  DPUtil
  DPMath
  DPCulling
  DPCullingCPU
  DPCullingOpenGL
)

set_target_properties( DPSgXbarCulling PROPERTIES FOLDER "DP/SG/Xbar" )
set_target_properties( DPSgXbarCulling PROPERTIES COMPILE_DEFINITIONS DP_SG_XBAR_CULLING_EXPORTS )
