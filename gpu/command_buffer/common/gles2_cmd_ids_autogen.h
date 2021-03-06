// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
// gpu/command_buffer/build_gles2_cmd_buffer.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#ifndef GPU_COMMAND_BUFFER_COMMON_GLES2_CMD_IDS_AUTOGEN_H_
#define GPU_COMMAND_BUFFER_COMMON_GLES2_CMD_IDS_AUTOGEN_H_

#define GLES2_COMMAND_LIST(OP)                           \
  OP(ActiveTexture)                            /* 256 */ \
  OP(AttachShader)                             /* 257 */ \
  OP(BindAttribLocationBucket)                 /* 258 */ \
  OP(BindBuffer)                               /* 259 */ \
  OP(BindBufferBase)                           /* 260 */ \
  OP(BindBufferRange)                          /* 261 */ \
  OP(BindFramebuffer)                          /* 262 */ \
  OP(BindRenderbuffer)                         /* 263 */ \
  OP(BindSampler)                              /* 264 */ \
  OP(BindTexture)                              /* 265 */ \
  OP(BindTransformFeedback)                    /* 266 */ \
  OP(BlendColor)                               /* 267 */ \
  OP(BlendEquation)                            /* 268 */ \
  OP(BlendEquationSeparate)                    /* 269 */ \
  OP(BlendFunc)                                /* 270 */ \
  OP(BlendFuncSeparate)                        /* 271 */ \
  OP(BufferData)                               /* 272 */ \
  OP(BufferSubData)                            /* 273 */ \
  OP(CheckFramebufferStatus)                   /* 274 */ \
  OP(Clear)                                    /* 275 */ \
  OP(ClearBufferfi)                            /* 276 */ \
  OP(ClearBufferfvImmediate)                   /* 277 */ \
  OP(ClearBufferivImmediate)                   /* 278 */ \
  OP(ClearBufferuivImmediate)                  /* 279 */ \
  OP(ClearColor)                               /* 280 */ \
  OP(ClearDepthf)                              /* 281 */ \
  OP(ClearStencil)                             /* 282 */ \
  OP(ClientWaitSync)                           /* 283 */ \
  OP(ColorMask)                                /* 284 */ \
  OP(CompileShader)                            /* 285 */ \
  OP(CompressedTexImage2DBucket)               /* 286 */ \
  OP(CompressedTexImage2D)                     /* 287 */ \
  OP(CompressedTexSubImage2DBucket)            /* 288 */ \
  OP(CompressedTexSubImage2D)                  /* 289 */ \
  OP(CopyBufferSubData)                        /* 290 */ \
  OP(CopyTexImage2D)                           /* 291 */ \
  OP(CopyTexSubImage2D)                        /* 292 */ \
  OP(CopyTexSubImage3D)                        /* 293 */ \
  OP(CreateProgram)                            /* 294 */ \
  OP(CreateShader)                             /* 295 */ \
  OP(CullFace)                                 /* 296 */ \
  OP(DeleteBuffersImmediate)                   /* 297 */ \
  OP(DeleteFramebuffersImmediate)              /* 298 */ \
  OP(DeleteProgram)                            /* 299 */ \
  OP(DeleteRenderbuffersImmediate)             /* 300 */ \
  OP(DeleteSamplersImmediate)                  /* 301 */ \
  OP(DeleteSync)                               /* 302 */ \
  OP(DeleteShader)                             /* 303 */ \
  OP(DeleteTexturesImmediate)                  /* 304 */ \
  OP(DeleteTransformFeedbacksImmediate)        /* 305 */ \
  OP(DepthFunc)                                /* 306 */ \
  OP(DepthMask)                                /* 307 */ \
  OP(DepthRangef)                              /* 308 */ \
  OP(DetachShader)                             /* 309 */ \
  OP(Disable)                                  /* 310 */ \
  OP(DisableVertexAttribArray)                 /* 311 */ \
  OP(DrawArrays)                               /* 312 */ \
  OP(DrawElements)                             /* 313 */ \
  OP(Enable)                                   /* 314 */ \
  OP(EnableVertexAttribArray)                  /* 315 */ \
  OP(FenceSync)                                /* 316 */ \
  OP(Finish)                                   /* 317 */ \
  OP(Flush)                                    /* 318 */ \
  OP(FramebufferRenderbuffer)                  /* 319 */ \
  OP(FramebufferTexture2D)                     /* 320 */ \
  OP(FramebufferTextureLayer)                  /* 321 */ \
  OP(FrontFace)                                /* 322 */ \
  OP(GenBuffersImmediate)                      /* 323 */ \
  OP(GenerateMipmap)                           /* 324 */ \
  OP(GenFramebuffersImmediate)                 /* 325 */ \
  OP(GenRenderbuffersImmediate)                /* 326 */ \
  OP(GenSamplersImmediate)                     /* 327 */ \
  OP(GenTexturesImmediate)                     /* 328 */ \
  OP(GenTransformFeedbacksImmediate)           /* 329 */ \
  OP(GetActiveAttrib)                          /* 330 */ \
  OP(GetActiveUniform)                         /* 331 */ \
  OP(GetActiveUniformBlockiv)                  /* 332 */ \
  OP(GetActiveUniformBlockName)                /* 333 */ \
  OP(GetActiveUniformsiv)                      /* 334 */ \
  OP(GetAttachedShaders)                       /* 335 */ \
  OP(GetAttribLocation)                        /* 336 */ \
  OP(GetBooleanv)                              /* 337 */ \
  OP(GetBufferParameteriv)                     /* 338 */ \
  OP(GetError)                                 /* 339 */ \
  OP(GetFloatv)                                /* 340 */ \
  OP(GetFragDataLocation)                      /* 341 */ \
  OP(GetFramebufferAttachmentParameteriv)      /* 342 */ \
  OP(GetInteger64v)                            /* 343 */ \
  OP(GetIntegeri_v)                            /* 344 */ \
  OP(GetInteger64i_v)                          /* 345 */ \
  OP(GetIntegerv)                              /* 346 */ \
  OP(GetInternalformativ)                      /* 347 */ \
  OP(GetProgramiv)                             /* 348 */ \
  OP(GetProgramInfoLog)                        /* 349 */ \
  OP(GetRenderbufferParameteriv)               /* 350 */ \
  OP(GetSamplerParameterfv)                    /* 351 */ \
  OP(GetSamplerParameteriv)                    /* 352 */ \
  OP(GetShaderiv)                              /* 353 */ \
  OP(GetShaderInfoLog)                         /* 354 */ \
  OP(GetShaderPrecisionFormat)                 /* 355 */ \
  OP(GetShaderSource)                          /* 356 */ \
  OP(GetString)                                /* 357 */ \
  OP(GetSynciv)                                /* 358 */ \
  OP(GetTexParameterfv)                        /* 359 */ \
  OP(GetTexParameteriv)                        /* 360 */ \
  OP(GetTransformFeedbackVarying)              /* 361 */ \
  OP(GetUniformBlockIndex)                     /* 362 */ \
  OP(GetUniformfv)                             /* 363 */ \
  OP(GetUniformiv)                             /* 364 */ \
  OP(GetUniformIndices)                        /* 365 */ \
  OP(GetUniformLocation)                       /* 366 */ \
  OP(GetVertexAttribfv)                        /* 367 */ \
  OP(GetVertexAttribiv)                        /* 368 */ \
  OP(GetVertexAttribPointerv)                  /* 369 */ \
  OP(Hint)                                     /* 370 */ \
  OP(InvalidateFramebufferImmediate)           /* 371 */ \
  OP(InvalidateSubFramebufferImmediate)        /* 372 */ \
  OP(IsBuffer)                                 /* 373 */ \
  OP(IsEnabled)                                /* 374 */ \
  OP(IsFramebuffer)                            /* 375 */ \
  OP(IsProgram)                                /* 376 */ \
  OP(IsRenderbuffer)                           /* 377 */ \
  OP(IsSampler)                                /* 378 */ \
  OP(IsShader)                                 /* 379 */ \
  OP(IsSync)                                   /* 380 */ \
  OP(IsTexture)                                /* 381 */ \
  OP(IsTransformFeedback)                      /* 382 */ \
  OP(LineWidth)                                /* 383 */ \
  OP(LinkProgram)                              /* 384 */ \
  OP(PauseTransformFeedback)                   /* 385 */ \
  OP(PixelStorei)                              /* 386 */ \
  OP(PolygonOffset)                            /* 387 */ \
  OP(ReadBuffer)                               /* 388 */ \
  OP(ReadPixels)                               /* 389 */ \
  OP(ReleaseShaderCompiler)                    /* 390 */ \
  OP(RenderbufferStorage)                      /* 391 */ \
  OP(ResumeTransformFeedback)                  /* 392 */ \
  OP(SampleCoverage)                           /* 393 */ \
  OP(SamplerParameterf)                        /* 394 */ \
  OP(SamplerParameterfvImmediate)              /* 395 */ \
  OP(SamplerParameteri)                        /* 396 */ \
  OP(SamplerParameterivImmediate)              /* 397 */ \
  OP(Scissor)                                  /* 398 */ \
  OP(ShaderBinary)                             /* 399 */ \
  OP(ShaderSourceBucket)                       /* 400 */ \
  OP(StencilFunc)                              /* 401 */ \
  OP(StencilFuncSeparate)                      /* 402 */ \
  OP(StencilMask)                              /* 403 */ \
  OP(StencilMaskSeparate)                      /* 404 */ \
  OP(StencilOp)                                /* 405 */ \
  OP(StencilOpSeparate)                        /* 406 */ \
  OP(TexImage2D)                               /* 407 */ \
  OP(TexImage3D)                               /* 408 */ \
  OP(TexParameterf)                            /* 409 */ \
  OP(TexParameterfvImmediate)                  /* 410 */ \
  OP(TexParameteri)                            /* 411 */ \
  OP(TexParameterivImmediate)                  /* 412 */ \
  OP(TexStorage3D)                             /* 413 */ \
  OP(TexSubImage2D)                            /* 414 */ \
  OP(TexSubImage3D)                            /* 415 */ \
  OP(TransformFeedbackVaryingsBucket)          /* 416 */ \
  OP(Uniform1f)                                /* 417 */ \
  OP(Uniform1fvImmediate)                      /* 418 */ \
  OP(Uniform1i)                                /* 419 */ \
  OP(Uniform1ivImmediate)                      /* 420 */ \
  OP(Uniform1ui)                               /* 421 */ \
  OP(Uniform1uivImmediate)                     /* 422 */ \
  OP(Uniform2f)                                /* 423 */ \
  OP(Uniform2fvImmediate)                      /* 424 */ \
  OP(Uniform2i)                                /* 425 */ \
  OP(Uniform2ivImmediate)                      /* 426 */ \
  OP(Uniform2ui)                               /* 427 */ \
  OP(Uniform2uivImmediate)                     /* 428 */ \
  OP(Uniform3f)                                /* 429 */ \
  OP(Uniform3fvImmediate)                      /* 430 */ \
  OP(Uniform3i)                                /* 431 */ \
  OP(Uniform3ivImmediate)                      /* 432 */ \
  OP(Uniform3ui)                               /* 433 */ \
  OP(Uniform3uivImmediate)                     /* 434 */ \
  OP(Uniform4f)                                /* 435 */ \
  OP(Uniform4fvImmediate)                      /* 436 */ \
  OP(Uniform4i)                                /* 437 */ \
  OP(Uniform4ivImmediate)                      /* 438 */ \
  OP(Uniform4ui)                               /* 439 */ \
  OP(Uniform4uivImmediate)                     /* 440 */ \
  OP(UniformBlockBinding)                      /* 441 */ \
  OP(UniformMatrix2fvImmediate)                /* 442 */ \
  OP(UniformMatrix2x3fvImmediate)              /* 443 */ \
  OP(UniformMatrix2x4fvImmediate)              /* 444 */ \
  OP(UniformMatrix3fvImmediate)                /* 445 */ \
  OP(UniformMatrix3x2fvImmediate)              /* 446 */ \
  OP(UniformMatrix3x4fvImmediate)              /* 447 */ \
  OP(UniformMatrix4fvImmediate)                /* 448 */ \
  OP(UniformMatrix4x2fvImmediate)              /* 449 */ \
  OP(UniformMatrix4x3fvImmediate)              /* 450 */ \
  OP(UseProgram)                               /* 451 */ \
  OP(ValidateProgram)                          /* 452 */ \
  OP(VertexAttrib1f)                           /* 453 */ \
  OP(VertexAttrib1fvImmediate)                 /* 454 */ \
  OP(VertexAttrib2f)                           /* 455 */ \
  OP(VertexAttrib2fvImmediate)                 /* 456 */ \
  OP(VertexAttrib3f)                           /* 457 */ \
  OP(VertexAttrib3fvImmediate)                 /* 458 */ \
  OP(VertexAttrib4f)                           /* 459 */ \
  OP(VertexAttrib4fvImmediate)                 /* 460 */ \
  OP(VertexAttribI4i)                          /* 461 */ \
  OP(VertexAttribI4ivImmediate)                /* 462 */ \
  OP(VertexAttribI4ui)                         /* 463 */ \
  OP(VertexAttribI4uivImmediate)               /* 464 */ \
  OP(VertexAttribIPointer)                     /* 465 */ \
  OP(VertexAttribPointer)                      /* 466 */ \
  OP(Viewport)                                 /* 467 */ \
  OP(WaitSync)                                 /* 468 */ \
  OP(BlitFramebufferCHROMIUM)                  /* 469 */ \
  OP(RenderbufferStorageMultisampleCHROMIUM)   /* 470 */ \
  OP(RenderbufferStorageMultisampleEXT)        /* 471 */ \
  OP(FramebufferTexture2DMultisampleEXT)       /* 472 */ \
  OP(TexStorage2DEXT)                          /* 473 */ \
  OP(GenQueriesEXTImmediate)                   /* 474 */ \
  OP(DeleteQueriesEXTImmediate)                /* 475 */ \
  OP(BeginQueryEXT)                            /* 476 */ \
  OP(BeginTransformFeedback)                   /* 477 */ \
  OP(EndQueryEXT)                              /* 478 */ \
  OP(EndTransformFeedback)                     /* 479 */ \
  OP(InsertEventMarkerEXT)                     /* 480 */ \
  OP(PushGroupMarkerEXT)                       /* 481 */ \
  OP(PopGroupMarkerEXT)                        /* 482 */ \
  OP(GenVertexArraysOESImmediate)              /* 483 */ \
  OP(DeleteVertexArraysOESImmediate)           /* 484 */ \
  OP(IsVertexArrayOES)                         /* 485 */ \
  OP(BindVertexArrayOES)                       /* 486 */ \
  OP(SwapBuffers)                              /* 487 */ \
  OP(GetMaxValueInBufferCHROMIUM)              /* 488 */ \
  OP(EnableFeatureCHROMIUM)                    /* 489 */ \
  OP(MapBufferRange)                           /* 490 */ \
  OP(UnmapBuffer)                              /* 491 */ \
  OP(ResizeCHROMIUM)                           /* 492 */ \
  OP(GetRequestableExtensionsCHROMIUM)         /* 493 */ \
  OP(RequestExtensionCHROMIUM)                 /* 494 */ \
  OP(GetProgramInfoCHROMIUM)                   /* 495 */ \
  OP(GetUniformBlocksCHROMIUM)                 /* 496 */ \
  OP(GetTransformFeedbackVaryingsCHROMIUM)     /* 497 */ \
  OP(GetUniformsES3CHROMIUM)                   /* 498 */ \
  OP(GetTranslatedShaderSourceANGLE)           /* 499 */ \
  OP(PostSubBufferCHROMIUM)                    /* 500 */ \
  OP(TexImageIOSurface2DCHROMIUM)              /* 501 */ \
  OP(CopyTextureCHROMIUM)                      /* 502 */ \
  OP(CopySubTextureCHROMIUM)                   /* 503 */ \
  OP(DrawArraysInstancedANGLE)                 /* 504 */ \
  OP(DrawElementsInstancedANGLE)               /* 505 */ \
  OP(VertexAttribDivisorANGLE)                 /* 506 */ \
  OP(GenMailboxCHROMIUM)                       /* 507 */ \
  OP(ProduceTextureCHROMIUMImmediate)          /* 508 */ \
  OP(ProduceTextureDirectCHROMIUMImmediate)    /* 509 */ \
  OP(ConsumeTextureCHROMIUMImmediate)          /* 510 */ \
  OP(CreateAndConsumeTextureCHROMIUMImmediate) /* 511 */ \
  OP(BindUniformLocationCHROMIUMBucket)        /* 512 */ \
  OP(GenValuebuffersCHROMIUMImmediate)         /* 513 */ \
  OP(DeleteValuebuffersCHROMIUMImmediate)      /* 514 */ \
  OP(IsValuebufferCHROMIUM)                    /* 515 */ \
  OP(BindValuebufferCHROMIUM)                  /* 516 */ \
  OP(SubscribeValueCHROMIUM)                   /* 517 */ \
  OP(PopulateSubscribedValuesCHROMIUM)         /* 518 */ \
  OP(UniformValuebufferCHROMIUM)               /* 519 */ \
  OP(BindTexImage2DCHROMIUM)                   /* 520 */ \
  OP(ReleaseTexImage2DCHROMIUM)                /* 521 */ \
  OP(TraceBeginCHROMIUM)                       /* 522 */ \
  OP(TraceEndCHROMIUM)                         /* 523 */ \
  OP(AsyncTexSubImage2DCHROMIUM)               /* 524 */ \
  OP(AsyncTexImage2DCHROMIUM)                  /* 525 */ \
  OP(WaitAsyncTexImage2DCHROMIUM)              /* 526 */ \
  OP(WaitAllAsyncTexImage2DCHROMIUM)           /* 527 */ \
  OP(DiscardFramebufferEXTImmediate)           /* 528 */ \
  OP(LoseContextCHROMIUM)                      /* 529 */ \
  OP(InsertSyncPointCHROMIUM)                  /* 530 */ \
  OP(WaitSyncPointCHROMIUM)                    /* 531 */ \
  OP(DrawBuffersEXTImmediate)                  /* 532 */ \
  OP(DiscardBackbufferCHROMIUM)                /* 533 */ \
  OP(ScheduleOverlayPlaneCHROMIUM)             /* 534 */ \
  OP(SwapInterval)                             /* 535 */ \
  OP(MatrixLoadfCHROMIUMImmediate)             /* 536 */ \
  OP(MatrixLoadIdentityCHROMIUM)               /* 537 */ \
  OP(BlendBarrierKHR)                          /* 538 */

enum CommandId {
  kStartPoint = cmd::kLastCommonId,  // All GLES2 commands start after this.
#define GLES2_CMD_OP(name) k##name,
  GLES2_COMMAND_LIST(GLES2_CMD_OP)
#undef GLES2_CMD_OP
      kNumCommands
};

#endif  // GPU_COMMAND_BUFFER_COMMON_GLES2_CMD_IDS_AUTOGEN_H_
