// 00688d80 drain_ring_into_buffer

/* WARNING: Type propagation algorithm not settling */
/* <craggemini_core[66f3c71560d70857]::bridge::Bridge>::drain_ring_into_buffer */

uint * __rustcall
<craggemini_core[66f3c71560d70857]::bridge::Bridge>::drain_ring_into_buffer
          (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_R12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_02;
  int iVar13;
  int extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  longlong local_488;
  uint *local_480;
  longlong local_478;
  uint *local_468;
  uint *local_450;
  uint *local_440;
  uint *local_430;
  uint *local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  int local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  longlong local_3d8;
  longlong lStack_3d0;
  undefined4 local_3c8;
  uint local_3c4;
  uint *local_3c0;
  uint *local_3b8;
  uint *local_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  int local_3a0;
  undefined2 uStack_39c;
  undefined2 uStack_39a;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  longlong lStack_368;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_280;
  undefined8 local_278;
  uint *local_258;
  uint *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  uint *local_230;
  uint *local_228;
  uint *local_220;
  uint *local_218;
  uint *local_210;
  uint *local_208;
  uint *local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined1 local_104 [212];
  
  local_280 = param_2;
  <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::pop_response(&local_3c0);
  if (local_3c0 == (uint *)0xfffffffffffffffe) {
    return local_3b8;
  }
  uVar11 = 1;
  local_3c8 = param_3;
LAB_00688e12:
  local_278 = local_3b0;
  puVar6 = local_278;
  if (local_3c0 == (uint *)0xffffffffffffffff) {
    return (uint *)0x0;
  }
  local_278._0_4_ = SUB84(local_3b0,0);
  local_278._4_4_ = (undefined4)((ulonglong)local_3b0 >> 0x20);
  local_248 = (undefined4)local_278;
  uStack_244 = local_278._4_4_;
  uStack_240 = uStack_3a8;
  uStack_23c = uStack_3a4;
  local_278 = puVar6;
  local_258 = local_3c0;
  local_250 = local_3b8;
  <craggemini_core[66f3c71560d70857]::shm::ChunkReassembler>::feed
            (&local_3c0,param_1 + 0xe0,&local_258);
  iVar13 = local_3a0;
  puVar7 = local_3b0;
  puVar6 = local_3c0;
  if (local_3c0 == (uint *)0xfffffffffffffffe) {
    return local_3b8;
  }
  if (local_3c0 == (uint *)0xffffffffffffffff) goto LAB_00689527;
  switch(uStack_39c) {
  case 10:
    if (&DAT_00000004 <= local_3b0) {
      puVar7 = (uint *)(ulonglong)*local_3b8 + 1;
      local_488 = (longlong)local_3b0 - (longlong)puVar7;
      if (puVar7 <= local_3b0) {
        local_428 = local_3b8 + 1;
        uStack_418 = (uint *)0x0;
        uStack_410 = 0;
        local_420 = (uint *)(ulonglong)*local_3b8;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::protocol::RingRespMeta>
                  (&local_3c0,&local_428);
        local_430 = local_3b0;
        local_480 = local_3b8;
        puVar8 = local_3c0;
        if (local_3c0 != (uint *)0xffffffffffffffff) {
          puVar7 = (uint *)CONCAT44(uStack_3a4,uStack_3a8);
          local_298 = (uint *)CONCAT44(CONCAT22(uStack_39a,uStack_39c),local_3a0);
          uStack_290 = uStack_398;
          uStack_28c = uStack_394;
          lVar10 = CONCAT44(uStack_38c,local_390);
          lVar9 = CONCAT44(uStack_374,uStack_378);
          if (puVar7 == (uint *)0xffffffffffffffff) {
            if (iVar13 == 0) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar7 == (uint *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_00689e72;
              }
              *puVar7 = 0x6e69616d;
              local_428 = (uint *)&DAT_00000004;
              uStack_418 = (uint *)&DAT_00000004;
              local_420 = puVar7;
              iVar13 = extraout_XMM0_Da_03;
            }
            else {
              local_3c4 = iVar13 + 1;
              local_3c0 = &local_3c4;
              local_3b8 = (uint *)PTR_fmt_00799470;
              iVar13 = (*(code *)PTR_format_inner_00799048)
                                 (CONCAT44(uStack_36c,local_370),&local_3c0);
            }
            if (local_488 != 0) goto LAB_0068966e;
LAB_00688fdb:
            local_478 = 1;
          }
          else {
            local_420 = (uint *)CONCAT44(CONCAT22(uStack_39a,uStack_39c),local_3a0);
            uStack_418 = (uint *)CONCAT44(uStack_394,uStack_398);
            iVar13 = local_3a0;
            local_428 = puVar7;
            if (local_488 == 0) goto LAB_00688fdb;
LAB_0068966e:
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            local_478 = (*(code *)PTR___rust_alloc_00799000)();
            if (local_478 == 0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00689e72;
            }
            iVar13 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,local_488);
          }
          uVar12 = (*(code *)PTR_from_utf8_00799468)(iVar13,local_488);
          local_440 = uStack_418;
          local_468 = local_420;
          local_450 = local_428;
          if ((char)local_3c0 != '\0') {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
            uVar3 = s_me_in_shared_memory_ring_001a4aad._8_8_;
            if (puVar7 == (uint *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00689e72;
            }
            *(undefined8 *)(puVar7 + 4) = s_me_in_shared_memory_ring_001a4aad._0_8_;
            *(undefined8 *)(puVar7 + 6) = uVar3;
            uVar5 = s_non_UTF8_SSE_fra_001a4a9d._12_4_;
            uVar4 = s_non_UTF8_SSE_fra_001a4a9d._8_4_;
            uVar12 = s_non_UTF8_SSE_fra_001a4a9d._4_4_;
            *puVar7 = s_non_UTF8_SSE_fra_001a4a9d._0_4_;
            puVar7[1] = uVar12;
            puVar7[2] = uVar4;
            puVar7[3] = uVar5;
            puVar7[8] = 0x2079726f;
            puVar7[9] = 0x676e6972;
            local_3c0 = (uint *)0x28;
            local_3b0 = (uint *)0x28;
            local_3b8 = puVar7;
            puVar7 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
            uVar12 = extraout_XMM0_Da_09;
            if (local_488 != 0) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_09,1);
            }
            if (local_428 != (uint *)0x0) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            if (puVar8 != (uint *)0x0) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            if (lVar10 - 1U < 0xfffffffffffffffe) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            if (lVar9 - 1U < 0xfffffffffffffffe) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            goto LAB_006899bd;
          }
          if (lVar10 - 1U < 0xfffffffffffffffe) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
          }
          if (lVar9 - 1U < 0xfffffffffffffffe) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
          }
          puVar7 = (uint *)0x8000000000000003;
          unaff_R12 = local_488;
          goto joined_r0x006892d8;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (&local_3b8);
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
    uVar3 = s_Sse_ring_envelope_001a4b86._8_8_;
    if (puVar7 != (uint *)0x0) {
      *(undefined8 *)(puVar7 + 4) = s_Sse_ring_envelope_001a4b86._0_8_;
      *(undefined8 *)(puVar7 + 6) = uVar3;
      uVar5 = s_invalid_Provider_001a4b76._12_4_;
      uVar4 = s_invalid_Provider_001a4b76._8_4_;
      uVar12 = s_invalid_Provider_001a4b76._4_4_;
      *puVar7 = s_invalid_Provider_001a4b76._0_4_;
      puVar7[1] = uVar12;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      *(char *)(puVar7 + 8) = 'e';
      local_3c0 = (uint *)0x21;
      local_3b0 = (uint *)0x21;
      local_3b8 = puVar7;
      puVar7 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
      uVar12 = extraout_XMM0_Da_05;
LAB_006899bd:
      if (puVar6 == (uint *)0x0) {
        return puVar7;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      return puVar7;
    }
    break;
  case 0xb:
    if (&DAT_00000004 <= local_3b0) {
      puVar7 = (uint *)(ulonglong)*local_3b8 + 1;
      local_488 = (longlong)local_3b0 - (longlong)puVar7;
      if (puVar7 <= local_3b0) {
        local_428 = local_3b8 + 1;
        uStack_418 = (uint *)0x0;
        uStack_410 = 0;
        local_420 = (uint *)(ulonglong)*local_3b8;
        uVar12 = serde_json[dc3825464c436029]::de::from_trait::
                 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::protocol::RingRespMeta>
                           (&local_3c0,&local_428);
        local_430 = local_3b0;
        local_480 = local_3b8;
        puVar8 = local_3c0;
        if (local_3c0 != (uint *)0xffffffffffffffff) {
          lVar10 = CONCAT44(uStack_3a4,uStack_3a8);
          local_450 = (uint *)CONCAT44(uStack_38c,local_390);
          lVar9 = CONCAT44(uStack_374,uStack_378);
          if (local_450 == (uint *)0xffffffffffffffff) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
            uVar3 = s_e_in_ring_envelope_001a4b40._8_8_;
            if (puVar7 == (uint *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00689e72;
            }
            *(undefined8 *)(puVar7 + 4) = s_e_in_ring_envelope_001a4b40._0_8_;
            *(undefined8 *)(puVar7 + 6) = uVar3;
            uVar5 = s_missing_tool_nam_001a4b30._12_4_;
            uVar4 = s_missing_tool_nam_001a4b30._8_4_;
            uVar12 = s_missing_tool_nam_001a4b30._4_4_;
            *puVar7 = s_missing_tool_nam_001a4b30._0_4_;
            puVar7[1] = uVar12;
            puVar7[2] = uVar4;
            puVar7[3] = uVar5;
            *(undefined2 *)(puVar7 + 8) = 0x6570;
            local_3c0 = (uint *)0x22;
            local_3b0 = (uint *)0x22;
            local_3b8 = puVar7;
            puVar7 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
            uVar12 = extraout_XMM0_Da_07;
          }
          else {
            local_468 = (uint *)CONCAT44(uStack_384,uStack_388);
            local_440 = (uint *)CONCAT44(uStack_37c,local_380);
            if (local_488 == 0) {
              local_478 = 1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              local_478 = (*(code *)PTR___rust_alloc_00799000)();
              if (local_478 == 0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_00689e72;
              }
              uVar12 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,local_488);
            }
            uVar12 = (*(code *)PTR_from_utf8_00799468)(uVar12,local_488);
            if ((char)local_3c0 == '\0') {
              if (lVar10 - 1U < 0xfffffffffffffffe) {
                uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
              }
              if (lVar9 - 1U < 0xfffffffffffffffe) {
                uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
              }
              puVar7 = (uint *)0x8000000000000006;
              unaff_R12 = local_488;
              goto joined_r0x006892d8;
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
            uVar3 = s_tool_payload_in_ring_001a4b62._8_8_;
            if (puVar7 == (uint *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00689e72;
            }
            *(undefined8 *)(puVar7 + 4) = s_tool_payload_in_ring_001a4b62._0_8_;
            *(undefined8 *)(puVar7 + 6) = uVar3;
            uVar5 = s_non_UTF8_native_001a4b52._12_4_;
            uVar4 = s_non_UTF8_native_001a4b52._8_4_;
            uVar12 = s_non_UTF8_native_001a4b52._4_4_;
            *puVar7 = s_non_UTF8_native_001a4b52._0_4_;
            puVar7[1] = uVar12;
            puVar7[2] = uVar4;
            puVar7[3] = uVar5;
            puVar7[8] = 0x676e6972;
            local_3c0 = (uint *)0x24;
            local_3b0 = (uint *)0x24;
            local_3b8 = puVar7;
            puVar7 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
            uVar12 = extraout_XMM0_Da_10;
            if (local_488 != 0) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_10,1);
            }
            if (local_450 != (uint *)0x0) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
          }
          if (puVar8 != (uint *)0x0) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
          }
          if (lVar10 - 1U < 0xfffffffffffffffe) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
          }
          if (lVar9 - 1U < 0xfffffffffffffffe) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
          }
          goto LAB_006899bd;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (&local_3b8);
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
    uVar3 = s_olPayload_ring_envelope_001a4b19._8_8_;
    if (puVar7 != (uint *)0x0) {
      *(undefined8 *)(puVar7 + 4) = s_olPayload_ring_envelope_001a4b19._0_8_;
      *(undefined8 *)(puVar7 + 6) = uVar3;
      uVar5 = s_invalid_NativeTo_001a4b09._12_4_;
      uVar4 = s_invalid_NativeTo_001a4b09._8_4_;
      uVar12 = s_invalid_NativeTo_001a4b09._4_4_;
      *puVar7 = s_invalid_NativeTo_001a4b09._0_4_;
      puVar7[1] = uVar12;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      builtin_strncpy((char *)((longlong)puVar7 + 0x1f),"envelope",8);
      local_3c0 = (uint *)0x27;
      local_3b0 = (uint *)0x27;
      local_3b8 = puVar7;
      puVar7 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
      uVar12 = extraout_XMM0_Da_06;
      goto LAB_006899bd;
    }
    break;
  default:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
    uVar3 = s_nse_ring_frame_kind_001a543e._8_8_;
    if (puVar7 == (uint *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00689e72;
    }
    *(undefined8 *)(puVar7 + 4) = s_nse_ring_frame_kind_001a543e._0_8_;
    *(undefined8 *)(puVar7 + 6) = uVar3;
    uVar5 = s_unexpected_respo_001a542e._12_4_;
    uVar4 = s_unexpected_respo_001a542e._8_4_;
    uVar12 = s_unexpected_respo_001a542e._4_4_;
    *puVar7 = s_unexpected_respo_001a542e._0_4_;
    puVar7[1] = uVar12;
    puVar7[2] = uVar4;
    puVar7[3] = uVar5;
    *(undefined4 *)((longlong)puVar7 + 0x1f) = 0x646e696b;
    local_3c0 = (uint *)0x23;
    local_3b0 = (uint *)0x23;
    local_3b8 = puVar7;
    puVar8 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
    puVar7 = (uint *)0xffffffffffffffff;
    uVar12 = extraout_XMM0_Da_01;
    goto joined_r0x006892d8;
  case 0xd:
    if (&DAT_00000004 <= local_3b0) {
      puVar1 = (uint *)(ulonglong)*local_3b8 + 1;
      if (puVar1 <= local_3b0) {
        local_428 = local_3b8 + 1;
        uStack_418 = (uint *)0x0;
        uStack_410 = 0;
        local_420 = (uint *)(ulonglong)*local_3b8;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::protocol::RingRespMeta>
                  (&local_3c0,&local_428);
        local_480 = local_3b8;
        puVar8 = local_3c0;
        if (local_3c0 != (uint *)0xffffffffffffffff) {
          local_3d8 = CONCAT44(uStack_36c,local_370);
          lStack_3d0 = lStack_368;
          local_3e8 = local_380;
          uStack_3e4 = uStack_37c;
          uStack_3e0 = uStack_378;
          uStack_3dc = uStack_374;
          local_3f8 = local_390;
          uStack_3f4 = uStack_38c;
          uStack_3f0 = uStack_388;
          uStack_3ec = uStack_384;
          local_408 = local_3a0;
          uStack_400 = uStack_398;
          uStack_3fc = uStack_394;
          uStack_418 = local_3b0;
          uStack_410 = CONCAT44(uStack_3a4,uStack_3a8);
          local_428 = local_3c0;
          local_420 = local_3b8;
          local_450 = (uint *)((longlong)puVar7 - (longlong)puVar1);
          if (local_450 == (uint *)0x0) {
            local_468 = (uint *)0x1;
            uVar12 = local_3b0._0_4_;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            local_468 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
            if (local_468 == (uint *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00689e72;
            }
            uVar12 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,local_450);
          }
          uVar12 = (*(code *)PTR_from_utf8_00799468)(uVar12,local_450);
          unaff_R12 = lStack_3d0;
          local_430 = uStack_418;
          if ((char)local_3c0 != '\0') {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
            uVar3 = s_t_SSE_frame_in_ring_001a4af6._8_8_;
            if (puVar7 == (uint *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00689e72;
            }
            *(undefined8 *)(puVar7 + 4) = s_t_SSE_frame_in_ring_001a4af6._0_8_;
            *(undefined8 *)(puVar7 + 6) = uVar3;
            uVar5 = s_non_UTF8_subagen_001a4ae6._12_4_;
            uVar4 = s_non_UTF8_subagen_001a4ae6._8_4_;
            uVar12 = s_non_UTF8_subagen_001a4ae6._4_4_;
            *puVar7 = s_non_UTF8_subagen_001a4ae6._0_4_;
            puVar7[1] = uVar12;
            puVar7[2] = uVar4;
            puVar7[3] = uVar5;
            builtin_strncpy((char *)((longlong)puVar7 + 0x1f),"ring",4);
            local_3c0 = (uint *)0x23;
            local_3b0 = (uint *)0x23;
            local_3b8 = puVar7;
            puVar7 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
            uVar12 = extraout_XMM0_Da_08;
            if (local_450 != (uint *)0x0) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_08,1);
            }
            if (puVar8 != (uint *)0x0) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            if ((uStack_410 != -1) && (uStack_410 != 0)) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            if ((CONCAT44(uStack_3f4,local_3f8) != -1) && (CONCAT44(uStack_3f4,local_3f8) != 0)) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            if ((CONCAT44(uStack_3dc,uStack_3e0) != -1) && (CONCAT44(uStack_3dc,uStack_3e0) != 0)) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            goto LAB_006899bd;
          }
          local_488 = CONCAT44(uStack_3dc,uStack_3e0);
          if ((uStack_410 != -1) && (uStack_410 != 0)) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
          }
          if ((CONCAT44(uStack_3f4,local_3f8) != -1) && (CONCAT44(uStack_3f4,local_3f8) != 0)) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
          }
          puVar7 = (uint *)0x800000000000000a;
          local_440 = local_450;
          local_478 = local_3d8;
          goto joined_r0x006892d8;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (&local_3b8);
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
    uVar3 = s_Sse_ring_envelope_001a4ad5._8_8_;
    if (puVar7 != (uint *)0x0) {
      *(undefined8 *)(puVar7 + 4) = s_Sse_ring_envelope_001a4ad5._0_8_;
      *(undefined8 *)(puVar7 + 6) = uVar3;
      uVar5 = s_invalid_Subagent_001a4ac5._12_4_;
      uVar4 = s_invalid_Subagent_001a4ac5._8_4_;
      uVar12 = s_invalid_Subagent_001a4ac5._4_4_;
      *puVar7 = s_invalid_Subagent_001a4ac5._0_4_;
      puVar7[1] = uVar12;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      *(char *)(puVar7 + 8) = 'e';
      local_3c0 = (uint *)0x21;
      local_3b0 = (uint *)0x21;
      local_3b8 = puVar7;
      puVar7 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
      uVar12 = extraout_XMM0_Da_04;
      goto LAB_006899bd;
    }
    break;
  case 0xf:
    local_428 = local_3b8;
    local_420 = local_3b0;
    uStack_418 = (uint *)0x0;
    uStack_410 = 0;
    uVar12 = serde_json[dc3825464c436029]::de::from_trait::
             <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::protocol::FromBridge>
                       (&local_3c0,&local_428);
    puVar1 = local_3b0;
    puVar8 = local_3b8;
    puVar7 = local_3c0;
    if (local_3c0 == (uint *)0xffffffffffffffff) {
      local_298 = local_3b8;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar8 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
      uVar3 = s_ared_memory_ring_001a4a8d._8_8_;
      if (puVar8 == (uint *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00689e72;
      }
      *(ulonglong *)((longlong)puVar8 + 0x1d) =
           CONCAT53(s_ared_memory_ring_001a4a8d._3_5_,s_ared_memory_ring_001a4a8d._0_3_);
      *(undefined8 *)((longlong)puVar8 + 0x25) = uVar3;
      uVar3 = CONCAT35(s_ared_memory_ring_001a4a8d._0_3_,s_e_event_in_sh_001a4a80._8_5_);
      *(undefined8 *)(puVar8 + 4) = s_e_event_in_sh_001a4a80._0_8_;
      *(undefined8 *)(puVar8 + 6) = uVar3;
      uVar5 = s_invalid_lifecycl_001a4a70._12_4_;
      uVar4 = s_invalid_lifecycl_001a4a70._8_4_;
      uVar12 = s_invalid_lifecycl_001a4a70._4_4_;
      *puVar8 = s_invalid_lifecycl_001a4a70._0_4_;
      puVar8[1] = uVar12;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      local_428 = (uint *)0x2d;
      uStack_418 = (uint *)0x2d;
      local_420 = puVar8;
      puVar8 = (uint *)(*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
      uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                         (&local_298,&local_428);
    }
    else {
      local_430 = (uint *)CONCAT44(uStack_3a4,uStack_3a8);
      local_450 = (uint *)CONCAT26(uStack_39a,CONCAT24(uStack_39c,local_3a0));
      local_468 = (uint *)CONCAT44(uStack_394,uStack_398);
      local_440 = (uint *)CONCAT44(uStack_38c,local_390);
      local_488 = CONCAT44(uStack_384,uStack_388);
      local_478 = CONCAT44(uStack_37c,local_380);
      unaff_R12 = CONCAT44(uStack_374,uStack_378);
      uVar12 = (*(code *)PTR_memcpy_00799008)(uVar12,0xd4);
      local_480 = puVar1;
    }
joined_r0x006892d8:
    if (puVar6 != (uint *)0x0) {
      uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
    }
    if (puVar7 == (uint *)0xffffffffffffffff) {
      return puVar8;
    }
    local_220 = local_480;
    local_218 = local_430;
    (*(code *)PTR_memcpy_00799008)(uVar12,0xd4);
    lVar10 = *(longlong *)(param_1 + 0x100);
    lVar9 = *(longlong *)(param_1 + 0x118);
    local_230 = puVar7;
    local_228 = puVar8;
    local_210 = local_450;
    local_208 = local_468;
    local_200 = local_440;
    local_1f8 = local_488;
    local_1f0 = local_478;
    local_1e8 = unaff_R12;
    if (lVar9 == lVar10) {
      <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::protocol::FromBridge>>
      ::grow(param_1 + 0x100,local_104);
      lVar10 = *(longlong *)(param_1 + 0x100);
      lVar9 = *(longlong *)(param_1 + 0x118);
    }
    *(longlong *)(param_1 + 0x118) = lVar9 + 1;
    (*(code *)PTR_memcpy_00799008)(lVar10,0x128);
    param_3 = local_3c8;
LAB_00689527:
    if ((0x3f < uVar11 && (char)param_3 == '\0') && (*(longlong *)(param_1 + 0xf0) == 0)) {
      return (uint *)0x0;
    }
    <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::pop_response(&local_3c0,local_280);
    uVar11 = uVar11 + 1;
    if (local_3c0 == (uint *)0xfffffffffffffffe) {
      return local_3b8;
    }
    goto LAB_00688e12;
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00689e72:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


