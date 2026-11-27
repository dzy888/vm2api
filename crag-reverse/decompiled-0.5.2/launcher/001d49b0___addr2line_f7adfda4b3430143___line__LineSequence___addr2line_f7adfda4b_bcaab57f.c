// 001d49b0 <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<addr2line[f7adfda4b3430143]::line::LineSequence,
   <[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
          (undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  lVar9 = 0x20;
  puVar12 = param_1 + 4;
  puVar11 = param_1;
  do {
    puVar10 = puVar12;
    uVar1 = puVar11[6];
    if (uVar1 < (ulonglong)puVar11[2]) {
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      uVar2 = puVar11[7];
      lVar8 = lVar9;
      do {
        lVar13 = lVar8;
        puVar12 = (undefined8 *)((longlong)param_1 + lVar13 + -0x20);
        uVar5 = *puVar12;
        uVar6 = puVar12[1];
        puVar12 = (undefined8 *)((longlong)param_1 + lVar13 + -0x10);
        uVar7 = puVar12[1];
        puVar11 = (undefined8 *)((longlong)param_1 + lVar13 + 0x10);
        *puVar11 = *puVar12;
        puVar11[1] = uVar7;
        *(undefined8 *)((longlong)param_1 + lVar13) = uVar5;
        ((undefined8 *)((longlong)param_1 + lVar13))[1] = uVar6;
        if (lVar13 == 0x20) {
          puVar12 = param_1;
          goto LAB_001d49d3;
        }
        lVar8 = lVar13 + -0x20;
      } while (uVar1 < *(ulonglong *)((longlong)param_1 + lVar13 + -0x30));
      puVar12 = (undefined8 *)(lVar13 + -0x20 + (longlong)param_1);
LAB_001d49d3:
      *puVar12 = uVar3;
      puVar12[1] = uVar4;
      *(ulonglong *)((longlong)param_1 + lVar13 + -0x10) = uVar1;
      *(undefined8 *)((longlong)param_1 + lVar13 + -8) = uVar2;
    }
    lVar9 = lVar9 + 0x20;
    puVar12 = puVar10 + 4;
    puVar11 = puVar10;
    if (puVar10 + 4 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}


