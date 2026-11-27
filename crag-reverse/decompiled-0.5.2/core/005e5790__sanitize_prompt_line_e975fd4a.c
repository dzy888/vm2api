// 005e5790 sanitize_prompt_line

/* craggemini_core[66f3c71560d70857]::tools::sanitize_prompt_line */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::sanitize_prompt_line
          (undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  byte bVar13;
  byte *local_48;
  longlong local_40;
  byte *local_38;
  
  uVar12 = param_3 == (byte *)0x0;
  if (-1 < (longlong)param_3) goto LAB_005e57b5;
  puVar3 = (undefined8 *)0x0;
  do {
    param_1 = puVar3;
    uVar12 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = param_3;
LAB_005e57b5:
    if ((bool)uVar12) {
      local_48 = (byte *)0x0;
      local_40 = 1;
      local_38 = (byte *)0x0;
      goto LAB_005e5b01;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar4 = (*(code *)PTR___rust_alloc_00799000)();
    puVar3 = (undefined8 *)0x1;
  } while (lVar4 == 0);
  local_38 = (byte *)0x0;
  pbVar8 = param_3 + (longlong)param_2;
  bVar13 = 1;
  local_48 = param_3;
  local_40 = lVar4;
  do {
    pbVar2 = local_38;
    bVar5 = *param_2;
    uVar11 = (uint)bVar5;
    if ((char)bVar5 < '\0') {
      pbVar1 = param_2 + 1;
      if (bVar5 < 0xe0) {
        param_2 = param_2 + 2;
        uVar11 = (uVar11 & 0x1f) << 6 | *pbVar1 & 0x3f;
        goto joined_r0x005e588f;
      }
      uVar10 = param_2[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
      if (0xef < bVar5) {
        pbVar1 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar11 = *pbVar1 & 0x3f | uVar10 << 6 | (uVar11 & 7) << 0x12;
        goto joined_r0x005e588f;
      }
      param_2 = param_2 + 3;
      uVar11 = uVar10 | (uVar11 & 0x1f) << 0xc;
      if ((bVar13 & uVar11 == 0x2f) != 0) goto LAB_005e58b0;
LAB_005e5900:
      if (uVar11 < 0x80) {
        if (local_48 == local_38) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_48,local_38,1,1,1);
        }
        pbVar2[local_40] = (byte)uVar11;
        lVar6 = 1;
        lVar4 = local_40;
      }
      else {
        uVar7 = 4 - (ulonglong)(uVar11 < 0x10000);
        if (uVar11 < 0x800) {
          uVar7 = 2;
        }
        if ((ulonglong)((longlong)local_48 - (longlong)local_38) < uVar7) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_48,local_38,uVar7,1,1);
          lVar4 = local_40;
        }
        bVar13 = (byte)uVar11 & 0x3f | 0x80;
        bVar5 = (byte)(uVar11 >> 6);
        if (uVar11 < 0x800) {
          pbVar2[lVar4] = bVar5 | 0xc0;
          pbVar2[lVar4 + 1] = bVar13;
          lVar6 = 2;
        }
        else {
          bVar5 = bVar5 & 0x3f | 0x80;
          bVar9 = (byte)(uVar11 >> 0xc);
          if (uVar11 < 0x10000) {
            pbVar2[lVar4] = bVar9 | 0xe0;
            pbVar2[lVar4 + 1] = bVar5;
            pbVar2[lVar4 + 2] = bVar13;
            lVar6 = 3;
          }
          else {
            pbVar2[lVar4] = (byte)(uVar11 >> 0x12) | 0xf0;
            pbVar2[lVar4 + 1] = bVar9 & 0x3f | 0x80;
            pbVar2[lVar4 + 2] = bVar5;
            pbVar2[lVar4 + 3] = bVar13;
            lVar6 = 4;
          }
        }
      }
      local_38 = pbVar2 + lVar6;
      bVar13 = 1;
      if ((4 < uVar11 - 9) && (uVar11 != 0x20)) {
        if (uVar11 < 0x85) {
          bVar13 = 0;
        }
        else {
          uVar10 = uVar11 >> 8;
          bVar13 = 0;
          if (uVar10 < 0x20) {
            if (uVar10 == 0) {
              bVar13 = PTR_WHITESPACE_MAP_00799868[uVar11 & 0xff];
            }
            else if (uVar10 == 0x16) {
              bVar13 = uVar11 == 0x1680;
            }
          }
          else if (uVar10 == 0x20) {
            bVar13 = (byte)PTR_WHITESPACE_MAP_00799868[uVar11 & 0xff] >> 1;
          }
          else if (uVar10 == 0x30) {
            bVar13 = uVar11 == 0x3000;
          }
        }
      }
    }
    else {
      param_2 = param_2 + 1;
joined_r0x005e588f:
      if ((bVar13 & uVar11 == 0x2f) == 0) goto LAB_005e5900;
LAB_005e58b0:
      if ((ulonglong)((longlong)local_48 - (longlong)local_38) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_48,local_38,2,1,1);
      }
      (local_38 + local_40)[0] = 0x2e;
      (local_38 + local_40)[1] = 0x2f;
      local_38 = local_38 + 2;
      bVar13 = 0;
      lVar4 = local_40;
    }
    if (param_2 == pbVar8) {
LAB_005e5b01:
      param_1[2] = local_38;
      *param_1 = local_48;
      param_1[1] = local_40;
      return;
    }
  } while( true );
}


