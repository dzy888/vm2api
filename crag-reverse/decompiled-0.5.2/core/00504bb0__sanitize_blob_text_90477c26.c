// 00504bb0 sanitize_blob_text

/* craggemini_core[66f3c71560d70857]::protocol::sanitize_blob_text */

void __rustcall
craggemini_core[66f3c71560d70857]::protocol::sanitize_blob_text
          (undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte bVar11;
  undefined1 uVar12;
  byte *local_50;
  longlong local_48;
  byte *local_40;
  undefined8 *local_38;
  
  uVar12 = param_3 == (byte *)0x0;
  if (-1 < (longlong)param_3) goto LAB_00504bd5;
  param_1 = (undefined8 *)0x0;
  do {
    uVar12 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = param_3;
LAB_00504bd5:
    local_38 = param_1;
    if ((bool)uVar12) {
      local_50 = (byte *)0x0;
      local_48 = 1;
      local_40 = (byte *)0x0;
      goto LAB_00504e67;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    param_1 = (undefined8 *)0x1;
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
  } while (lVar3 == 0);
  local_40 = (byte *)0x0;
  pbVar10 = param_3 + (longlong)param_2;
  local_50 = param_3;
  local_48 = lVar3;
  do {
    pbVar2 = local_40;
    bVar4 = *param_2;
    uVar8 = (uint)bVar4;
    if ((char)bVar4 < '\0') {
      uVar5 = bVar4 & 0x1f;
      pbVar1 = param_2 + 1;
      if (bVar4 < 0xe0) {
        param_2 = param_2 + 2;
        uVar8 = uVar5 << 6 | *pbVar1 & 0x3f;
      }
      else {
        uVar8 = param_2[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar4 < 0xf0) {
          param_2 = param_2 + 3;
          uVar8 = uVar8 | uVar5 << 0xc;
        }
        else {
          pbVar1 = param_2 + 3;
          param_2 = param_2 + 4;
          uVar8 = *pbVar1 & 0x3f | uVar8 << 6 | (bVar4 & 7) << 0x12;
        }
      }
    }
    else {
      param_2 = param_2 + 1;
    }
    if (uVar8 - 0x7f < 0x21 || uVar8 < 0x20) {
      if ((uVar8 < 0xe) && ((0x2600U >> (uVar8 & 0x1f) & 1) != 0)) {
LAB_00504d09:
        if (local_50 == local_40) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_50,local_40,1,1,1);
        }
        pbVar2[local_48] = (byte)uVar8;
        local_40 = pbVar2 + 1;
        lVar3 = local_48;
      }
      else {
        if (local_50 == local_40) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_50,local_40,1,1,1);
        }
        pbVar2[local_48] = 0x20;
        local_40 = pbVar2 + 1;
        lVar3 = local_48;
      }
    }
    else {
      if (uVar8 < 0x80) goto LAB_00504d09;
      uVar9 = 4 - (ulonglong)(uVar8 < 0x10000);
      if (uVar8 < 0x800) {
        uVar9 = 2;
      }
      if ((ulonglong)((longlong)local_50 - (longlong)local_40) < uVar9) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_50,local_40,uVar9,1,1);
        lVar3 = local_48;
      }
      bVar4 = (byte)uVar8 & 0x3f | 0x80;
      bVar7 = (byte)(uVar8 >> 6);
      if (uVar8 < 0x800) {
        pbVar2[lVar3] = bVar7 | 0xc0;
        pbVar2[lVar3 + 1] = bVar4;
        lVar6 = 2;
      }
      else {
        bVar7 = bVar7 & 0x3f | 0x80;
        bVar11 = (byte)(uVar8 >> 0xc);
        if (uVar8 < 0x10000) {
          pbVar2[lVar3] = bVar11 | 0xe0;
          pbVar2[lVar3 + 1] = bVar7;
          pbVar2[lVar3 + 2] = bVar4;
          lVar6 = 3;
        }
        else {
          pbVar2[lVar3] = (byte)(uVar8 >> 0x12) | 0xf0;
          pbVar2[lVar3 + 1] = bVar11 & 0x3f | 0x80;
          pbVar2[lVar3 + 2] = bVar7;
          pbVar2[lVar3 + 3] = bVar4;
          lVar6 = 4;
        }
      }
      local_40 = pbVar2 + lVar6;
    }
    if (param_2 == pbVar10) {
LAB_00504e67:
      local_38[2] = local_40;
      *local_38 = local_50;
      local_38[1] = local_48;
      return;
    }
  } while( true );
}


