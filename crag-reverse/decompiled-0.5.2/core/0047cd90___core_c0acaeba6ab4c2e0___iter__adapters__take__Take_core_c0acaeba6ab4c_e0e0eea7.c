// 0047cd90 <core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::str::iter::Chars>>

/* <alloc[12e961f32105355]::string::String as
   core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<char>>::from_iter::<core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::str::iter::Chars>>
    */

longlong * __rustcall
<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<char>>
::from_iter::
<core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::str::iter::Chars>>
          (longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  local_48 = 0;
  local_40 = 1;
  local_38 = 0;
  uVar11 = param_2[2];
  if (uVar11 != 0) {
    pbVar2 = (byte *)param_2[1];
    pbVar9 = (byte *)*param_2;
    uVar6 = (longlong)pbVar2 - (longlong)pbVar9;
    if (uVar6 != 0) {
      uVar6 = ((uVar6 >> 2) + 1) - (ulonglong)((uVar6 & 3) == 0);
      if (uVar11 < uVar6) {
        uVar6 = uVar11;
      }
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_48,0,uVar6,1,1);
    }
    do {
      lVar3 = local_38;
      if (pbVar9 == pbVar2) break;
      bVar4 = *pbVar9;
      uVar8 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        uVar5 = bVar4 & 0x1f;
        pbVar1 = pbVar9 + 1;
        if (bVar4 < 0xe0) {
          pbVar9 = pbVar9 + 2;
          uVar8 = uVar5 << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar8 = pbVar9[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar4 < 0xf0) {
            pbVar9 = pbVar9 + 3;
            uVar8 = uVar8 | uVar5 << 0xc;
          }
          else {
            pbVar1 = pbVar9 + 3;
            pbVar9 = pbVar9 + 4;
            uVar8 = *pbVar1 & 0x3f | uVar8 << 6 | (bVar4 & 7) << 0x12;
          }
        }
        if (uVar8 < 0x80) goto LAB_0047cee0;
        uVar6 = 4 - (ulonglong)(uVar8 < 0x10000);
        if (uVar8 < 0x800) {
          uVar6 = 2;
        }
        if ((ulonglong)(local_48 - local_38) < uVar6) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_48,local_38,uVar6,1,1);
        }
        bVar4 = (byte)uVar8 & 0x3f | 0x80;
        bVar7 = (byte)(uVar8 >> 6);
        if (uVar8 < 0x800) {
          *(byte *)(local_40 + lVar3) = bVar7 | 0xc0;
          *(byte *)(local_40 + 1 + lVar3) = bVar4;
          local_38 = 2;
        }
        else {
          bVar7 = bVar7 & 0x3f | 0x80;
          bVar10 = (byte)(uVar8 >> 0xc);
          if (uVar8 < 0x10000) {
            *(byte *)(local_40 + lVar3) = bVar10 | 0xe0;
            *(byte *)(local_40 + 1 + lVar3) = bVar7;
            *(byte *)(local_40 + 2 + lVar3) = bVar4;
            local_38 = 3;
          }
          else {
            *(byte *)(local_40 + lVar3) = (byte)(uVar8 >> 0x12) | 0xf0;
            *(byte *)(local_40 + 1 + lVar3) = bVar10 & 0x3f | 0x80;
            *(byte *)(local_40 + 2 + lVar3) = bVar7;
            *(byte *)(local_40 + 3 + lVar3) = bVar4;
            local_38 = 4;
          }
        }
      }
      else {
        pbVar9 = pbVar9 + 1;
LAB_0047cee0:
        if (local_48 == local_38) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_48,local_48,1,1,1);
        }
        *(char *)(local_40 + lVar3) = (char)uVar8;
        local_38 = 1;
      }
      local_38 = lVar3 + local_38;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = local_40;
  return param_1;
}


