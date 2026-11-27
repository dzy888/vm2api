// 0040cfc0 poll_frame

/* WARNING: Instruction at (ram,0x0040d13e) overlaps instruction at (ram,0x0040d138)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>,
   craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0},
   craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0}::{closure#0}>>
   as http_body[237d564c59cb9271]::Body>::poll_frame */

undefined8 * __rustcall
<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0},craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0}::{closure#0}>>as_http_body[237d564c59cb9271]::Body>
::poll_frame(undefined4 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
            undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *local_1b0;
  longlong *local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_118 = param_4;
  if (*param_3 == 0) {
    uVar10 = param_3[1];
    *param_3 = 2;
    if (uVar10 < 3) {
      *param_3 = 1;
      *(undefined1 *)(param_3 + 0x13) = 0;
      *(undefined1 *)((longlong)param_3 + 0x99) = 0;
joined_r0x0040d032:
      if (uVar10 == 2) {
LAB_0040d651:
        *(undefined2 *)(param_3 + 0x13) = 1;
        lVar13 = *param_3;
      }
      else {
        *(undefined1 *)((longlong)param_3 + 0x99) = 1;
        param_3[10] = uVar10;
        *(int *)(param_3 + 0xb) = (int)param_3[2];
        *(undefined4 *)((longlong)param_3 + 0x5c) = *(undefined4 *)((longlong)param_3 + 0x14);
        *(int *)(param_3 + 0xc) = (int)param_3[3];
        *(undefined4 *)((longlong)param_3 + 100) = *(undefined4 *)((longlong)param_3 + 0x1c);
        param_3[0xd] = param_3[4];
        param_3[0xe] = param_3[5];
        param_3[0xf] = param_3[6];
        param_3[0x10] = param_3[7];
        param_3[0x11] = param_3[8];
        param_3[0x12] = param_3[9];
LAB_0040d17a:
        local_1b0 = param_3 + 1;
        if (param_3[0xf] != 0) {
          lVar13 = param_3[0xe];
          uVar10 = 0;
          if ((ulonglong)param_3[0xc] <= lVar13 + 1U) {
            uVar10 = param_3[0xc];
          }
          param_3[0xe] = (lVar13 - uVar10) + 1;
          param_3[0xf] = param_3[0xf] + -1;
          lVar14 = *(longlong *)(param_3[0xd] + lVar13 * 0x20);
          if (lVar14 != 0) {
            lVar13 = param_3[0xd] + lVar13 * 0x20;
            local_128 = *(undefined8 *)(lVar13 + 0x18);
            local_138 = *(undefined8 *)(lVar13 + 8);
            uStack_130 = *(undefined8 *)(lVar13 + 0x10);
            *(undefined1 *)((longlong)param_3 + 0x99) = 0;
            goto LAB_0040d593;
          }
        }
        if ((char)param_3[0x12] == '\x01') {
          if (*(char *)((longlong)param_3 + 0x99) != '\0') {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>
                      (param_3 + 10);
          }
          goto LAB_0040d651;
        }
        plVar4 = param_3 + 0x10;
        param_3[0x14] = (longlong)plVar4;
        *(undefined1 *)(param_3 + 0x16) = 0;
        param_3[0x15] = (longlong)plVar4;
        <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
        ::recv(&local_198,plVar4,param_4);
        *(char *)(param_3 + 0x16) = (char)local_198 * '\x02' + '\x01';
        if (local_198 == 1) {
          uVar5 = 3;
          goto LAB_0040d518;
        }
        lVar14 = CONCAT44(uStack_18c,local_190);
        local_88 = uStack_188;
        uStack_84 = uStack_184;
        uStack_80 = (undefined4)uStack_180;
        uStack_7c = uStack_180._4_4_;
        local_78 = CONCAT44(uStack_174,uStack_178);
        if (lVar14 == 0) goto code_r0x0040d24a;
        local_138 = CONCAT44(uStack_184,uStack_188);
        uStack_130 = uStack_180;
        *(undefined1 *)((longlong)param_3 + 0x99) = 0;
        local_128 = local_78;
LAB_0040d593:
        lVar13 = param_3[10];
        local_c8 = (undefined4)param_3[0xb];
        uStack_c4 = *(undefined4 *)((longlong)param_3 + 0x5c);
        uStack_c0 = (undefined4)param_3[0xc];
        uStack_bc = *(undefined4 *)((longlong)param_3 + 100);
        local_b8 = (undefined4)param_3[0xd];
        uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x6c);
        uStack_b0 = (undefined4)param_3[0xe];
        uStack_ac = *(undefined4 *)((longlong)param_3 + 0x74);
        local_a8 = (undefined4)param_3[0xf];
        uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x7c);
        uStack_a0 = (undefined4)param_3[0x10];
        uStack_9c = *(undefined4 *)((longlong)param_3 + 0x84);
        local_98 = (undefined4)param_3[0x11];
        uStack_94 = *(undefined4 *)((longlong)param_3 + 0x8c);
        uStack_90 = (undefined4)param_3[0x12];
        uStack_8c = *(undefined4 *)((longlong)param_3 + 0x94);
        *(undefined2 *)(param_3 + 0x13) = 1;
        if (lVar13 == -2) {
LAB_0040d5f8:
          *param_2 = 3;
          return param_2;
        }
        if (lVar13 != -1) {
          uStack_180 = local_128;
          local_190 = (undefined4)local_138;
          uStack_18c = local_138._4_4_;
          uStack_188 = (undefined4)uStack_130;
          uStack_184 = uStack_130._4_4_;
          local_198 = lVar14;
          if (*param_3 == 1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_0_::_closure_0_>
                      (local_1b0);
          }
          else if ((*param_3 == 0) && ((int)*local_1b0 != 2)) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>
                      (local_1b0);
          }
          *param_3 = 0;
          param_3[1] = lVar13;
          param_3[2] = CONCAT44(uStack_c4,local_c8);
          param_3[3] = CONCAT44(uStack_bc,uStack_c0);
          param_3[4] = CONCAT44(uStack_b4,local_b8);
          param_3[5] = CONCAT44(uStack_ac,uStack_b0);
          param_3[6] = CONCAT44(uStack_a4,local_a8);
          param_3[7] = CONCAT44(uStack_9c,uStack_a0);
          param_3[8] = CONCAT44(uStack_94,local_98);
          param_3[9] = CONCAT44(uStack_8c,uStack_90);
          param_2[3] = CONCAT44(uStack_184,uStack_188);
          param_2[4] = uStack_180;
          *param_2 = 0xffffffffffffffff;
          param_2[1] = lVar14;
          param_2[2] = CONCAT44(uStack_18c,local_190);
          return param_2;
        }
        lVar13 = *param_3;
      }
      if (lVar13 == 1) {
        local_1b0 = param_3 + 1;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_0_::_closure_0_>
                  (local_1b0);
      }
      else {
        local_1b0 = param_3 + 1;
        if ((lVar13 == 0) && ((int)*local_1b0 != 2)) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>
                    (local_1b0);
        }
      }
      *param_3 = 2;
      *param_2 = 0xfffffffffffffffd;
      return param_2;
    }
LAB_0040d11f:
    (*(code *)PTR_panic_00799338)(param_1,&PTR_s__vendor_futures_util_0_3_34_src__00788998);
switchD_0040d06c_caseD_2:
    (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
    goto switchD_0040d06c_caseD_1;
  }
  if ((int)*param_3 != 1) {
    param_1 = (*(code *)PTR_panic_00799338)
                        (param_5,&PTR_s__vendor_futures_util_0_3_34_src__00789768);
    goto LAB_0040d11f;
  }
  puVar9 = &switchD_0040d06c::switchdataD_001936fc;
  UNRECOVERED_JUMPTABLE =
       (code *)((longlong)&switchD_0040d06c::switchdataD_001936fc +
               (longlong)(int)(&switchD_0040d06c::switchdataD_001936fc)[*(byte *)(param_3 + 0x13)]);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_3 + 0x13)) {
  case 0:
    uVar10 = param_3[1];
    *(undefined1 *)((longlong)param_3 + 0x99) = 0;
    goto joined_r0x0040d032;
  case 2:
    goto switchD_0040d06c_caseD_2;
  case 3:
    uVar10 = (ulonglong)*(byte *)(param_3 + 0x16);
    puVar9 = &UINT_00193710;
    goto code_r0x0040d0df;
  case 4:
    goto LAB_0040d27c;
  case 5:
    uVar10 = CONCAT71((int7)((ulonglong)UNRECOVERED_JUMPTABLE >> 8),uRam66310d8d48000000);
code_r0x0040d0df:
    UNRECOVERED_JUMPTABLE = (code *)((longlong)(int)puVar9[uVar10] + (longlong)puVar9);
switchD_0040d06c_caseD_8:
                    /* WARNING: Could not recover jumptable at 0x0040d0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)();
    return puVar6;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto switchD_0040d06c_caseD_8;
  }
switchD_0040d06c_caseD_1:
  (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
  (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
  (*UNRECOVERED_JUMPTABLE)();
code_r0x0040d24a:
  *(undefined1 *)(param_3 + 0x12) = 1;
  lVar13 = param_3[10];
  param_3[10] = 0;
  param_3[0x15] = lVar13;
  param_3[0x16] = param_3[0xb];
  if (lVar13 == 1) {
    param_3[0x14] = param_3[0xb];
LAB_0040d27c:
    plVar4 = param_3 + 0x14;
    <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
    ::poll(&local_198,plVar4,param_4);
    lVar13 = local_198;
    if (local_198 == -4) {
      uVar5 = 4;
LAB_0040d518:
      local_1a0 = param_3 + 0x13;
      *(undefined1 *)local_1a0 = uVar5;
      goto LAB_0040d5f8;
    }
    local_38 = local_160;
    local_48 = local_170;
    uStack_44 = uStack_16c;
    uStack_40 = uStack_168;
    uStack_3c = uStack_164;
    local_58 = (undefined4)uStack_180;
    uStack_54 = uStack_180._4_4_;
    uStack_50 = uStack_178;
    uStack_4c = uStack_174;
    local_68 = local_190;
    uStack_64 = uStack_18c;
    uStack_60 = uStack_188;
    uStack_5c = uStack_184;
    <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(plVar4);
    plVar12 = (longlong *)*plVar4;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow(plVar4);
      }
    }
    if (lVar13 == -3) {
      local_d8 = DAT_00788210;
      local_e8 = _DAT_00788200;
      uStack_e0 = _UNK_00788208;
      local_f8 = _DAT_007881f0;
      uStack_f0 = _UNK_007881f8;
      local_108 = PTR_DAT_007881e0;
      uStack_100 = _UNK_007881e8;
      lVar13 = -1;
    }
    else {
      local_d8 = local_38;
      local_e8 = CONCAT44(uStack_44,local_48);
      uStack_e0 = CONCAT44(uStack_3c,uStack_40);
      local_f8 = CONCAT44(uStack_54,local_58);
      uStack_f0 = CONCAT44(uStack_4c,uStack_50);
      local_108 = (undefined *)CONCAT44(uStack_64,local_68);
      uStack_100 = CONCAT44(uStack_5c,uStack_60);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Failure>
                (&DAT_007881d8);
      if (lVar13 == -2) goto LAB_0040d17a;
    }
    local_190 = (undefined4)local_108;
    uStack_18c = local_108._4_4_;
    uStack_188 = (undefined4)uStack_100;
    uStack_184 = uStack_100._4_4_;
    uStack_180 = local_f8;
    uStack_178 = (undefined4)uStack_f0;
    uStack_174 = uStack_f0._4_4_;
    local_170 = (undefined4)local_e8;
    uStack_16c = local_e8._4_4_;
    uStack_168 = (undefined4)uStack_e0;
    uStack_164 = uStack_e0._4_4_;
    local_160 = local_d8;
    local_198 = lVar13;
    craggemini_core[66f3c71560d70857]::multiprotocol::render_sse_error_frame
              (&local_158,"",&local_198,0);
    plVar12 = local_148;
    plVar4 = local_158;
    plVar11 = local_150 + (longlong)local_148 * 4;
    local_158 = local_150;
    local_148 = plVar4;
    local_140 = plVar11;
    if (plVar12 != (longlong *)0x0) {
      local_110 = param_3 + 0xc;
      plVar4 = local_150;
      do {
        lVar13 = *plVar4;
        plVar12 = plVar4 + 4;
        if (lVar13 == 0) goto LAB_0040d4e7;
        lVar14 = plVar4[1];
        lVar2 = plVar4[2];
        lVar3 = plVar4[3];
        uVar10 = param_3[0xc];
        uVar7 = param_3[0xf];
        if (uVar7 == uVar10) {
          (*(code *)PTR_grow_00799750)();
          uVar10 = param_3[0xc];
          uVar7 = param_3[0xf];
        }
        param_3[0xf] = uVar7 + 1;
        if (uVar7 + param_3[0xe] < uVar10) {
          uVar10 = 0;
        }
        lVar1 = param_3[0xd];
        lVar8 = ((uVar7 + param_3[0xe]) - uVar10) * 0x20;
        *(longlong *)(lVar1 + lVar8) = lVar13;
        *(longlong *)(lVar1 + 8 + lVar8) = lVar14;
        *(longlong *)(lVar1 + 0x10 + lVar8) = lVar2;
        *(longlong *)(lVar1 + 0x18 + lVar8) = lVar3;
        plVar12 = plVar4 + 4;
        plVar4 = plVar4 + 4;
      } while (plVar12 != plVar11);
      plVar12 = plVar11;
LAB_0040d4e7:
      local_150 = plVar12;
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_158);
    param_4 = local_118;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Failure>
              (&local_198);
  }
  goto LAB_0040d17a;
}


