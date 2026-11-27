// 00544690 host_registration

/* craggemini_core[66f3c71560d70857]::license::host_registration */

void __rustcall
craggemini_core[66f3c71560d70857]::license::host_registration
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          code *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined4 local_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  longlong local_458;
  longlong local_450;
  code *local_448;
  ulonglong local_440;
  undefined4 *local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  undefined *local_410;
  undefined4 *local_408;
  code *local_400;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  undefined *local_3d8;
  undefined4 *local_3d0;
  code *local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  byte local_3a8;
  undefined4 local_3a7;
  undefined4 uStack_3a3;
  undefined4 uStack_39f;
  undefined4 uStack_39b;
  undefined4 local_397;
  undefined4 uStack_393;
  undefined4 uStack_38f;
  undefined4 uStack_38b;
  undefined4 local_387;
  undefined4 uStack_383;
  undefined4 uStack_37f;
  undefined4 uStack_37b;
  undefined4 local_377;
  undefined1 auStack_373 [4];
  undefined4 uStack_36f;
  undefined1 auStack_36b [4];
  undefined8 uStack_367;
  undefined1 auStack_35f [8];
  undefined1 local_357 [23];
  longlong local_340;
  byte local_338;
  uint uStack_337;
  uint3 uStack_333;
  undefined4 *local_330;
  code *local_328;
  undefined4 *local_320;
  undefined *local_318;
  longlong local_310;
  longlong lStack_308;
  longlong local_300;
  longlong local_2f8 [12];
  longlong local_298;
  longlong local_280;
  longlong local_268;
  undefined4 local_250 [30];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  
  uVar7 = <craggemini_core[66f3c71560d70857]::license::files::HostDir>::open(param_6,param_7);
  if ((uVar7 & 1) != 0) {
    *(char *)(param_1 + 1) = (char)(uVar7 >> 8);
    *param_1 = 2;
    return;
  }
  local_47c = (undefined4)(uVar7 >> 0x20);
  local_448 = param_5;
  uVar6 = files::open_read_at(local_47c,"sync-pendingArc counter overflow",0xc);
  if ((char)uVar6 == '\0') {
    (*(code *)PTR_close_00799030)();
    if ((uVar6 & 0xff01) != 1) goto LAB_00544b4c;
LAB_00544715:
    <craggemini_core[66f3c71560d70857]::license::files::HostDir>::read
              (&local_340,&local_47c,&DAT_0019ba64,7,0x41);
    if (local_340 != -1) {
      local_450 = local_340;
      uVar7 = (ulonglong)local_338;
      uVar8 = (ulonglong)uStack_333;
      uVar10 = (ulonglong)uStack_337;
      local_438 = local_330;
      local_3c8 = local_328;
      local_3d0 = local_320;
      local_3d8 = local_318;
      local_3e0 = local_310;
      local_3e8 = lStack_308;
      local_3f0 = local_300;
      local_3f8 = local_2f8[0];
      uVar12 = <craggemini_core[66f3c71560d70857]::license::files::HostDir>::read
                         (&local_340,&local_47c,&DAT_00183da0,0x10,&DAT_00180001);
      if (local_340 == -1) {
        *(byte *)(param_1 + 1) = local_338;
        *param_1 = 2;
      }
      else {
        local_458 = local_340;
        local_440 = (ulonglong)uStack_337 << 8 | (ulonglong)uStack_333 << 0x28 |
                    (ulonglong)local_338;
        local_400 = local_328;
        local_408 = local_320;
        local_410 = local_318;
        local_418 = local_310;
        local_420 = lStack_308;
        local_428 = local_300;
        local_430 = local_2f8[0];
        auVar13 = ::<str>::trim_matches::<<char>::is_whitespace>(local_440,local_330);
        local_3c0 = auVar13._8_8_;
        local_3b8 = auVar13._0_8_;
        auVar13 = ::<str>::trim_matches::<<char>::is_whitespace>
                            (uVar10 << 8 | uVar8 << 0x28 | uVar7,local_438);
        uVar12 = host::verify_pair(&local_340,local_3b8,local_3c0,param_2,param_3,param_4,auVar13,
                                   local_448);
        lVar4 = local_340;
        puVar3 = PTR_memcpy_00799008;
        if (local_340 == -1) {
          *(byte *)(param_1 + 1) = local_338;
          *param_1 = 2;
        }
        else {
          (*(code *)PTR_memcpy_00799008)(uVar12,0x15f);
          local_468 = local_1c8;
          uStack_460 = uStack_1c0;
          local_478 = local_1d8;
          uStack_470 = uStack_1d0;
          local_357._0_8_ = local_140;
          uStack_367 = local_150;
          auStack_35f = (undefined1  [8])uStack_148;
          local_377 = local_160;
          auStack_373 = (undefined1  [4])uStack_15c;
          uStack_36f = uStack_158;
          auStack_36b = (undefined1  [4])uStack_154;
          local_387 = local_170;
          uStack_383 = uStack_16c;
          uStack_37f = uStack_168;
          uStack_37b = uStack_164;
          local_397 = (undefined4)local_180;
          uStack_393 = local_180._4_4_;
          uStack_38f = (undefined4)uStack_178;
          uStack_38b = uStack_178._4_4_;
          local_3a7 = (undefined4)local_190;
          uStack_3a3 = local_190._4_4_;
          uStack_39f = (undefined4)uStack_188;
          uStack_39b = uStack_188._4_4_;
          (*(code *)puVar3)((undefined4)local_190,0xf8);
          local_3b0 = lVar4;
          local_3a8 = local_338;
          <craggemini_core[66f3c71560d70857]::license::files::HostDir>::fingerprint
                    (&local_190,&local_47c,&DAT_0019ba64,7);
          if ((char)local_190 == '\x01') {
LAB_00544a53:
            cVar5 = local_190._1_1_;
          }
          else {
            cVar5 = '\x03';
            if ((((local_3c8 == uStack_188) && (local_3d0 == local_180)) &&
                (local_3d8 == uStack_178)) &&
               (((local_3e0 == CONCAT44(uStack_16c,local_170) &&
                 (local_3e8 == CONCAT44(uStack_164,uStack_168))) &&
                ((local_3f0 == CONCAT44(uStack_15c,local_160) &&
                 (local_3f8 == CONCAT44(uStack_154,uStack_158))))))) {
              <craggemini_core[66f3c71560d70857]::license::files::HostDir>::fingerprint
                        (&local_190,&local_47c,&DAT_00183da0,0x10);
              if ((char)local_190 == '\x01') goto LAB_00544a53;
              if (((local_400 == uStack_188) && (local_408 == local_180)) &&
                 ((local_410 == uStack_178 &&
                  ((((local_418 == CONCAT44(uStack_16c,local_170) &&
                     (local_420 == CONCAT44(uStack_164,uStack_168))) &&
                    (local_428 == CONCAT44(uStack_15c,local_160))) &&
                   ((local_430 == CONCAT44(uStack_154,uStack_158) &&
                    (cVar5 = <craggemini_core[66f3c71560d70857]::license::files::HostDir>::
                             check_ready(&local_47c), cVar5 == -1)))))))) {
                if ((int)lVar4 == 2) {
                  <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::license::host::HostGrant>as_core[c0acaeba6ab4c2e0]::clone::Clone>
                  ::clone(&local_190,(longlong)&uStack_37b + 3);
                  local_448 = uStack_188;
                  local_438 = local_180;
                  puVar11 = local_190;
                }
                else {
                  puVar11 = (undefined4 *)0xffffffffffffffff;
                }
                local_180 = local_250;
                local_1a0 = CONCAT31((undefined3)local_387,uStack_38b._3_1_);
                uStack_19c = CONCAT31((undefined3)uStack_383,local_387._3_1_);
                uStack_198 = CONCAT31((undefined3)uStack_37f,uStack_383._3_1_);
                uStack_194 = CONCAT31((undefined3)uStack_37b,uStack_37f._3_1_);
                local_190 = &local_1a0;
                uStack_188 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
                uStack_178 = PTR_fmt_00799470;
                (*(code *)PTR_format_inner_00799048)
                          (<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt,&local_190);
                param_1[6] = local_1a8;
                puVar9 = (undefined8 *)(local_357 + 7);
                puVar2 = (undefined8 *)(auStack_35f + 7);
                if (lVar4 == 0) {
                  puVar9 = (undefined8 *)(auStack_36b + 3);
                  puVar2 = (undefined8 *)(auStack_373 + 3);
                }
                param_1[4] = local_1b8;
                param_1[5] = uStack_1b0;
                param_1[10] = puVar11;
                param_1[0xb] = local_448;
                param_1[0xc] = local_438;
                param_1[9] = local_300;
                uVar1 = *puVar2;
                param_1[7] = local_310;
                param_1[8] = lStack_308;
                *(undefined4 *)(param_1 + 0x11) = (undefined4)local_478;
                *(undefined4 *)((longlong)param_1 + 0x8c) = local_478._4_4_;
                *(undefined4 *)(param_1 + 0x12) = (undefined4)uStack_470;
                *(undefined4 *)((longlong)param_1 + 0x94) = uStack_470._4_4_;
                *(undefined4 *)(param_1 + 0x13) = (undefined4)local_468;
                *(undefined4 *)((longlong)param_1 + 0x9c) = local_468._4_4_;
                *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_460;
                *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_460._4_4_;
                *param_1 = 1;
                param_1[1] = uVar1;
                param_1[2] = uVar1;
                param_1[3] = *puVar9;
                *(undefined4 *)(param_1 + 0xd) = 1;
                *(undefined4 *)((longlong)param_1 + 0x6c) = local_250[0];
                param_1[0xe] = &DAT_0018e078;
                param_1[0xf] = 4;
                *(undefined1 *)(param_1 + 0x10) = 0xff;
                param_1[0x15] = local_3c8;
                param_1[0x16] = local_3d0;
                param_1[0x17] = local_3d8;
                param_1[0x18] = local_3e0;
                param_1[0x19] = local_3e8;
                param_1[0x1a] = local_3f0;
                param_1[0x1b] = local_3f8;
                param_1[0x1c] = local_400;
                param_1[0x1d] = local_408;
                param_1[0x1e] = local_410;
                param_1[0x1f] = local_418;
                param_1[0x20] = local_420;
                param_1[0x21] = local_428;
                param_1[0x22] = local_430;
                uVar12 = (undefined4)local_478;
                if (local_340 != 0) {
                  uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_478,1);
                }
                if (local_328 != (code *)0x0) {
                  uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                }
                if (0 < local_298) {
                  uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                }
                if (0 < local_280) {
                  uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                }
                if (0 < local_268) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                }
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::license::WrappedKey>(local_2f8);
                uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                         <craggemini_core[66f3c71560d70857]::license::host::VerifiedEntitlement>
                                   (&local_3b0);
                if (local_458 != 0) {
                  uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                }
                if (local_450 != 0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                }
                goto LAB_00544b5d;
              }
            }
          }
          *(char *)(param_1 + 1) = cVar5;
          *param_1 = 2;
          local_478 = 0;
          uStack_470 = 0;
          local_468 = 0;
          uStack_460 = 0;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <craggemini_core[66f3c71560d70857]::license::host::SlotPermit>(&local_340);
          uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <craggemini_core[66f3c71560d70857]::license::host::VerifiedEntitlement>
                             (&local_3b0);
        }
        if (local_458 != 0) {
          uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
      }
      if (local_450 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      goto LAB_00544b5d;
    }
    *(byte *)(param_1 + 1) = local_338;
  }
  else {
    if ((uVar6 & 0xff01) == 1) goto LAB_00544715;
LAB_00544b4c:
    *(undefined1 *)(param_1 + 1) = 3;
  }
  *param_1 = 2;
LAB_00544b5d:
  (*(code *)PTR_close_00799030)();
  return;
}


