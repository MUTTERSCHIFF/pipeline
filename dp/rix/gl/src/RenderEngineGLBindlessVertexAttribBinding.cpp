// Copyright NVIDIA Corporation 2011-2015
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


#include <dp/rix/gl/inc/RenderEngineGLImpl.hpp>
#include <dp/rix/gl/inc/RenderEngineGLBindlessVertexAttribBinding.h>
#include <dp/rix/gl/inc/GeometryGL.h>
#include <dp/rix/gl/inc/GeometryDescriptionGL.h>
#include <dp/rix/gl/inc/GeometryInstanceGL.h>
#include <dp/rix/gl/inc/VertexAttributesGL.h>
#include <dp/rix/gl/inc/ProgramGL.h>
#include <dp/rix/gl/inc/IndicesGL.h>
#include <dp/rix/gl/inc/VertexFormatGL.h>
#include <dp/rix/gl/inc/DataTypeConversionGL.h>

#if defined(GL_VERSION_4_3)

namespace dp
{
  namespace rix
  {
    namespace gl
    {

      template class RenderEngineGLImpl<VertexCacheBindlessVAB>;
      static bool initializedBindless = registerRenderEngine( "BVAB", &renderEngineCreate<VertexCacheBindlessVAB> );

    } // namespace gl
  } // namespace rix
} // namespace dp

// GL_VERSION_4_3
#endif
