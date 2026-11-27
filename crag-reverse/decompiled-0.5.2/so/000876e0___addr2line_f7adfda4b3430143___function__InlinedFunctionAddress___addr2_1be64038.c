// 000876e0 <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  
  lVar8 = 0;
  puVar12 = param_1;
  puVar9 = param_1 + 4;
  do {
    uVar1 = puVar12[6];
    uVar2 = puVar12[4];
    if ((uVar1 < puVar12[2]) || ((uVar1 <= puVar12[2] && (uVar2 < *puVar12)))) {
      uVar3 = puVar12[5];
      uVar4 = puVar12[7];
      uVar5 = *puVar12;
      uVar6 = puVar12[1];
      uVar7 = puVar12[3];
      puVar9[2] = puVar12[2];
      puVar9[3] = uVar7;
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      puVar11 = param_1;
      if (puVar12 != param_1) {
        lVar10 = lVar8;
        do {
          puVar11 = (ulonglong *)((longlong)param_1 + lVar10);
          puVar12 = (ulonglong *)((longlong)param_1 + lVar10 + -0x20);
          uVar5 = *(ulonglong *)((longlong)param_1 + lVar10 + -0x10);
          if ((uVar5 <= uVar1) && ((uVar5 < uVar1 || (*puVar12 <= uVar2)))) goto LAB_00087703;
          uVar5 = *puVar12;
          uVar6 = *(ulonglong *)((longlong)param_1 + lVar10 + -0x18);
          uVar7 = *(ulonglong *)((longlong)param_1 + lVar10 + -8);
          puVar11[2] = *(ulonglong *)((longlong)param_1 + lVar10 + -0x10);
          puVar11[3] = uVar7;
          *puVar11 = uVar5;
          puVar11[1] = uVar6;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
        puVar11 = param_1;
      }
LAB_00087703:
      *puVar11 = uVar2;
      puVar11[1] = uVar3;
      puVar11[2] = uVar1;
      puVar11[3] = uVar4;
    }
    puVar11 = puVar9 + 4;
    lVar8 = lVar8 + 0x20;
    puVar12 = puVar9;
    puVar9 = puVar11;
    if (puVar11 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}


