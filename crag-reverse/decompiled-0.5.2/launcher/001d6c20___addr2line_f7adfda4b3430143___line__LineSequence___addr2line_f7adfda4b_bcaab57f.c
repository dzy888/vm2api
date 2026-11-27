// 001d6c20 <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<addr2line[f7adfda4b3430143]::line::LineSequence,
   <[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          int param_5,longlong param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  undefined8 uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  undefined8 *puVar44;
  ulonglong uVar45;
  undefined8 *puVar46;
  undefined4 *puVar47;
  undefined8 *puVar48;
  longlong lVar49;
  undefined8 *puVar50;
  ulonglong uVar51;
  undefined8 *puVar52;
  ulonglong uVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  bool bVar57;
  undefined4 uVar58;
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
LAB_001d6c50:
    local_70 = param_1 + 4;
    puVar55 = param_2;
    param_4 = local_68;
    local_38 = param_1;
    do {
      if (param_5 == 0) {
        drift::sort::
        <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                  (local_38,puVar55,param_3,param_4,1,param_7);
        return;
      }
      puVar48 = local_38 + ((ulonglong)puVar55 >> 3) * 0x10;
      if (&DAT_0000003f < puVar55) {
        puVar48 = (undefined8 *)
                  shared::pivot::median3_rec::
                  <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                            (local_38,puVar48);
      }
      else {
        uVar53 = local_38[2];
        uVar43 = puVar48[2];
        uVar42 = (local_38 + ((ulonglong)puVar55 >> 3) * 0x1c)[2];
        if (uVar43 < uVar42 != uVar53 < uVar43) {
          puVar48 = local_38 + ((ulonglong)puVar55 >> 3) * 0x1c;
        }
        if (uVar53 < uVar42 != uVar53 < uVar43) {
          puVar48 = local_38;
        }
      }
      param_5 = param_5 + -1;
      puVar50 = (undefined8 *)((ulonglong)((longlong)puVar48 - (longlong)local_38) >> 5);
      local_98 = *(undefined4 *)puVar48;
      uStack_94 = *(undefined4 *)((longlong)puVar48 + 4);
      uStack_90 = *(undefined4 *)(puVar48 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar48 + 0xc);
      local_88 = *(undefined4 *)(puVar48 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar48 + 0x14);
      uStack_80 = *(undefined4 *)(puVar48 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar48 + 0x1c);
      if (local_58 != 0) {
        if ((ulonglong)puVar48[2] <= *(ulonglong *)(local_58 + 0x10)) goto LAB_001d6f00;
      }
      if (param_4 < puVar55) goto LAB_001d75f6;
      local_50 = (undefined8 *)CONCAT44(local_50._4_4_,param_5);
      puVar52 = param_3 + (longlong)puVar55 * 4;
      param_2 = (undefined8 *)0x0;
      puVar44 = local_38;
      puVar56 = puVar52;
      puVar46 = puVar50;
      while( true ) {
        for (; puVar44 < local_38 + (longlong)puVar46 * 4; puVar44 = puVar44 + 4) {
          uVar53 = puVar44[2];
          puVar56 = puVar56 + -4;
          uVar43 = puVar48[2];
          puVar54 = puVar56;
          if (uVar53 < uVar43) {
            puVar54 = param_3;
          }
          uVar58 = *(undefined4 *)puVar44;
          uVar6 = *(undefined4 *)((longlong)puVar44 + 4);
          uVar7 = *(undefined4 *)(puVar44 + 1);
          uVar8 = *(undefined4 *)((longlong)puVar44 + 0xc);
          uVar9 = *(undefined4 *)((longlong)puVar44 + 0x14);
          uVar10 = *(undefined4 *)(puVar44 + 3);
          uVar11 = *(undefined4 *)((longlong)puVar44 + 0x1c);
          puVar2 = puVar54 + (longlong)param_2 * 4 + 2;
          *(undefined4 *)puVar2 = *(undefined4 *)(puVar44 + 2);
          *(undefined4 *)((longlong)puVar2 + 4) = uVar9;
          *(undefined4 *)(puVar2 + 1) = uVar10;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uVar11;
          puVar54 = puVar54 + (longlong)param_2 * 4;
          *(undefined4 *)puVar54 = uVar58;
          *(undefined4 *)((longlong)puVar54 + 4) = uVar6;
          *(undefined4 *)(puVar54 + 1) = uVar7;
          *(undefined4 *)((longlong)puVar54 + 0xc) = uVar8;
          param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)(uVar53 < uVar43));
        }
        if (puVar46 == puVar55) break;
        uVar58 = *(undefined4 *)puVar44;
        uVar6 = *(undefined4 *)((longlong)puVar44 + 4);
        uVar7 = *(undefined4 *)(puVar44 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar44 + 0xc);
        uVar9 = *(undefined4 *)((longlong)puVar44 + 0x14);
        uVar10 = *(undefined4 *)(puVar44 + 3);
        uVar11 = *(undefined4 *)((longlong)puVar44 + 0x1c);
        puVar46 = puVar56 + (longlong)param_2 * 4 + -2;
        *(undefined4 *)puVar46 = *(undefined4 *)(puVar44 + 2);
        *(undefined4 *)((longlong)puVar46 + 4) = uVar9;
        *(undefined4 *)(puVar46 + 1) = uVar10;
        *(undefined4 *)((longlong)puVar46 + 0xc) = uVar11;
        puVar46 = puVar56 + (longlong)param_2 * 4 + -4;
        *(undefined4 *)puVar46 = uVar58;
        *(undefined4 *)((longlong)puVar46 + 4) = uVar6;
        *(undefined4 *)(puVar46 + 1) = uVar7;
        *(undefined4 *)((longlong)puVar46 + 0xc) = uVar8;
        puVar56 = puVar56 + -4;
        puVar44 = puVar44 + 4;
        puVar46 = puVar55;
      }
      local_40 = (undefined8 *)((longlong)param_2 << 5);
      local_60 = puVar50;
      local_48 = puVar55;
      uVar58 = (*(code *)PTR_memcpy_00219c60)();
      param_4 = local_68;
      uVar53 = (longlong)local_48 - (longlong)param_2;
      if (uVar53 != 0) {
        if (local_48 == (undefined8 *)((longlong)param_2 + 1)) {
          uVar42 = 0;
        }
        else {
          puVar47 = (undefined4 *)((longlong)local_40 + (longlong)local_70);
          puVar55 = param_3 + (longlong)puVar55 * 4 + -4;
          uVar43 = 0;
          do {
            uVar4 = *puVar55;
            uVar12 = puVar55[1];
            uVar13 = puVar55[3];
            *(undefined8 *)(puVar47 + -4) = puVar55[2];
            *(undefined8 *)(puVar47 + -2) = uVar13;
            *(undefined8 *)(puVar47 + -8) = uVar4;
            *(undefined8 *)(puVar47 + -6) = uVar12;
            uVar42 = uVar43 + 2;
            puVar50 = puVar52 + (uVar43 ^ 0x7fffffffffffffe) * 4;
            uVar58 = *(undefined4 *)puVar50;
            uVar6 = *(undefined4 *)((longlong)puVar50 + 4);
            uVar7 = *(undefined4 *)(puVar50 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar50 + 0xc);
            uVar4 = puVar52[(uVar43 ^ 0x7fffffffffffffe) * 4 + 2];
            uVar12 = (puVar52 + (uVar43 ^ 0x7fffffffffffffe) * 4 + 2)[1];
            *puVar47 = uVar58;
            puVar47[1] = uVar6;
            puVar47[2] = uVar7;
            puVar47[3] = uVar8;
            *(undefined8 *)(puVar47 + 4) = uVar4;
            *(undefined8 *)(puVar47 + 6) = uVar12;
            puVar47 = puVar47 + 0x10;
            puVar55 = puVar55 + -8;
            uVar43 = uVar42;
          } while ((uVar53 & 0xfffffffffffffffe) != uVar42);
          if ((uVar53 & 1) == 0) goto LAB_001d6eaf;
        }
        puVar55 = puVar52 + ~uVar42 * 4;
        uVar58 = *(undefined4 *)puVar55;
        uVar6 = *(undefined4 *)((longlong)puVar55 + 4);
        uVar7 = *(undefined4 *)(puVar55 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar55 + 0xc);
        uVar4 = (puVar52 + ~uVar42 * 4 + 2)[1];
        puVar55 = (undefined8 *)
                  ((undefined1 *)((longlong)local_40 + (longlong)local_38) + uVar42 * 0x20 + 0x10);
        *puVar55 = puVar52[~uVar42 * 4 + 2];
        puVar55[1] = uVar4;
        puVar47 = (undefined4 *)
                  ((undefined1 *)((longlong)local_40 + (longlong)local_38) + uVar42 * 0x20);
        *puVar47 = uVar58;
        puVar47[1] = uVar6;
        puVar47[2] = uVar7;
        puVar47[3] = uVar8;
      }
LAB_001d6eaf:
      param_5 = (int)local_50;
      puVar55 = local_48;
      puVar50 = local_60;
      if (param_2 == (undefined8 *)0x0) goto LAB_001d6f00;
      if (local_48 < param_2) {
        (*(code *)PTR_panic_fmt_0021a010)(uVar58,&PTR_s__rustc_48a229ceaefd4985c50990b14_002175d8);
        goto LAB_001d75f0;
      }
      (*(code *)
        PTR_<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>_0021a7e8
      )(local_68,param_3,(int)local_50,&local_98);
      puVar55 = param_2;
      if (param_2 < &DAT_00000021) {
        param_1 = local_38;
        break;
      }
    } while( true );
  }
LAB_001d70c6:
  if (param_2 < (undefined8 *)0x2) {
    return;
  }
  if (param_4 < param_2 + 2) goto LAB_001d75f6;
  puVar55 = (undefined8 *)((ulonglong)param_2 >> 1);
  if (param_2 < &DAT_00000008) {
    uVar4 = *param_1;
    uVar12 = param_1[1];
    uVar13 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar13;
    *param_3 = uVar4;
    param_3[1] = uVar12;
    uVar4 = param_1[(longlong)puVar55 * 4];
    uVar12 = (param_1 + (longlong)puVar55 * 4)[1];
    uVar13 = (param_1 + (longlong)puVar55 * 4 + 2)[1];
    param_3[(longlong)puVar55 * 4 + 2] = param_1[(longlong)puVar55 * 4 + 2];
    (param_3 + (longlong)puVar55 * 4 + 2)[1] = uVar13;
    param_3[(longlong)puVar55 * 4] = uVar4;
    (param_3 + (longlong)puVar55 * 4)[1] = uVar12;
    puVar48 = (undefined8 *)0x1;
    puVar50 = (undefined8 *)((longlong)param_2 - (longlong)puVar55);
    if ((undefined8 *)0x1 < puVar55) goto LAB_001d733c;
  }
  else {
    uVar43 = (ulonglong)((ulonglong)param_1[6] < (ulonglong)param_1[2]);
    uVar42 = (ulonglong)((ulonglong)param_1[6] >= (ulonglong)param_1[2]);
    local_40 = param_1 + uVar42 * 4;
    uVar45 = (ulonglong)((ulonglong)param_1[0xe] < (ulonglong)param_1[10]);
    puVar50 = param_1 + uVar45 * 4 + 8;
    uVar51 = (ulonglong)(((ulonglong)param_1[0xe] < (ulonglong)param_1[10] ^ 3) << 5);
    uVar53 = *(ulonglong *)((longlong)param_1 + uVar51 + 0x10);
    puVar48 = local_40;
    if (uVar53 < (ulonglong)param_1[uVar42 * 4 + 2]) {
      puVar48 = puVar50;
    }
    local_50 = param_1 + uVar43 * 4;
    if ((ulonglong)param_1[uVar45 * 4 + 10] < (ulonglong)param_1[uVar43 * 4 + 2]) {
      local_50 = puVar50;
      puVar48 = param_1 + uVar43 * 4;
    }
    puVar52 = (undefined8 *)((longlong)param_1 + uVar51);
    if ((ulonglong)param_1[uVar45 * 4 + 10] < (ulonglong)param_1[uVar43 * 4 + 2]) {
      puVar50 = local_40;
    }
    if (uVar53 < (ulonglong)param_1[uVar42 * 4 + 2]) {
      puVar50 = puVar52;
    }
    else {
      local_40 = puVar52;
    }
    puVar52 = puVar50;
    if ((ulonglong)puVar50[2] < (ulonglong)puVar48[2]) {
      puVar52 = puVar48;
      puVar48 = puVar50;
    }
    uVar42 = (ulonglong)
             ((ulonglong)param_1[(longlong)puVar55 * 4 + 6] <
             (ulonglong)param_1[(longlong)puVar55 * 4 + 2]);
    uVar43 = (ulonglong)
             ((ulonglong)param_1[(longlong)puVar55 * 4 + 6] >=
             (ulonglong)param_1[(longlong)puVar55 * 4 + 2]);
    puVar50 = param_1 + (longlong)puVar55 * 4 + uVar43 * 4;
    uVar45 = (ulonglong)
             ((ulonglong)param_1[(longlong)puVar55 * 4 + 0xe] <
             (ulonglong)param_1[(longlong)puVar55 * 4 + 10]);
    puVar56 = param_1 + (longlong)puVar55 * 4 + uVar45 * 4 + 8;
    uVar51 = (ulonglong)
             (((ulonglong)param_1[(longlong)puVar55 * 4 + 0xe] <
               (ulonglong)param_1[(longlong)puVar55 * 4 + 10] ^ 3) << 5);
    uVar53 = *(ulonglong *)((longlong)param_1 + uVar51 + 0x10 + (longlong)puVar55 * 0x20);
    uVar43 = param_1[(longlong)puVar55 * 4 + uVar43 * 4 + 2];
    puVar44 = puVar50;
    if (uVar53 < uVar43) {
      puVar44 = puVar56;
    }
    puVar54 = puVar56;
    puVar46 = param_1 + (longlong)puVar55 * 4 + uVar42 * 4;
    if ((ulonglong)param_1[(longlong)puVar55 * 4 + uVar45 * 4 + 10] <
        (ulonglong)param_1[(longlong)puVar55 * 4 + uVar42 * 4 + 2]) {
      puVar54 = puVar50;
      puVar46 = puVar56;
      puVar44 = param_1 + (longlong)puVar55 * 4 + uVar42 * 4;
    }
    uVar4 = *local_50;
    uVar12 = local_50[1];
    uVar13 = local_50[3];
    puVar56 = (undefined8 *)((longlong)param_1 + uVar51 + (longlong)puVar55 * 0x20);
    uVar14 = *puVar48;
    uVar15 = puVar48[1];
    if (uVar43 <= uVar53) {
      puVar50 = puVar56;
    }
    uVar16 = puVar48[2];
    uVar17 = puVar48[3];
    if (uVar43 > uVar53) {
      puVar54 = puVar56;
    }
    uVar18 = *puVar52;
    uVar19 = puVar52[1];
    uVar20 = puVar52[2];
    uVar21 = puVar52[3];
    uVar22 = *local_40;
    uVar23 = local_40[1];
    puVar48 = puVar44;
    if ((ulonglong)puVar54[2] < (ulonglong)puVar44[2]) {
      puVar48 = puVar54;
    }
    uVar24 = local_40[2];
    uVar25 = local_40[3];
    if ((ulonglong)puVar54[2] < (ulonglong)puVar44[2]) {
      puVar54 = puVar44;
    }
    uVar26 = *puVar46;
    uVar27 = puVar46[1];
    uVar28 = puVar46[2];
    uVar29 = puVar46[3];
    uVar30 = *puVar48;
    uVar31 = puVar48[1];
    uVar32 = puVar48[2];
    uVar33 = puVar48[3];
    uVar34 = *puVar54;
    uVar35 = puVar54[1];
    uVar36 = puVar54[2];
    uVar37 = puVar54[3];
    uVar38 = *puVar50;
    uVar39 = puVar50[1];
    uVar40 = puVar50[2];
    uVar41 = puVar50[3];
    param_3[2] = local_50[2];
    param_3[3] = uVar13;
    *param_3 = uVar4;
    param_3[1] = uVar12;
    param_3[6] = uVar16;
    param_3[7] = uVar17;
    param_3[4] = uVar14;
    param_3[5] = uVar15;
    param_3[10] = uVar20;
    param_3[0xb] = uVar21;
    param_3[8] = uVar18;
    param_3[9] = uVar19;
    param_3[0xe] = uVar24;
    param_3[0xf] = uVar25;
    param_3[0xc] = uVar22;
    param_3[0xd] = uVar23;
    param_3[(longlong)puVar55 * 4 + 2] = uVar28;
    (param_3 + (longlong)puVar55 * 4 + 2)[1] = uVar29;
    param_3[(longlong)puVar55 * 4] = uVar26;
    (param_3 + (longlong)puVar55 * 4)[1] = uVar27;
    param_3[(longlong)puVar55 * 4 + 4] = uVar30;
    (param_3 + (longlong)puVar55 * 4 + 4)[1] = uVar31;
    param_3[(longlong)puVar55 * 4 + 6] = uVar32;
    (param_3 + (longlong)puVar55 * 4 + 6)[1] = uVar33;
    param_3[(longlong)puVar55 * 4 + 8] = uVar34;
    (param_3 + (longlong)puVar55 * 4 + 8)[1] = uVar35;
    param_3[(longlong)puVar55 * 4 + 10] = uVar36;
    (param_3 + (longlong)puVar55 * 4 + 10)[1] = uVar37;
    param_3[(longlong)puVar55 * 4 + 0xc] = uVar38;
    (param_3 + (longlong)puVar55 * 4 + 0xc)[1] = uVar39;
    param_3[(longlong)puVar55 * 4 + 0xe] = uVar40;
    (param_3 + (longlong)puVar55 * 4 + 0xe)[1] = uVar41;
    puVar48 = (undefined8 *)0x4;
    puVar50 = (undefined8 *)((longlong)param_2 - (longlong)puVar55);
    if ((undefined8 *)0x4 < puVar55) {
LAB_001d733c:
      uVar53 = (ulonglong)(uint)((int)puVar48 << 5);
      puVar52 = puVar48;
      do {
        uVar4 = param_1[(longlong)puVar52 * 4];
        uVar12 = (param_1 + (longlong)puVar52 * 4)[1];
        uVar13 = (param_1 + (longlong)puVar52 * 4 + 2)[1];
        param_3[(longlong)puVar52 * 4 + 2] = param_1[(longlong)puVar52 * 4 + 2];
        (param_3 + (longlong)puVar52 * 4 + 2)[1] = uVar13;
        param_3[(longlong)puVar52 * 4] = uVar4;
        (param_3 + (longlong)puVar52 * 4)[1] = uVar12;
        uVar43 = param_3[(longlong)puVar52 * 4 + 2];
        if (uVar43 < (ulonglong)param_3[(longlong)puVar52 * 4 + -2]) {
          uVar4 = param_3[(longlong)puVar52 * 4 + 3];
          uVar42 = uVar53;
          do {
            uVar45 = uVar42;
            puVar44 = (undefined8 *)((longlong)param_3 + (uVar45 - 0x20));
            uVar12 = *puVar44;
            uVar13 = puVar44[1];
            puVar44 = (undefined8 *)((longlong)param_3 + (uVar45 - 0x10));
            uVar14 = puVar44[1];
            puVar56 = (undefined8 *)((longlong)param_3 + uVar45 + 0x10);
            *puVar56 = *puVar44;
            puVar56[1] = uVar14;
            *(undefined8 *)((longlong)param_3 + uVar45) = uVar12;
            ((undefined8 *)((longlong)param_3 + uVar45))[1] = uVar13;
            if (uVar45 == 0x20) {
              puVar44 = param_3;
              goto LAB_001d7353;
            }
            uVar42 = uVar45 - 0x20;
          } while (uVar43 < *(ulonglong *)((longlong)param_3 + (uVar45 - 0x30)));
          puVar44 = (undefined8 *)((uVar45 - 0x20) + (longlong)param_3);
LAB_001d7353:
          uVar12 = (param_1 + (longlong)puVar52 * 4)[1];
          *puVar44 = param_1[(longlong)puVar52 * 4];
          puVar44[1] = uVar12;
          *(ulonglong *)((longlong)param_3 + (uVar45 - 0x10)) = uVar43;
          *(undefined8 *)((longlong)param_3 + (uVar45 - 8)) = uVar4;
        }
        puVar52 = (undefined8 *)((longlong)puVar52 + 1);
        uVar53 = uVar53 + 0x20;
      } while (puVar52 != puVar55);
    }
  }
  puVar52 = param_3 + (longlong)puVar55 * 4;
  if (puVar48 < puVar50) {
    uVar53 = (ulonglong)(uint)((int)puVar48 << 5);
    do {
      uVar4 = param_1[(longlong)puVar55 * 4 + (longlong)puVar48 * 4];
      uVar12 = (param_1 + (longlong)puVar55 * 4 + (longlong)puVar48 * 4)[1];
      uVar13 = (param_1 + (longlong)puVar55 * 4 + (longlong)puVar48 * 4 + 2)[1];
      puVar52[(longlong)puVar48 * 4 + 2] =
           param_1[(longlong)puVar55 * 4 + (longlong)puVar48 * 4 + 2];
      (puVar52 + (longlong)puVar48 * 4 + 2)[1] = uVar13;
      puVar52[(longlong)puVar48 * 4] = uVar4;
      (puVar52 + (longlong)puVar48 * 4)[1] = uVar12;
      uVar43 = puVar52[(longlong)puVar48 * 4 + 2];
      if (uVar43 < (ulonglong)puVar52[(longlong)puVar48 * 4 + -2]) {
        uVar4 = puVar52[(longlong)puVar48 * 4 + 3];
        uVar42 = uVar53;
        do {
          uVar45 = uVar42;
          puVar44 = (undefined8 *)((longlong)puVar52 + (uVar45 - 0x20));
          uVar12 = *puVar44;
          uVar13 = puVar44[1];
          puVar44 = (undefined8 *)((longlong)puVar52 + (uVar45 - 0x10));
          uVar14 = puVar44[1];
          puVar56 = (undefined8 *)((longlong)puVar52 + uVar45 + 0x10);
          *puVar56 = *puVar44;
          puVar56[1] = uVar14;
          *(undefined8 *)((longlong)puVar52 + uVar45) = uVar12;
          ((undefined8 *)((longlong)puVar52 + uVar45))[1] = uVar13;
          if (uVar45 == 0x20) {
            puVar44 = puVar52;
            goto LAB_001d7403;
          }
          uVar42 = uVar45 - 0x20;
        } while (uVar43 < *(ulonglong *)((longlong)puVar52 + (uVar45 - 0x30)));
        puVar44 = (undefined8 *)((uVar45 - 0x20) + (longlong)puVar52);
LAB_001d7403:
        uVar12 = (param_1 + (longlong)puVar55 * 4 + (longlong)puVar48 * 4)[1];
        *puVar44 = param_1[(longlong)puVar55 * 4 + (longlong)puVar48 * 4];
        puVar44[1] = uVar12;
        *(ulonglong *)((longlong)puVar52 + (uVar45 - 0x10)) = uVar43;
        *(undefined8 *)((longlong)puVar52 + (uVar45 - 8)) = uVar4;
      }
      puVar48 = (undefined8 *)((longlong)puVar48 + 1);
      uVar53 = uVar53 + 0x20;
    } while (puVar48 != puVar50);
  }
  local_60 = (undefined8 *)((longlong)param_2 * 0x20);
  puVar50 = param_3 + -4 + (longlong)param_2 * 4;
  puVar48 = puVar52 + -4;
  puVar56 = param_1;
  puVar44 = param_1 + (longlong)param_2 * 4;
  do {
    local_38 = puVar55;
    puVar46 = puVar56;
    bVar57 = (ulonglong)puVar52[2] < (ulonglong)param_3[2];
    local_40 = (undefined8 *)CONCAT71(local_40._1_7_,!bVar57);
    local_50 = (undefined8 *)CONCAT71(local_50._1_7_,bVar57);
    puVar55 = puVar52;
    if (!bVar57) {
      puVar55 = param_3;
    }
    uVar4 = *puVar55;
    uVar12 = puVar55[1];
    uVar13 = puVar55[3];
    puVar46[2] = puVar55[2];
    puVar46[3] = uVar13;
    *puVar46 = uVar4;
    puVar46[1] = uVar12;
    uVar53 = puVar50[2];
    uVar43 = puVar48[2];
    puVar55 = puVar48;
    if (uVar53 >= uVar43) {
      puVar55 = puVar50;
    }
    puVar52 = puVar52 + (ulonglong)bVar57 * 4;
    param_3 = param_3 + (ulonglong)!bVar57 * 4;
    uVar58 = *(undefined4 *)puVar55;
    uVar6 = *(undefined4 *)((longlong)puVar55 + 4);
    uVar7 = *(undefined4 *)(puVar55 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar55 + 0xc);
    uVar4 = puVar55[3];
    puVar44[-2] = puVar55[2];
    puVar44[-1] = uVar4;
    *(undefined4 *)(puVar44 + -4) = uVar58;
    *(undefined4 *)((longlong)puVar44 + -0x1c) = uVar6;
    *(undefined4 *)(puVar44 + -3) = uVar7;
    *(undefined4 *)((longlong)puVar44 + -0x14) = uVar8;
    puVar50 = puVar50 + ((ulonglong)(uVar53 < uVar43) - 1) * 4;
    puVar48 = puVar48 + (ulonglong)(uVar53 < uVar43) * -4;
    puVar56 = puVar46 + 4;
    puVar55 = (undefined8 *)((longlong)local_38 + -1);
    puVar44 = puVar44 + -4;
  } while ((undefined8 *)((longlong)local_38 + -1) != (undefined8 *)0x0);
  if (((ulonglong)param_2 & 1) != 0) {
    bVar57 = param_3 < puVar48 + 4;
    puVar55 = puVar52;
    if (bVar57) {
      puVar55 = param_3;
    }
    uVar58 = *(undefined4 *)puVar55;
    uVar6 = *(undefined4 *)((longlong)puVar55 + 4);
    uVar7 = *(undefined4 *)(puVar55 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar55 + 0xc);
    uVar4 = puVar55[3];
    puVar46[6] = puVar55[2];
    puVar46[7] = uVar4;
    *(undefined4 *)(puVar46 + 4) = uVar58;
    *(undefined4 *)((longlong)puVar46 + 0x24) = uVar6;
    *(undefined4 *)(puVar46 + 5) = uVar7;
    *(undefined4 *)((longlong)puVar46 + 0x2c) = uVar8;
    param_3 = param_3 + (ulonglong)bVar57 * 4;
    puVar52 = puVar52 + (ulonglong)!bVar57 * 4;
  }
  local_48 = param_1;
  if ((param_3 == puVar48 + 4) && (puVar52 == puVar50 + 4)) {
    return;
  }
LAB_001d75f0:
  (*(code *)PTR_panic_on_ord_violation_0021a7d8)();
LAB_001d75f6:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_001d6f00:
  if (param_4 < puVar55) goto LAB_001d75f6;
  local_40 = (undefined8 *)((longlong)puVar55 * 0x20);
  puVar52 = param_3 + (longlong)puVar55 * 4;
  puVar56 = (undefined8 *)0x0;
  puVar44 = local_38;
  while( true ) {
    for (; puVar44 < local_38 + (longlong)puVar50 * 4; puVar44 = puVar44 + 4) {
      uVar53 = puVar48[2];
      puVar52 = puVar52 + -4;
      uVar43 = puVar44[2];
      puVar46 = puVar52;
      if (uVar43 <= uVar53) {
        puVar46 = param_3;
      }
      uVar58 = *(undefined4 *)puVar44;
      uVar6 = *(undefined4 *)((longlong)puVar44 + 4);
      uVar7 = *(undefined4 *)(puVar44 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar44 + 0xc);
      uVar4 = puVar44[3];
      puVar46[(longlong)puVar56 * 4 + 2] = puVar44[2];
      (puVar46 + (longlong)puVar56 * 4 + 2)[1] = uVar4;
      puVar46 = puVar46 + (longlong)puVar56 * 4;
      *(undefined4 *)puVar46 = uVar58;
      *(undefined4 *)((longlong)puVar46 + 4) = uVar6;
      *(undefined4 *)(puVar46 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar46 + 0xc) = uVar8;
      puVar56 = (undefined8 *)((longlong)puVar56 + (ulonglong)(uVar43 <= uVar53));
    }
    if (puVar50 == puVar55) break;
    puVar52 = puVar52 + -4;
    uVar58 = *(undefined4 *)puVar44;
    uVar6 = *(undefined4 *)((longlong)puVar44 + 4);
    uVar7 = *(undefined4 *)(puVar44 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar44 + 0xc);
    uVar4 = puVar44[3];
    param_3[(longlong)puVar56 * 4 + 2] = puVar44[2];
    (param_3 + (longlong)puVar56 * 4 + 2)[1] = uVar4;
    puVar50 = param_3 + (longlong)puVar56 * 4;
    *(undefined4 *)puVar50 = uVar58;
    *(undefined4 *)((longlong)puVar50 + 4) = uVar6;
    *(undefined4 *)(puVar50 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar50 + 0xc) = uVar8;
    puVar56 = (undefined8 *)((longlong)puVar56 + 1);
    puVar44 = puVar44 + 4;
    puVar50 = puVar55;
  }
  (*(code *)PTR_memcpy_00219c60)(puVar52,(longlong)puVar56 * 0x20);
  param_2 = (undefined8 *)((longlong)puVar55 - (longlong)puVar56);
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  param_1 = local_38 + (longlong)puVar56 * 4;
  puVar1 = (undefined1 *)((longlong)param_3 + (longlong)local_40);
  if (puVar55 == (undefined8 *)((longlong)puVar56 + 1)) {
    uVar43 = 0;
  }
  else {
    puVar48 = local_38 + (longlong)puVar56 * 4 + 4;
    puVar50 = (undefined8 *)((longlong)local_40 + (longlong)(param_3 + -4));
    uVar53 = 0;
    do {
      uVar4 = *puVar50;
      uVar12 = puVar50[1];
      uVar13 = puVar50[3];
      puVar48[-2] = puVar50[2];
      puVar48[-1] = uVar13;
      puVar48[-4] = uVar4;
      puVar48[-3] = uVar12;
      uVar43 = uVar53 + 2;
      lVar49 = (uVar53 ^ 0x7fffffffffffffe) * 0x20;
      puVar47 = (undefined4 *)(puVar1 + lVar49);
      uVar58 = puVar47[1];
      uVar6 = puVar47[2];
      uVar7 = puVar47[3];
      puVar3 = (undefined4 *)(puVar1 + lVar49 + 0x10);
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      *(undefined4 *)puVar48 = *puVar47;
      *(undefined4 *)((longlong)puVar48 + 4) = uVar58;
      *(undefined4 *)(puVar48 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar48 + 0xc) = uVar7;
      *(undefined4 *)(puVar48 + 2) = uVar8;
      *(undefined4 *)((longlong)puVar48 + 0x14) = uVar9;
      *(undefined4 *)(puVar48 + 3) = uVar10;
      *(undefined4 *)((longlong)puVar48 + 0x1c) = uVar11;
      puVar48 = puVar48 + 8;
      puVar50 = puVar50 + -8;
      uVar53 = uVar43;
    } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar43);
    if (((ulonglong)param_2 & 1) == 0) goto LAB_001d707c;
  }
  puVar47 = (undefined4 *)(puVar1 + ~uVar43 * 0x20);
  uVar58 = *puVar47;
  uVar6 = puVar47[1];
  uVar7 = puVar47[2];
  uVar8 = puVar47[3];
  puVar47 = (undefined4 *)(puVar1 + ~uVar43 * 0x20 + 0x10);
  uVar9 = puVar47[1];
  uVar10 = puVar47[2];
  uVar11 = puVar47[3];
  puVar48 = param_1 + uVar43 * 4 + 2;
  *(undefined4 *)puVar48 = *puVar47;
  *(undefined4 *)((longlong)puVar48 + 4) = uVar9;
  *(undefined4 *)(puVar48 + 1) = uVar10;
  *(undefined4 *)((longlong)puVar48 + 0xc) = uVar11;
  puVar48 = param_1 + uVar43 * 4;
  *(undefined4 *)puVar48 = uVar58;
  *(undefined4 *)((longlong)puVar48 + 4) = uVar6;
  *(undefined4 *)(puVar48 + 1) = uVar7;
  *(undefined4 *)((longlong)puVar48 + 0xc) = uVar8;
LAB_001d707c:
  if (puVar55 < puVar56) {
    uVar58 = (*(code *)PTR_slice_index_fail_00219d80)
                       (&PTR_s__rustc_48a229ceaefd4985c50990b14_002175f0);
    (*(code *)PTR_memcpy_00219c60)(uVar58,local_60);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_58 = 0;
  param_4 = local_68;
  if (param_2 <= &DAT_00000020) goto LAB_001d70c6;
  goto LAB_001d6c50;
}


