; Copyright (C) 2008 The Android Open Source Project
;
; Licensed under the Apache License, Version 2.0 (the "License");
; you may not use this file except in compliance with the License.
; You may obtain a copy of the License at
;
;      http://www.apache.org/licenses/LICENSE-2.0
;
; Unless required by applicable law or agreed to in writing, software
; distributed under the License is distributed on an "AS IS" BASIS,
; WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
; See the License for the specific language governing permissions and
; limitations under the License.

.source T_invokespecial_25.java
.class public dxc/junit/opcodes/invokespecial/jm/T_invokespecial_25
.super dxc/junit/opcodes/invokespecial/jm/TSuper

.method public <init>()V
    aload_0
    invokespecial dxc/junit/opcodes/invokespecial/jm/TSuper/<init>()V

    return
.end method


.method public run()I
    .limit stack 2
    .limit locals 2

    new dxc/junit/opcodes/invokespecial/jm/TPlain
    dup
    invokespecial dxc/junit/opcodes/invokespecial/jm/TPlain/<init>()V
    astore_1

    aload_1
    invokevirtual dxc/junit/opcodes/invokespecial/jm/TSuper/toIntP()I

    ireturn

.end method
