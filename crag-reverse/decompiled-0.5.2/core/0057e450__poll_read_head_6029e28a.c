// 0057e450 poll_read_head

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::poll_read_head */

undefined8 * __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::poll_read_head(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_2b0;
  undefined8 local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong **local_288;
  code *pcStack_280;
  longlong **local_278;
  code *pcStack_270;
  longlong *local_268;
  longlong lStack_260;
  longlong local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  byte local_1b0;
  ulonglong local_1a8;
  byte local_1a0;
  char local_19f;
  char local_19e;
  int local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_120;
  longlong *local_118;
  
  if ((*(char *)(param_2 + 0x240) == '\0') && (iVar1 = *(int *)(param_2 + 0x1e0), iVar1 != -1)) {
    uVar9 = *(ulonglong *)(param_2 + 0x1d8);
    (*(code *)PTR_now_00799e08)();
    uVar8 = (*(code *)PTR_add_00799280)
                      (iVar1,uVar9,
                       &
                       PTR_anon_92c4c5dab1af02541b6de8b875afdfcf_41_llvm_8405253652347736786_0078dc60
                      );
    *(undefined1 *)(param_2 + 0x240) = 1;
    if (*(longlong *)(param_2 + 0x208) == 0) {
      uVar9 = uVar9 & 0xffffffff;
      uVar8 = (*(code *)PTR_sleep_until_00799e18)();
      if (*(longlong *)(param_2 + 0x208) != 0) {
        puVar2 = *(undefined8 **)(param_2 + 0x210);
        uVar15 = extraout_XMM0_Qa;
        if ((code *)*puVar2 != (code *)0x0) {
          uVar15 = (*(code *)*puVar2)();
        }
        if (puVar2[1] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,puVar2[2]);
        }
      }
      *(undefined8 *)(param_2 + 0x208) = uVar8;
      *(ulonglong *)(param_2 + 0x210) = uVar9;
    }
    else {
      (*(code *)PTR_reset_00799e10)(uVar9 & 0xffffffff,uVar8);
    }
  }
  plVar13 = (longlong *)(param_2 + 0xf0);
  lStack_260 = param_2 + 0x1e8;
  uStack_250 = *(undefined4 *)(param_2 + 0x239);
  local_288 = *(longlong ***)(param_2 + 0xc0);
  pcStack_280 = *(code **)(param_2 + 200);
  local_278 = *(longlong ***)(param_2 + 0xd0);
  pcStack_270 = *(code **)(param_2 + 0xd8);
  uStack_24c = CONCAT13(*(undefined1 *)(param_2 + 0x242),
                        (int3)((uint)*(undefined4 *)(param_2 + 0x23c) >> 8));
  local_248 = CONCAT71(local_248._1_7_,*(undefined1 *)(param_2 + 0x244));
  local_268 = plVar13;
  local_258 = param_2 + 0x228;
  uVar8 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
          ::parse::<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>
                    (&local_120,param_2,param_3,&local_288);
  if (local_120 == -2) {
    if (((*(char *)(param_2 + 0x240) == '\0') || (*(longlong *)(param_2 + 0x208) == 0)) ||
       (cVar6 = (**(code **)(*(longlong *)(param_2 + 0x210) + 0x18))(), cVar6 != '\0')) {
      *param_1 = 0xfffffffffffffffd;
      return param_1;
    }
    *(undefined1 *)(param_2 + 0x240) = 0;
    uVar8 = (*(code *)PTR_new_header_timeout_00799e28)();
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uVar8;
    return param_1;
  }
  if ((int)local_120 == -1) {
    (*(code *)PTR_close_read_00799568)();
    local_298 = *(longlong **)(param_2 + 0xa0);
    if (local_298 == (longlong *)0x0) {
      uVar9 = 0;
    }
    else {
      plVar11 = (longlong *)0x0;
      do {
        cVar6 = *(char *)(*(longlong *)(param_2 + 0x98) + (longlong)plVar11);
        if ((cVar6 != '\r') && (cVar6 != '\n')) {
          local_290 = plVar11;
          if (local_298 < plVar11) {
            local_288 = &local_290;
            pcStack_280 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
            local_278 = &local_298;
            pcStack_270 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
            (*(code *)PTR_panic_fmt_007991a8)
                      (local_278,
                       &anon_d4d3cd51d1d91a17bb767b00236b3a9b_126_llvm_17589326713533067298);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          break;
        }
        plVar11 = (longlong *)((longlong)plVar11 + 1);
      } while (local_298 != plVar11);
      (*(code *)PTR_advance_unchecked_00799a50)();
      uVar9 = *(ulonglong *)(param_2 + 0xa0);
    }
    if ((char)local_118[2] != '\0' && uVar9 == 0) {
      uVar8 = (*(code *)PTR_close_write_00799570)();
      *param_1 = 0xfffffffffffffffe;
      if (*local_118 != 0) {
        puVar2 = (undefined8 *)local_118[1];
        if ((code *)*puVar2 != (code *)0x0) {
          uVar8 = (*(code *)*puVar2)();
        }
        if (puVar2[1] != 0) {
          uVar8 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,puVar2[2]);
        }
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,8);
      return param_1;
    }
    local_298 = local_118;
    plVar11 = local_118;
    if (*(longlong *)(param_2 + 0x1b8) == -0x7ffffffffffffffe) {
      if (0x17 < uVar9) {
        pcVar3 = *(char **)(param_2 + 0x98);
        uVar8 = *(undefined8 *)(pcVar3 + 0x10);
        auVar17[0] = -((char)uVar8 == s_SM_001840f0[0]);
        auVar17[1] = -((char)((ulonglong)uVar8 >> 8) == s_SM_001840f0[1]);
        auVar17[2] = -((char)((ulonglong)uVar8 >> 0x10) == s_SM_001840f0[2]);
        auVar17[3] = -((char)((ulonglong)uVar8 >> 0x18) == s_SM_001840f0[3]);
        auVar17[4] = -((char)((ulonglong)uVar8 >> 0x20) == s_SM_001840f0[4]);
        auVar17[5] = -((char)((ulonglong)uVar8 >> 0x28) == s_SM_001840f0[5]);
        auVar17[6] = -((char)((ulonglong)uVar8 >> 0x30) == s_SM_001840f0[6]);
        auVar17[7] = -((char)((ulonglong)uVar8 >> 0x38) == s_SM_001840f0[7]);
        auVar17[8] = -(s_SM_001840f0[8] == '\0');
        auVar17[9] = -(s_SM_001840f0[9] == '\0');
        auVar17[10] = -(s_SM_001840f0[10] == '\0');
        auVar17[0xb] = -(s_SM_001840f0[0xb] == '\0');
        auVar17[0xc] = -(UNK_001840fc == '\0');
        auVar17[0xd] = -(UNK_001840fd == '\0');
        auVar17[0xe] = -(UNK_001840fe == '\0');
        auVar17[0xf] = -(UNK_001840ff == '\0');
        auVar16[0] = -(*pcVar3 == s_PRI___HTTP_2_0_00184480[0]);
        auVar16[1] = -(pcVar3[1] == s_PRI___HTTP_2_0_00184480[1]);
        auVar16[2] = -(pcVar3[2] == s_PRI___HTTP_2_0_00184480[2]);
        auVar16[3] = -(pcVar3[3] == s_PRI___HTTP_2_0_00184480[3]);
        auVar16[4] = -(pcVar3[4] == s_PRI___HTTP_2_0_00184480[4]);
        auVar16[5] = -(pcVar3[5] == s_PRI___HTTP_2_0_00184480[5]);
        auVar16[6] = -(pcVar3[6] == s_PRI___HTTP_2_0_00184480[6]);
        auVar16[7] = -(pcVar3[7] == s_PRI___HTTP_2_0_00184480[7]);
        auVar16[8] = -(pcVar3[8] == s_PRI___HTTP_2_0_00184480[8]);
        auVar16[9] = -(pcVar3[9] == s_PRI___HTTP_2_0_00184480[9]);
        auVar16[10] = -(pcVar3[10] == s_PRI___HTTP_2_0_00184480[10]);
        auVar16[0xb] = -(pcVar3[0xb] == s_PRI___HTTP_2_0_00184480[0xb]);
        auVar16[0xc] = -(pcVar3[0xc] == s_PRI___HTTP_2_0_00184480[0xc]);
        auVar16[0xd] = -(pcVar3[0xd] == s_PRI___HTTP_2_0_00184480[0xd]);
        auVar16[0xe] = -(pcVar3[0xe] == s_PRI___HTTP_2_0_00184480[0xe]);
        auVar16[0xf] = -(pcVar3[0xf] == s_PRI___HTTP_2_0_00184480[0xf]);
        auVar16 = auVar16 & auVar17;
        if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
          plVar11 = (longlong *)(*(code *)PTR_new_version_h2_00799e38)();
          uVar8 = extraout_XMM0_Qa_01;
          if (*local_118 != 0) {
            puVar2 = (undefined8 *)local_118[1];
            if ((code *)*puVar2 != (code *)0x0) {
              uVar8 = (*(code *)*puVar2)();
            }
            if (puVar2[1] != 0) {
              uVar8 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,puVar2[2]);
            }
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,8);
          goto LAB_0057ece6;
        }
      }
      (*(code *)PTR_on_error_00799e20)();
      if (local_190 != -1) {
        local_238 = *(undefined8 *)(param_2 + 0x140);
        uStack_230 = *(undefined8 *)(param_2 + 0x148);
        local_248 = *(undefined8 *)(param_2 + 0x130);
        uStack_240 = *(undefined8 *)(param_2 + 0x138);
        local_288 = (longlong **)*plVar13;
        pcStack_280 = *(code **)(param_2 + 0xf8);
        local_278 = *(longlong ***)(param_2 + 0x100);
        pcStack_270 = *(code **)(param_2 + 0x108);
        local_268 = *(longlong **)(param_2 + 0x110);
        lStack_260 = *(undefined8 *)(param_2 + 0x118);
        local_258 = *(undefined8 *)(param_2 + 0x120);
        uStack_250 = *(undefined4 *)(param_2 + 0x128);
        uStack_24c = *(undefined4 *)(param_2 + 300);
        *plVar13 = -1;
        if (local_288 != (longlong **)0xffffffffffffffff) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
                    (&local_288,&local_298);
        }
        local_228 = local_130;
        uStack_220 = uStack_128;
        local_238 = local_140;
        uStack_230 = uStack_138;
        local_248 = local_150;
        uStack_240 = uStack_148;
        uStack_250 = uStack_158;
        uStack_24c = uStack_154;
        local_278 = (longlong **)local_180;
        pcStack_270 = (code *)uStack_178;
        pcStack_280 = (code *)uStack_188;
        write_head(param_2,&local_288,2);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>
                  (*(undefined8 *)(param_2 + 0x200));
        *(longlong **)(param_2 + 0x200) = local_118;
        *param_1 = 0xfffffffffffffffd;
        return param_1;
      }
    }
LAB_0057ece6:
    *param_1 = 0xffffffffffffffff;
    param_1[1] = plVar11;
    return param_1;
  }
  plVar13 = &local_120;
  uVar8 = (*(code *)PTR_memcpy_00799008)(uVar8,0xf0);
  *(undefined1 *)(param_2 + 0x240) = 0;
  uVar9 = *(ulonglong *)(param_2 + 0x208);
  if (uVar9 != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x210);
    if ((code *)*puVar2 != (code *)0x0) {
      uVar8 = (*(code *)*puVar2)();
    }
    plVar13 = (longlong *)puVar2[1];
    if (plVar13 != (longlong *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,puVar2[2]);
    }
  }
  *(undefined8 *)(param_2 + 0x208) = 0;
  *(undefined1 *)(param_2 + 0x244) = 0;
  plVar11 = *(longlong **)(param_2 + 0x228);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      <alloc[12e961f32105355]::sync::Arc<dyn_hyper[c4782d5b5c5e3493]::ext::informational::OnInformationalCallback+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>
      ::drop_slow(param_2 + 0x228,plVar13);
    }
  }
  *(undefined8 *)(param_2 + 0x228) = 0;
  if (*(char *)(param_2 + 0x247) != '\x02') {
    *(undefined1 *)(param_2 + 0x247) = 1;
  }
  if (local_19f == '\0') {
    *(undefined1 *)(param_2 + 0x247) = 2;
  }
  *(byte *)(param_2 + 0x248) = local_1b0;
  bVar12 = local_19e * '\x02';
  if (local_1a8 == 0) {
    if (((*(longlong *)(param_2 + 0x150) == 1) || ((int)*(longlong *)(param_2 + 0x150) == 2)) &&
       ((*(uint *)(param_2 + 0x158) < 2 && (*(longlong *)(param_2 + 0x188) != 0)))) {
      (*(code *)PTR_drop_007994e8)();
    }
    *(undefined8 *)(param_2 + 0x150) = 3;
    goto LAB_0057ec62;
  }
  uVar8 = *(undefined8 *)(param_2 + 0xd0);
  if ((local_1a0 & 1 < local_1b0) == 0) {
    if (local_1a8 == 0xfffffffffffffffe) {
      local_2b0 = *(undefined8 *)(param_2 + 0xc0);
      uVar14 = *(ulonglong *)(param_2 + 200);
      local_2a0 = *(undefined8 *)(param_2 + 0xd8);
      lVar10 = *(longlong *)(param_2 + 0x150);
      uVar9 = uVar14;
joined_r0x0057ead4:
      uVar7 = (undefined1)uVar14;
      uVar9 = uVar9 >> 8;
      uVar5 = uVar7;
      if (lVar10 == 1) goto LAB_0057ebbf;
LAB_0057ebba:
      uVar7 = uVar5;
      if ((int)lVar10 == 2) goto LAB_0057ebbf;
    }
    else {
      if (local_1a8 != 0xffffffffffffffff) {
        local_2b0 = 2;
        uVar14 = local_1a8 & 0xffffffff;
        lVar10 = *(longlong *)(param_2 + 0x150);
        uVar9 = local_1a8;
        goto joined_r0x0057ead4;
      }
      local_2b0 = 4;
      uVar7 = 0;
      lVar10 = *(longlong *)(param_2 + 0x150);
      uVar5 = 0;
      if (lVar10 != 1) goto LAB_0057ebba;
LAB_0057ebbf:
      if ((*(uint *)(param_2 + 0x158) < 2) && (*(longlong *)(param_2 + 0x188) != 0)) {
        (*(code *)PTR_drop_007994e8)();
      }
    }
    *(undefined8 *)(param_2 + 0x150) = 2;
    *(undefined8 *)(param_2 + 0x158) = local_2b0;
    *(undefined1 *)(param_2 + 0x160) = uVar7;
    *(int *)(param_2 + 0x161) = (int)uVar9;
    *(char *)(param_2 + 0x167) = (char)(uVar9 >> 0x30);
    *(short *)(param_2 + 0x165) = (short)(uVar9 >> 0x20);
    *(undefined8 *)(param_2 + 0x168) = uVar8;
    *(undefined8 *)(param_2 + 0x170) = local_2a0;
    *(undefined8 *)(param_2 + 0x1a8) = 0;
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  else {
    if (local_1a8 == 0xfffffffffffffffe) {
      local_2b0 = *(undefined8 *)(param_2 + 0xc0);
      uVar14 = *(ulonglong *)(param_2 + 200);
      local_2a0 = *(undefined8 *)(param_2 + 0xd8);
      lVar10 = *(longlong *)(param_2 + 0x150);
      uVar9 = uVar14;
joined_r0x0057ea9f:
      uVar7 = (undefined1)uVar14;
      uVar9 = uVar9 >> 8;
      uVar5 = uVar7;
      if (lVar10 == 1) goto LAB_0057eb05;
LAB_0057eb00:
      uVar7 = uVar5;
      if ((int)lVar10 == 2) goto LAB_0057eb05;
    }
    else {
      if (local_1a8 != 0xffffffffffffffff) {
        local_2b0 = 2;
        uVar14 = local_1a8 & 0xffffffff;
        lVar10 = *(longlong *)(param_2 + 0x150);
        uVar9 = local_1a8;
        goto joined_r0x0057ea9f;
      }
      local_2b0 = 4;
      uVar7 = 0;
      lVar10 = *(longlong *)(param_2 + 0x150);
      uVar5 = 0;
      if (lVar10 != 1) goto LAB_0057eb00;
LAB_0057eb05:
      if ((*(uint *)(param_2 + 0x158) < 2) && (*(longlong *)(param_2 + 0x188) != 0)) {
        (*(code *)PTR_drop_007994e8)();
      }
    }
    *(undefined8 *)(param_2 + 0x150) = 1;
    *(undefined8 *)(param_2 + 0x158) = local_2b0;
    *(undefined1 *)(param_2 + 0x160) = uVar7;
    *(int *)(param_2 + 0x161) = (int)uVar9;
    *(char *)(param_2 + 0x167) = (char)(uVar9 >> 0x30);
    *(short *)(param_2 + 0x165) = (short)(uVar9 >> 0x20);
    *(undefined8 *)(param_2 + 0x168) = uVar8;
    *(undefined8 *)(param_2 + 0x170) = local_2a0;
    *(undefined8 *)(param_2 + 0x1a8) = 0;
    *(undefined1 *)(param_2 + 0x1b0) = 0;
    bVar12 = bVar12 | 1;
  }
  *(undefined1 (*) [16])(param_2 + 0x178) = (undefined1  [16])0x0;
  *(undefined8 *)(param_2 + 0x188) = 0;
LAB_0057ec62:
  uVar7 = (*(code *)PTR_te_is_trailers_00799e30)();
  *(undefined1 *)(param_2 + 0x246) = uVar7;
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,0xe0);
  param_1[0x1c] = local_1a8;
  *(byte *)(param_1 + 0x1d) = bVar12;
  return param_1;
}


