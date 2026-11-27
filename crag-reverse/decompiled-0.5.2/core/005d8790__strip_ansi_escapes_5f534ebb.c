// 005d8790 strip_ansi_escapes

/* craggemini_core[66f3c71560d70857]::acp_backend::strip_ansi_escapes */

void __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::strip_ansi_escapes
          (undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 uVar13;
  byte *local_48;
  longlong lStack_40;
  byte *local_38;
  
  uVar13 = param_3 == (byte *)0x0;
  if (-1 < (longlong)param_3) goto LAB_005d87b5;
  puVar2 = (undefined8 *)0x0;
  while( true ) {
    param_1 = puVar2;
    uVar13 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = param_3;
LAB_005d87b5:
    if ((bool)uVar13) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    puVar2 = (undefined8 *)0x1;
    if (lVar3 != 0) {
LAB_005d87e3:
      local_38 = (byte *)0x0;
      pbVar8 = param_3 + (longlong)param_2;
      pbVar11 = (byte *)0x0;
      local_48 = param_3;
      lStack_40 = lVar3;
LAB_005d8810:
      do {
        uVar12 = 0xfffffffe;
LAB_005d8816:
        do {
          do {
            if (uVar12 == 0xfffffffe) {
              if (param_2 == pbVar8) {
LAB_005d8b36:
                param_1[2] = local_38;
                *param_1 = local_48;
                param_1[1] = lStack_40;
                return;
              }
              bVar4 = *param_2;
              uVar12 = (uint)bVar4;
              if ((char)bVar4 < '\0') {
                pbVar1 = param_2 + 1;
                if (bVar4 < 0xe0) {
                  param_2 = param_2 + 2;
                  uVar12 = (uVar12 & 0x1f) << 6 | *pbVar1 & 0x3f;
                }
                else {
                  uVar10 = param_2[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                  if (bVar4 < 0xf0) {
                    param_2 = param_2 + 3;
                    uVar12 = uVar10 | (uVar12 & 0x1f) << 0xc;
                  }
                  else {
                    pbVar1 = param_2 + 3;
                    param_2 = param_2 + 4;
                    uVar12 = *pbVar1 & 0x3f | uVar10 << 6 | (uVar12 & 7) << 0x12;
                  }
                }
              }
              else {
                param_2 = param_2 + 1;
              }
            }
            else if (uVar12 == 0xffffffff) goto LAB_005d8b36;
            if (uVar12 != 0x1b) {
              if (uVar12 < 0x80) {
                if (local_48 == pbVar11) {
                  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[12e961f32105355]::alloc::Global>(&local_48,pbVar11,1,1,1);
                }
                pbVar11[lStack_40] = (byte)uVar12;
                lVar5 = 1;
                lVar3 = lStack_40;
              }
              else {
                uVar7 = 4 - (ulonglong)(uVar12 < 0x10000);
                if (uVar12 < 0x800) {
                  uVar7 = 2;
                }
                if ((ulonglong)((longlong)local_48 - (longlong)pbVar11) < uVar7) {
                  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[12e961f32105355]::alloc::Global>(&local_48,pbVar11,uVar7,1,1);
                  lVar3 = lStack_40;
                }
                bVar4 = (byte)uVar12 & 0x3f | 0x80;
                bVar6 = (byte)(uVar12 >> 6);
                if (uVar12 < 0x800) {
                  pbVar11[lVar3] = bVar6 | 0xc0;
                  pbVar11[lVar3 + 1] = bVar4;
                  lVar5 = 2;
                }
                else {
                  bVar6 = bVar6 & 0x3f | 0x80;
                  bVar9 = (byte)(uVar12 >> 0xc);
                  if (uVar12 < 0x10000) {
                    pbVar11[lVar3] = bVar9 | 0xe0;
                    pbVar11[lVar3 + 1] = bVar6;
                    pbVar11[lVar3 + 2] = bVar4;
                    lVar5 = 3;
                  }
                  else {
                    pbVar11[lVar3] = (byte)(uVar12 >> 0x12) | 0xf0;
                    pbVar11[lVar3 + 1] = bVar9 & 0x3f | 0x80;
                    pbVar11[lVar3 + 2] = bVar6;
                    pbVar11[lVar3 + 3] = bVar4;
                    lVar5 = 4;
                  }
                }
              }
              pbVar11 = pbVar11 + lVar5;
              local_38 = pbVar11;
              goto LAB_005d8810;
            }
            uVar12 = 0xffffffff;
          } while (param_2 == pbVar8);
          bVar4 = *param_2;
          uVar12 = (uint)bVar4;
          if (-1 < (char)bVar4) {
            param_2 = param_2 + 1;
joined_r0x005d8952:
            if (uVar12 == 0x5b) break;
            goto LAB_005d8816;
          }
          pbVar1 = param_2 + 1;
          if (bVar4 < 0xe0) {
            param_2 = param_2 + 2;
            uVar12 = (uVar12 & 0x1f) << 6 | *pbVar1 & 0x3f;
            goto joined_r0x005d8952;
          }
          uVar10 = param_2[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (0xef < bVar4) {
            pbVar1 = param_2 + 3;
            param_2 = param_2 + 4;
            uVar12 = *pbVar1 & 0x3f | uVar10 << 6 | (uVar12 & 7) << 0x12;
            goto joined_r0x005d8952;
          }
          param_2 = param_2 + 3;
          uVar12 = uVar10 | (uVar12 & 0x1f) << 0xc;
        } while (uVar12 != 0x5b);
        do {
          if (param_2 == pbVar8) break;
          bVar4 = *param_2;
          uVar12 = (uint)bVar4;
          if ((char)bVar4 < '\0') {
            pbVar1 = param_2 + 1;
            if (bVar4 < 0xe0) {
              param_2 = param_2 + 2;
              uVar12 = (uVar12 & 0x1f) << 6 | *pbVar1 & 0x3f;
            }
            else {
              uVar10 = param_2[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
              if (bVar4 < 0xf0) {
                param_2 = param_2 + 3;
                uVar12 = uVar10 | (uVar12 & 0x1f) << 0xc;
              }
              else {
                pbVar1 = param_2 + 3;
                param_2 = param_2 + 4;
                uVar12 = *pbVar1 & 0x3f | uVar10 << 6 | (uVar12 & 7) << 0x12;
              }
            }
          }
          else {
            param_2 = param_2 + 1;
          }
        } while (0x3e < uVar12 - 0x40);
      } while( true );
    }
  }
  lVar3 = 1;
  goto LAB_005d87e3;
}


