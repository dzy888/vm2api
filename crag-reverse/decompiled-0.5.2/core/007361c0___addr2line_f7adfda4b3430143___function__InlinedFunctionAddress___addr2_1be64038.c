// 007361c0 <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::
<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  bool bVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  
  bVar12 = true;
  if (param_1[2] <= param_1[6]) {
    bVar12 = param_1[4] < *param_1 && param_1[6] <= param_1[2];
  }
  uVar2 = param_1[10];
  uVar3 = param_1[0xe];
  if (uVar3 < uVar2) {
    puVar6 = param_1 + 0xc;
    uVar9 = 2;
  }
  else {
    puVar6 = param_1 + 8;
    if (param_1[0xc] < param_1[8] && uVar3 <= uVar2) {
      puVar6 = param_1 + 0xc;
    }
    uVar9 = (param_1[0xc] < param_1[8] && uVar3 <= uVar2) ^ 3;
  }
  puVar13 = param_1 + (ulonglong)(bVar12 ^ 1) * 4;
  puVar1 = param_1 + (ulonglong)bVar12 * 4;
  puVar10 = (ulonglong *)((ulonglong)(uVar9 << 5) + (longlong)param_1);
  bVar4 = true;
  if (param_1[(ulonglong)bVar12 * 4 + 2] <= puVar6[2]) {
    bVar4 = *puVar6 < *puVar1 && puVar6[2] <= param_1[(ulonglong)bVar12 * 4 + 2];
  }
  uVar2 = puVar10[2];
  uVar3 = puVar13[2];
  puVar11 = puVar10;
  puVar14 = puVar1;
  if (uVar2 < uVar3) {
    puVar8 = puVar6;
    if (bVar4) {
      puVar8 = puVar1;
      puVar14 = puVar6;
    }
    bVar12 = uVar2 == puVar8[2];
    if (uVar2 < puVar8[2]) goto LAB_007362e9;
  }
  else {
    puVar8 = puVar13;
    if (uVar2 <= uVar3 && *puVar10 < *puVar13) {
      puVar8 = puVar6;
    }
    puVar7 = puVar6;
    if (bVar4) {
      puVar7 = puVar13;
      puVar14 = puVar6;
      puVar8 = puVar1;
    }
    if (uVar2 > uVar3 || *puVar10 >= *puVar13) {
      puVar11 = puVar7;
      puVar13 = puVar10;
    }
    bVar12 = puVar11[2] == puVar8[2];
    puVar10 = puVar11;
    if (puVar11[2] < puVar8[2]) goto LAB_007362e9;
  }
  if (bVar12 && *puVar11 < *puVar8) {
    puVar6 = puVar8;
  }
  else {
    puVar6 = puVar11;
    puVar11 = puVar8;
  }
  puVar8 = puVar6;
  puVar10 = puVar11;
LAB_007362e9:
  uVar2 = *puVar14;
  uVar3 = puVar14[1];
  uVar5 = puVar14[3];
  param_2[2] = puVar14[2];
  param_2[3] = uVar5;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  uVar2 = *puVar10;
  uVar3 = puVar10[1];
  uVar5 = puVar10[3];
  param_2[6] = puVar10[2];
  param_2[7] = uVar5;
  param_2[4] = uVar2;
  param_2[5] = uVar3;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar5 = puVar8[3];
  param_2[8] = *puVar8;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  param_2[0xb] = uVar5;
  uVar2 = puVar13[1];
  uVar3 = puVar13[2];
  uVar5 = puVar13[3];
  param_2[0xc] = *puVar13;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar5;
  return;
}


