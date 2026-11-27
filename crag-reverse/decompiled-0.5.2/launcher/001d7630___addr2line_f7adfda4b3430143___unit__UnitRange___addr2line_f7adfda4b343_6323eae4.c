// 001d7630 <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<addr2line[f7adfda4b3430143]::unit::UnitRange,
   <[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          int param_5,longlong param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  undefined8 *puVar43;
  ulonglong uVar44;
  undefined8 *puVar45;
  undefined4 *puVar46;
  undefined8 *puVar47;
  longlong lVar48;
  undefined8 *puVar49;
  ulonglong uVar50;
  undefined8 *puVar51;
  ulonglong uVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  bool bVar56;
  undefined4 uVar57;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_58 = param_6;
  if (&DAT_00000020 < param_2) {
    local_68 = param_4;
LAB_001d7660:
    local_70 = param_1 + 4;
    puVar54 = param_2;
    param_4 = local_68;
    local_38 = param_1;
    do {
      if (param_5 == 0) {
        drift::sort::
        <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
                  (local_38,puVar54,param_3,param_4,1,param_7);
        return;
      }
      puVar47 = local_38 + ((ulonglong)puVar54 >> 3) * 0x10;
      if (&DAT_0000003f < puVar54) {
        puVar47 = (undefined8 *)
                  shared::pivot::median3_rec::
                  <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
                            (local_38,puVar47);
      }
      else {
        uVar52 = local_38[1];
        uVar42 = puVar47[1];
        uVar41 = (local_38 + ((ulonglong)puVar54 >> 3) * 0x1c)[1];
        if (uVar42 < uVar41 != uVar52 < uVar42) {
          puVar47 = local_38 + ((ulonglong)puVar54 >> 3) * 0x1c;
        }
        if (uVar52 < uVar41 != uVar52 < uVar42) {
          puVar47 = local_38;
        }
      }
      param_5 = param_5 + -1;
      puVar49 = (undefined8 *)((ulonglong)((longlong)puVar47 - (longlong)local_38) >> 5);
      local_98 = *(undefined4 *)puVar47;
      uStack_94 = *(undefined4 *)((longlong)puVar47 + 4);
      uStack_90 = *(undefined4 *)(puVar47 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar47 + 0xc);
      local_88 = *(undefined4 *)(puVar47 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar47 + 0x14);
      uStack_80 = *(undefined4 *)(puVar47 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar47 + 0x1c);
      if (local_58 != 0) {
        if ((ulonglong)puVar47[1] <= *(ulonglong *)(local_58 + 8)) goto LAB_001d7910;
      }
      if (param_4 < puVar54) goto LAB_001d8006;
      local_50 = (undefined8 *)CONCAT44(local_50._4_4_,param_5);
      puVar51 = param_3 + (longlong)puVar54 * 4;
      param_2 = (undefined8 *)0x0;
      puVar43 = local_38;
      puVar55 = puVar51;
      puVar45 = puVar49;
      while( true ) {
        for (; puVar43 < local_38 + (longlong)puVar45 * 4; puVar43 = puVar43 + 4) {
          uVar52 = puVar43[1];
          puVar55 = puVar55 + -4;
          uVar42 = puVar47[1];
          puVar53 = puVar55;
          if (uVar52 < uVar42) {
            puVar53 = param_3;
          }
          uVar3 = puVar43[3];
          puVar53[(longlong)param_2 * 4 + 2] = puVar43[2];
          (puVar53 + (longlong)param_2 * 4 + 2)[1] = uVar3;
          uVar57 = *(undefined4 *)((longlong)puVar43 + 4);
          uVar5 = *(undefined4 *)(puVar43 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar43 + 0xc);
          puVar53 = puVar53 + (longlong)param_2 * 4;
          *(undefined4 *)puVar53 = *(undefined4 *)puVar43;
          *(undefined4 *)((longlong)puVar53 + 4) = uVar57;
          *(undefined4 *)(puVar53 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar53 + 0xc) = uVar6;
          param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)(uVar52 < uVar42));
        }
        if (puVar45 == puVar54) break;
        uVar57 = *(undefined4 *)puVar43;
        uVar5 = *(undefined4 *)((longlong)puVar43 + 4);
        uVar6 = *(undefined4 *)(puVar43 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar43 + 0xc);
        uVar8 = *(undefined4 *)((longlong)puVar43 + 0x14);
        uVar9 = *(undefined4 *)(puVar43 + 3);
        uVar10 = *(undefined4 *)((longlong)puVar43 + 0x1c);
        puVar45 = puVar55 + (longlong)param_2 * 4 + -2;
        *(undefined4 *)puVar45 = *(undefined4 *)(puVar43 + 2);
        *(undefined4 *)((longlong)puVar45 + 4) = uVar8;
        *(undefined4 *)(puVar45 + 1) = uVar9;
        *(undefined4 *)((longlong)puVar45 + 0xc) = uVar10;
        puVar45 = puVar55 + (longlong)param_2 * 4 + -4;
        *(undefined4 *)puVar45 = uVar57;
        *(undefined4 *)((longlong)puVar45 + 4) = uVar5;
        *(undefined4 *)(puVar45 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar45 + 0xc) = uVar7;
        puVar55 = puVar55 + -4;
        puVar43 = puVar43 + 4;
        puVar45 = puVar54;
      }
      local_40 = (undefined8 *)((longlong)param_2 << 5);
      local_60 = puVar49;
      local_48 = puVar54;
      uVar57 = (*(code *)PTR_memcpy_00219c60)();
      param_4 = local_68;
      uVar52 = (longlong)local_48 - (longlong)param_2;
      if (uVar52 != 0) {
        if (local_48 == (undefined8 *)((longlong)param_2 + 1)) {
          uVar41 = 0;
        }
        else {
          puVar46 = (undefined4 *)((longlong)local_40 + (longlong)local_70);
          puVar54 = param_3 + (longlong)puVar54 * 4 + -4;
          uVar42 = 0;
          do {
            uVar3 = *puVar54;
            uVar11 = puVar54[1];
            uVar12 = puVar54[3];
            *(undefined8 *)(puVar46 + -4) = puVar54[2];
            *(undefined8 *)(puVar46 + -2) = uVar12;
            *(undefined8 *)(puVar46 + -8) = uVar3;
            *(undefined8 *)(puVar46 + -6) = uVar11;
            uVar41 = uVar42 + 2;
            puVar49 = puVar51 + (uVar42 ^ 0x7fffffffffffffe) * 4;
            uVar57 = *(undefined4 *)puVar49;
            uVar5 = *(undefined4 *)((longlong)puVar49 + 4);
            uVar6 = *(undefined4 *)(puVar49 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar49 + 0xc);
            uVar3 = puVar51[(uVar42 ^ 0x7fffffffffffffe) * 4 + 2];
            uVar11 = (puVar51 + (uVar42 ^ 0x7fffffffffffffe) * 4 + 2)[1];
            *puVar46 = uVar57;
            puVar46[1] = uVar5;
            puVar46[2] = uVar6;
            puVar46[3] = uVar7;
            *(undefined8 *)(puVar46 + 4) = uVar3;
            *(undefined8 *)(puVar46 + 6) = uVar11;
            puVar46 = puVar46 + 0x10;
            puVar54 = puVar54 + -8;
            uVar42 = uVar41;
          } while ((uVar52 & 0xfffffffffffffffe) != uVar41);
          if ((uVar52 & 1) == 0) goto LAB_001d78bf;
        }
        puVar54 = puVar51 + ~uVar41 * 4;
        uVar57 = *(undefined4 *)puVar54;
        uVar5 = *(undefined4 *)((longlong)puVar54 + 4);
        uVar6 = *(undefined4 *)(puVar54 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar54 + 0xc);
        uVar3 = (puVar51 + ~uVar41 * 4 + 2)[1];
        puVar54 = (undefined8 *)
                  ((undefined1 *)((longlong)local_40 + (longlong)local_38) + uVar41 * 0x20 + 0x10);
        *puVar54 = puVar51[~uVar41 * 4 + 2];
        puVar54[1] = uVar3;
        puVar46 = (undefined4 *)
                  ((undefined1 *)((longlong)local_40 + (longlong)local_38) + uVar41 * 0x20);
        *puVar46 = uVar57;
        puVar46[1] = uVar5;
        puVar46[2] = uVar6;
        puVar46[3] = uVar7;
      }
LAB_001d78bf:
      param_5 = (int)local_50;
      puVar54 = local_48;
      puVar49 = local_60;
      if (param_2 == (undefined8 *)0x0) goto LAB_001d7910;
      if (local_48 < param_2) {
        (*(code *)PTR_panic_fmt_0021a010)(uVar57,&PTR_s__rustc_48a229ceaefd4985c50990b14_002175d8);
        goto LAB_001d8000;
      }
      (*(code *)
        PTR_<addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>_0021a7f0
      )(local_68,param_3,(int)local_50,&local_98);
      puVar54 = param_2;
      if (param_2 < &DAT_00000021) {
        param_1 = local_38;
        break;
      }
    } while( true );
  }
LAB_001d7ad6:
  if (param_2 < (undefined8 *)0x2) {
    return;
  }
  if (param_4 < param_2 + 2) goto LAB_001d8006;
  puVar54 = (undefined8 *)((ulonglong)param_2 >> 1);
  if (param_2 < &DAT_00000008) {
    uVar3 = *param_1;
    uVar11 = param_1[1];
    uVar12 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar12;
    *param_3 = uVar3;
    param_3[1] = uVar11;
    uVar3 = param_1[(longlong)puVar54 * 4];
    uVar11 = (param_1 + (longlong)puVar54 * 4)[1];
    uVar12 = (param_1 + (longlong)puVar54 * 4 + 2)[1];
    param_3[(longlong)puVar54 * 4 + 2] = param_1[(longlong)puVar54 * 4 + 2];
    (param_3 + (longlong)puVar54 * 4 + 2)[1] = uVar12;
    param_3[(longlong)puVar54 * 4] = uVar3;
    (param_3 + (longlong)puVar54 * 4)[1] = uVar11;
    puVar47 = (undefined8 *)0x1;
    puVar49 = (undefined8 *)((longlong)param_2 - (longlong)puVar54);
    if ((undefined8 *)0x1 < puVar54) goto LAB_001d7d4c;
  }
  else {
    uVar42 = (ulonglong)((ulonglong)param_1[5] < (ulonglong)param_1[1]);
    uVar41 = (ulonglong)((ulonglong)param_1[5] >= (ulonglong)param_1[1]);
    local_40 = param_1 + uVar41 * 4;
    uVar44 = (ulonglong)((ulonglong)param_1[0xd] < (ulonglong)param_1[9]);
    puVar49 = param_1 + uVar44 * 4 + 8;
    uVar50 = (ulonglong)(((ulonglong)param_1[0xd] < (ulonglong)param_1[9] ^ 3) << 5);
    uVar52 = *(ulonglong *)((longlong)param_1 + uVar50 + 8);
    puVar47 = local_40;
    if (uVar52 < (ulonglong)param_1[uVar41 * 4 + 1]) {
      puVar47 = puVar49;
    }
    local_50 = param_1 + uVar42 * 4;
    if ((ulonglong)param_1[uVar44 * 4 + 9] < (ulonglong)param_1[uVar42 * 4 + 1]) {
      local_50 = puVar49;
      puVar47 = param_1 + uVar42 * 4;
    }
    puVar51 = (undefined8 *)((longlong)param_1 + uVar50);
    if ((ulonglong)param_1[uVar44 * 4 + 9] < (ulonglong)param_1[uVar42 * 4 + 1]) {
      puVar49 = local_40;
    }
    if (uVar52 < (ulonglong)param_1[uVar41 * 4 + 1]) {
      puVar49 = puVar51;
    }
    else {
      local_40 = puVar51;
    }
    puVar51 = puVar49;
    if ((ulonglong)puVar49[1] < (ulonglong)puVar47[1]) {
      puVar51 = puVar47;
      puVar47 = puVar49;
    }
    uVar41 = (ulonglong)
             ((ulonglong)param_1[(longlong)puVar54 * 4 + 5] <
             (ulonglong)param_1[(longlong)puVar54 * 4 + 1]);
    uVar42 = (ulonglong)
             ((ulonglong)param_1[(longlong)puVar54 * 4 + 5] >=
             (ulonglong)param_1[(longlong)puVar54 * 4 + 1]);
    puVar49 = param_1 + (longlong)puVar54 * 4 + uVar42 * 4;
    uVar44 = (ulonglong)
             ((ulonglong)param_1[(longlong)puVar54 * 4 + 0xd] <
             (ulonglong)param_1[(longlong)puVar54 * 4 + 9]);
    puVar55 = param_1 + (longlong)puVar54 * 4 + uVar44 * 4 + 8;
    uVar50 = (ulonglong)
             (((ulonglong)param_1[(longlong)puVar54 * 4 + 0xd] <
               (ulonglong)param_1[(longlong)puVar54 * 4 + 9] ^ 3) << 5);
    uVar52 = *(ulonglong *)((longlong)param_1 + uVar50 + 8 + (longlong)puVar54 * 0x20);
    uVar42 = param_1[(longlong)puVar54 * 4 + uVar42 * 4 + 1];
    puVar43 = puVar49;
    if (uVar52 < uVar42) {
      puVar43 = puVar55;
    }
    puVar53 = puVar55;
    puVar45 = param_1 + (longlong)puVar54 * 4 + uVar41 * 4;
    if ((ulonglong)param_1[(longlong)puVar54 * 4 + uVar44 * 4 + 9] <
        (ulonglong)param_1[(longlong)puVar54 * 4 + uVar41 * 4 + 1]) {
      puVar53 = puVar49;
      puVar45 = puVar55;
      puVar43 = param_1 + (longlong)puVar54 * 4 + uVar41 * 4;
    }
    uVar3 = *local_50;
    uVar11 = local_50[1];
    uVar12 = local_50[3];
    puVar55 = (undefined8 *)((longlong)param_1 + uVar50 + (longlong)puVar54 * 0x20);
    uVar13 = *puVar47;
    uVar14 = puVar47[1];
    if (uVar42 <= uVar52) {
      puVar49 = puVar55;
    }
    uVar15 = puVar47[2];
    uVar16 = puVar47[3];
    if (uVar42 > uVar52) {
      puVar53 = puVar55;
    }
    uVar17 = *puVar51;
    uVar18 = puVar51[1];
    uVar19 = puVar51[2];
    uVar20 = puVar51[3];
    uVar21 = *local_40;
    uVar22 = local_40[1];
    puVar47 = puVar43;
    if ((ulonglong)puVar53[1] < (ulonglong)puVar43[1]) {
      puVar47 = puVar53;
    }
    uVar23 = local_40[2];
    uVar24 = local_40[3];
    if ((ulonglong)puVar53[1] < (ulonglong)puVar43[1]) {
      puVar53 = puVar43;
    }
    uVar25 = *puVar45;
    uVar26 = puVar45[1];
    uVar27 = puVar45[2];
    uVar28 = puVar45[3];
    uVar29 = *puVar47;
    uVar30 = puVar47[1];
    uVar31 = puVar47[2];
    uVar32 = puVar47[3];
    uVar33 = *puVar53;
    uVar34 = puVar53[1];
    uVar35 = puVar53[2];
    uVar36 = puVar53[3];
    uVar37 = *puVar49;
    uVar38 = puVar49[1];
    uVar39 = puVar49[2];
    uVar40 = puVar49[3];
    param_3[2] = local_50[2];
    param_3[3] = uVar12;
    *param_3 = uVar3;
    param_3[1] = uVar11;
    param_3[6] = uVar15;
    param_3[7] = uVar16;
    param_3[4] = uVar13;
    param_3[5] = uVar14;
    param_3[10] = uVar19;
    param_3[0xb] = uVar20;
    param_3[8] = uVar17;
    param_3[9] = uVar18;
    param_3[0xe] = uVar23;
    param_3[0xf] = uVar24;
    param_3[0xc] = uVar21;
    param_3[0xd] = uVar22;
    param_3[(longlong)puVar54 * 4 + 2] = uVar27;
    (param_3 + (longlong)puVar54 * 4 + 2)[1] = uVar28;
    param_3[(longlong)puVar54 * 4] = uVar25;
    (param_3 + (longlong)puVar54 * 4)[1] = uVar26;
    param_3[(longlong)puVar54 * 4 + 4] = uVar29;
    (param_3 + (longlong)puVar54 * 4 + 4)[1] = uVar30;
    param_3[(longlong)puVar54 * 4 + 6] = uVar31;
    (param_3 + (longlong)puVar54 * 4 + 6)[1] = uVar32;
    param_3[(longlong)puVar54 * 4 + 8] = uVar33;
    (param_3 + (longlong)puVar54 * 4 + 8)[1] = uVar34;
    param_3[(longlong)puVar54 * 4 + 10] = uVar35;
    (param_3 + (longlong)puVar54 * 4 + 10)[1] = uVar36;
    param_3[(longlong)puVar54 * 4 + 0xc] = uVar37;
    (param_3 + (longlong)puVar54 * 4 + 0xc)[1] = uVar38;
    param_3[(longlong)puVar54 * 4 + 0xe] = uVar39;
    (param_3 + (longlong)puVar54 * 4 + 0xe)[1] = uVar40;
    puVar47 = (undefined8 *)0x4;
    puVar49 = (undefined8 *)((longlong)param_2 - (longlong)puVar54);
    if ((undefined8 *)0x4 < puVar54) {
LAB_001d7d4c:
      uVar52 = (ulonglong)(uint)((int)puVar47 << 5);
      puVar51 = puVar47;
      do {
        uVar3 = (param_1 + (longlong)puVar51 * 4)[1];
        uVar11 = param_1[(longlong)puVar51 * 4 + 2];
        uVar12 = (param_1 + (longlong)puVar51 * 4 + 2)[1];
        param_3[(longlong)puVar51 * 4] = param_1[(longlong)puVar51 * 4];
        (param_3 + (longlong)puVar51 * 4)[1] = uVar3;
        param_3[(longlong)puVar51 * 4 + 2] = uVar11;
        (param_3 + (longlong)puVar51 * 4 + 2)[1] = uVar12;
        uVar42 = param_3[(longlong)puVar51 * 4 + 1];
        if (uVar42 < (ulonglong)param_3[(longlong)puVar51 * 4 + -3]) {
          uVar3 = param_3[(longlong)puVar51 * 4];
          uVar41 = uVar52;
          do {
            uVar44 = uVar41;
            puVar43 = (undefined8 *)((longlong)param_3 + (uVar44 - 0x20));
            uVar11 = *puVar43;
            uVar12 = puVar43[1];
            puVar43 = (undefined8 *)((longlong)param_3 + (uVar44 - 0x10));
            uVar13 = puVar43[1];
            puVar55 = (undefined8 *)((longlong)param_3 + uVar44 + 0x10);
            *puVar55 = *puVar43;
            puVar55[1] = uVar13;
            *(undefined8 *)((longlong)param_3 + uVar44) = uVar11;
            ((undefined8 *)((longlong)param_3 + uVar44))[1] = uVar12;
            if (uVar44 == 0x20) {
              puVar43 = param_3;
              goto LAB_001d7d63;
            }
            uVar41 = uVar44 - 0x20;
          } while (uVar42 < *(ulonglong *)((longlong)param_3 + (uVar44 - 0x38)));
          puVar43 = (undefined8 *)((uVar44 - 0x20) + (longlong)param_3);
LAB_001d7d63:
          *puVar43 = uVar3;
          *(ulonglong *)((longlong)param_3 + (uVar44 - 0x18)) = uVar42;
          uVar3 = param_1[(longlong)puVar51 * 4 + 3];
          puVar43 = (undefined8 *)((longlong)param_3 + (uVar44 - 0x10));
          *puVar43 = param_1[(longlong)puVar51 * 4 + 2];
          puVar43[1] = uVar3;
        }
        puVar51 = (undefined8 *)((longlong)puVar51 + 1);
        uVar52 = uVar52 + 0x20;
      } while (puVar51 != puVar54);
    }
  }
  puVar51 = param_3 + (longlong)puVar54 * 4;
  if (puVar47 < puVar49) {
    uVar52 = (ulonglong)(uint)((int)puVar47 << 5);
    do {
      uVar3 = (param_1 + (longlong)puVar54 * 4 + (longlong)puVar47 * 4)[1];
      uVar11 = param_1[(longlong)puVar54 * 4 + (longlong)puVar47 * 4 + 2];
      uVar12 = (param_1 + (longlong)puVar54 * 4 + (longlong)puVar47 * 4 + 2)[1];
      puVar51[(longlong)puVar47 * 4] = param_1[(longlong)puVar54 * 4 + (longlong)puVar47 * 4];
      (puVar51 + (longlong)puVar47 * 4)[1] = uVar3;
      puVar51[(longlong)puVar47 * 4 + 2] = uVar11;
      (puVar51 + (longlong)puVar47 * 4 + 2)[1] = uVar12;
      uVar42 = puVar51[(longlong)puVar47 * 4 + 1];
      if (uVar42 < (ulonglong)puVar51[(longlong)puVar47 * 4 + -3]) {
        uVar3 = puVar51[(longlong)puVar47 * 4];
        uVar41 = uVar52;
        do {
          uVar44 = uVar41;
          puVar43 = (undefined8 *)((longlong)puVar51 + (uVar44 - 0x20));
          uVar11 = *puVar43;
          uVar12 = puVar43[1];
          puVar43 = (undefined8 *)((longlong)puVar51 + (uVar44 - 0x10));
          uVar13 = puVar43[1];
          puVar55 = (undefined8 *)((longlong)puVar51 + uVar44 + 0x10);
          *puVar55 = *puVar43;
          puVar55[1] = uVar13;
          *(undefined8 *)((longlong)puVar51 + uVar44) = uVar11;
          ((undefined8 *)((longlong)puVar51 + uVar44))[1] = uVar12;
          if (uVar44 == 0x20) {
            puVar43 = puVar51;
            goto LAB_001d7e13;
          }
          uVar41 = uVar44 - 0x20;
        } while (uVar42 < *(ulonglong *)((longlong)puVar51 + (uVar44 - 0x38)));
        puVar43 = (undefined8 *)((uVar44 - 0x20) + (longlong)puVar51);
LAB_001d7e13:
        *puVar43 = uVar3;
        *(ulonglong *)((longlong)puVar51 + (uVar44 - 0x18)) = uVar42;
        uVar3 = param_1[(longlong)puVar54 * 4 + (longlong)puVar47 * 4 + 3];
        puVar43 = (undefined8 *)((longlong)puVar51 + (uVar44 - 0x10));
        *puVar43 = param_1[(longlong)puVar54 * 4 + (longlong)puVar47 * 4 + 2];
        puVar43[1] = uVar3;
      }
      puVar47 = (undefined8 *)((longlong)puVar47 + 1);
      uVar52 = uVar52 + 0x20;
    } while (puVar47 != puVar49);
  }
  local_60 = (undefined8 *)((longlong)param_2 * 0x20);
  puVar49 = param_3 + -4 + (longlong)param_2 * 4;
  puVar47 = puVar51 + -4;
  puVar55 = param_1;
  puVar43 = param_1 + (longlong)param_2 * 4;
  do {
    local_38 = puVar54;
    puVar45 = puVar55;
    bVar56 = (ulonglong)puVar51[1] < (ulonglong)param_3[1];
    local_40 = (undefined8 *)CONCAT71(local_40._1_7_,!bVar56);
    local_50 = (undefined8 *)CONCAT71(local_50._1_7_,bVar56);
    puVar54 = puVar51;
    if (!bVar56) {
      puVar54 = param_3;
    }
    uVar3 = *puVar54;
    uVar11 = puVar54[1];
    uVar12 = puVar54[3];
    puVar45[2] = puVar54[2];
    puVar45[3] = uVar12;
    *puVar45 = uVar3;
    puVar45[1] = uVar11;
    uVar52 = puVar49[1];
    uVar42 = puVar47[1];
    puVar54 = puVar47;
    if (uVar52 >= uVar42) {
      puVar54 = puVar49;
    }
    puVar51 = puVar51 + (ulonglong)bVar56 * 4;
    param_3 = param_3 + (ulonglong)!bVar56 * 4;
    uVar57 = *(undefined4 *)puVar54;
    uVar5 = *(undefined4 *)((longlong)puVar54 + 4);
    uVar6 = *(undefined4 *)(puVar54 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar54 + 0xc);
    uVar3 = puVar54[3];
    puVar43[-2] = puVar54[2];
    puVar43[-1] = uVar3;
    *(undefined4 *)(puVar43 + -4) = uVar57;
    *(undefined4 *)((longlong)puVar43 + -0x1c) = uVar5;
    *(undefined4 *)(puVar43 + -3) = uVar6;
    *(undefined4 *)((longlong)puVar43 + -0x14) = uVar7;
    puVar49 = puVar49 + ((ulonglong)(uVar52 < uVar42) - 1) * 4;
    puVar47 = puVar47 + (ulonglong)(uVar52 < uVar42) * -4;
    puVar55 = puVar45 + 4;
    puVar54 = (undefined8 *)((longlong)local_38 + -1);
    puVar43 = puVar43 + -4;
  } while ((undefined8 *)((longlong)local_38 + -1) != (undefined8 *)0x0);
  if (((ulonglong)param_2 & 1) != 0) {
    bVar56 = param_3 < puVar47 + 4;
    puVar54 = puVar51;
    if (bVar56) {
      puVar54 = param_3;
    }
    uVar57 = *(undefined4 *)puVar54;
    uVar5 = *(undefined4 *)((longlong)puVar54 + 4);
    uVar6 = *(undefined4 *)(puVar54 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar54 + 0xc);
    uVar3 = puVar54[3];
    puVar45[6] = puVar54[2];
    puVar45[7] = uVar3;
    *(undefined4 *)(puVar45 + 4) = uVar57;
    *(undefined4 *)((longlong)puVar45 + 0x24) = uVar5;
    *(undefined4 *)(puVar45 + 5) = uVar6;
    *(undefined4 *)((longlong)puVar45 + 0x2c) = uVar7;
    param_3 = param_3 + (ulonglong)bVar56 * 4;
    puVar51 = puVar51 + (ulonglong)!bVar56 * 4;
  }
  local_48 = param_1;
  if ((param_3 == puVar47 + 4) && (puVar51 == puVar49 + 4)) {
    return;
  }
LAB_001d8000:
  (*(code *)PTR_panic_on_ord_violation_0021a7d8)();
LAB_001d8006:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
LAB_001d7910:
  if (param_4 < puVar54) goto LAB_001d8006;
  local_40 = (undefined8 *)((longlong)puVar54 * 0x20);
  puVar51 = param_3 + (longlong)puVar54 * 4;
  puVar55 = (undefined8 *)0x0;
  puVar43 = local_38;
  while( true ) {
    for (; puVar43 < local_38 + (longlong)puVar49 * 4; puVar43 = puVar43 + 4) {
      uVar52 = puVar47[1];
      puVar51 = puVar51 + -4;
      uVar42 = puVar43[1];
      puVar45 = puVar51;
      if (uVar42 <= uVar52) {
        puVar45 = param_3;
      }
      uVar57 = *(undefined4 *)puVar43;
      uVar5 = *(undefined4 *)((longlong)puVar43 + 4);
      uVar6 = *(undefined4 *)(puVar43 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar43 + 0xc);
      uVar3 = puVar43[3];
      puVar45[(longlong)puVar55 * 4 + 2] = puVar43[2];
      (puVar45 + (longlong)puVar55 * 4 + 2)[1] = uVar3;
      puVar45 = puVar45 + (longlong)puVar55 * 4;
      *(undefined4 *)puVar45 = uVar57;
      *(undefined4 *)((longlong)puVar45 + 4) = uVar5;
      *(undefined4 *)(puVar45 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar45 + 0xc) = uVar7;
      puVar55 = (undefined8 *)((longlong)puVar55 + (ulonglong)(uVar42 <= uVar52));
    }
    if (puVar49 == puVar54) break;
    puVar51 = puVar51 + -4;
    uVar57 = *(undefined4 *)puVar43;
    uVar5 = *(undefined4 *)((longlong)puVar43 + 4);
    uVar6 = *(undefined4 *)(puVar43 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar43 + 0xc);
    uVar3 = puVar43[3];
    param_3[(longlong)puVar55 * 4 + 2] = puVar43[2];
    (param_3 + (longlong)puVar55 * 4 + 2)[1] = uVar3;
    puVar49 = param_3 + (longlong)puVar55 * 4;
    *(undefined4 *)puVar49 = uVar57;
    *(undefined4 *)((longlong)puVar49 + 4) = uVar5;
    *(undefined4 *)(puVar49 + 1) = uVar6;
    *(undefined4 *)((longlong)puVar49 + 0xc) = uVar7;
    puVar55 = (undefined8 *)((longlong)puVar55 + 1);
    puVar43 = puVar43 + 4;
    puVar49 = puVar54;
  }
  (*(code *)PTR_memcpy_00219c60)(puVar51,(longlong)puVar55 * 0x20);
  param_2 = (undefined8 *)((longlong)puVar54 - (longlong)puVar55);
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  param_1 = local_38 + (longlong)puVar55 * 4;
  puVar1 = (undefined1 *)((longlong)param_3 + (longlong)local_40);
  if (puVar54 == (undefined8 *)((longlong)puVar55 + 1)) {
    uVar42 = 0;
  }
  else {
    puVar47 = local_38 + (longlong)puVar55 * 4 + 4;
    puVar49 = (undefined8 *)((longlong)local_40 + (longlong)(param_3 + -4));
    uVar52 = 0;
    do {
      uVar3 = *puVar49;
      uVar11 = puVar49[1];
      uVar12 = puVar49[3];
      puVar47[-2] = puVar49[2];
      puVar47[-1] = uVar12;
      puVar47[-4] = uVar3;
      puVar47[-3] = uVar11;
      uVar42 = uVar52 + 2;
      lVar48 = (uVar52 ^ 0x7fffffffffffffe) * 0x20;
      puVar46 = (undefined4 *)(puVar1 + lVar48);
      uVar57 = puVar46[1];
      uVar5 = puVar46[2];
      uVar6 = puVar46[3];
      puVar2 = (undefined4 *)(puVar1 + lVar48 + 0x10);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      *(undefined4 *)puVar47 = *puVar46;
      *(undefined4 *)((longlong)puVar47 + 4) = uVar57;
      *(undefined4 *)(puVar47 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar47 + 0xc) = uVar6;
      *(undefined4 *)(puVar47 + 2) = uVar7;
      *(undefined4 *)((longlong)puVar47 + 0x14) = uVar8;
      *(undefined4 *)(puVar47 + 3) = uVar9;
      *(undefined4 *)((longlong)puVar47 + 0x1c) = uVar10;
      puVar47 = puVar47 + 8;
      puVar49 = puVar49 + -8;
      uVar52 = uVar42;
    } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar42);
    if (((ulonglong)param_2 & 1) == 0) goto LAB_001d7a8c;
  }
  puVar46 = (undefined4 *)(puVar1 + ~uVar42 * 0x20);
  uVar57 = *puVar46;
  uVar5 = puVar46[1];
  uVar6 = puVar46[2];
  uVar7 = puVar46[3];
  puVar46 = (undefined4 *)(puVar1 + ~uVar42 * 0x20 + 0x10);
  uVar8 = puVar46[1];
  uVar9 = puVar46[2];
  uVar10 = puVar46[3];
  puVar47 = param_1 + uVar42 * 4 + 2;
  *(undefined4 *)puVar47 = *puVar46;
  *(undefined4 *)((longlong)puVar47 + 4) = uVar8;
  *(undefined4 *)(puVar47 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar47 + 0xc) = uVar10;
  puVar47 = param_1 + uVar42 * 4;
  *(undefined4 *)puVar47 = uVar57;
  *(undefined4 *)((longlong)puVar47 + 4) = uVar5;
  *(undefined4 *)(puVar47 + 1) = uVar6;
  *(undefined4 *)((longlong)puVar47 + 0xc) = uVar7;
LAB_001d7a8c:
  if (puVar54 < puVar55) {
    uVar57 = (*(code *)PTR_slice_index_fail_00219d80)
                       (&PTR_s__rustc_48a229ceaefd4985c50990b14_002175f0);
    (*(code *)PTR_memcpy_00219c60)(uVar57,local_60);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_58 = 0;
  param_4 = local_68;
  if (param_2 <= &DAT_00000020) goto LAB_001d7ad6;
  goto LAB_001d7660;
}


