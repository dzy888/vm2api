// 000898a0 <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0}>

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
  longlong lVar1;
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
  undefined8 *puVar42;
  ulonglong uVar43;
  undefined8 *puVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined4 *puVar49;
  byte *pbVar50;
  longlong lVar51;
  ulonglong uVar52;
  byte *pbVar53;
  ulonglong uVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  undefined8 *puVar57;
  undefined8 *puVar58;
  bool bVar59;
  undefined4 uVar60;
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
  if (param_2 <= &Elf64_Ehdr_00000000.e_phoff) {
LAB_00089d46:
    if (param_2 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) {
      return;
    }
    if (param_2 + 2 <= param_4) {
      puVar57 = (undefined8 *)((ulonglong)param_2 >> 1);
      if (param_2 < &Elf64_Ehdr_00000000.e_ident_abiversion) {
        uVar4 = *param_1;
        uVar12 = param_1[1];
        uVar13 = param_1[3];
        param_3[2] = param_1[2];
        param_3[3] = uVar13;
        *param_3 = uVar4;
        param_3[1] = uVar12;
        uVar4 = param_1[(longlong)puVar57 * 4];
        uVar12 = (param_1 + (longlong)puVar57 * 4)[1];
        uVar13 = (param_1 + (longlong)puVar57 * 4 + 2)[1];
        param_3[(longlong)puVar57 * 4 + 2] = param_1[(longlong)puVar57 * 4 + 2];
        (param_3 + (longlong)puVar57 * 4 + 2)[1] = uVar13;
        param_3[(longlong)puVar57 * 4] = uVar4;
        (param_3 + (longlong)puVar57 * 4)[1] = uVar12;
        pbVar50 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        pbVar53 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
      }
      else {
        uVar45 = (ulonglong)((ulonglong)param_1[6] < (ulonglong)param_1[2]);
        uVar43 = (ulonglong)((ulonglong)param_1[6] >= (ulonglong)param_1[2]);
        local_40 = param_1 + uVar43 * 4;
        uVar46 = (ulonglong)((ulonglong)param_1[0xe] < (ulonglong)param_1[10]);
        puVar56 = param_1 + uVar46 * 4 + 8;
        uVar52 = (ulonglong)(((ulonglong)param_1[0xe] < (ulonglong)param_1[10] ^ 3) << 5);
        uVar54 = *(ulonglong *)((longlong)param_1 + uVar52 + 0x10);
        puVar42 = local_40;
        if (uVar54 < (ulonglong)param_1[uVar43 * 4 + 2]) {
          puVar42 = puVar56;
        }
        local_50 = param_1 + uVar45 * 4;
        if ((ulonglong)param_1[uVar46 * 4 + 10] < (ulonglong)param_1[uVar45 * 4 + 2]) {
          local_50 = puVar56;
          puVar42 = param_1 + uVar45 * 4;
        }
        puVar47 = (undefined8 *)((longlong)param_1 + uVar52);
        if ((ulonglong)param_1[uVar46 * 4 + 10] < (ulonglong)param_1[uVar45 * 4 + 2]) {
          puVar56 = local_40;
        }
        if (uVar54 < (ulonglong)param_1[uVar43 * 4 + 2]) {
          puVar56 = puVar47;
        }
        else {
          local_40 = puVar47;
        }
        puVar47 = puVar56;
        if ((ulonglong)puVar56[2] < (ulonglong)puVar42[2]) {
          puVar47 = puVar42;
          puVar42 = puVar56;
        }
        uVar43 = (ulonglong)
                 ((ulonglong)param_1[(longlong)puVar57 * 4 + 6] <
                 (ulonglong)param_1[(longlong)puVar57 * 4 + 2]);
        uVar45 = (ulonglong)
                 ((ulonglong)param_1[(longlong)puVar57 * 4 + 6] >=
                 (ulonglong)param_1[(longlong)puVar57 * 4 + 2]);
        puVar56 = param_1 + (longlong)puVar57 * 4 + uVar45 * 4;
        uVar46 = (ulonglong)
                 ((ulonglong)param_1[(longlong)puVar57 * 4 + 0xe] <
                 (ulonglong)param_1[(longlong)puVar57 * 4 + 10]);
        puVar58 = param_1 + (longlong)puVar57 * 4 + uVar46 * 4 + 8;
        uVar52 = (ulonglong)
                 (((ulonglong)param_1[(longlong)puVar57 * 4 + 0xe] <
                   (ulonglong)param_1[(longlong)puVar57 * 4 + 10] ^ 3) << 5);
        uVar54 = *(ulonglong *)((longlong)param_1 + uVar52 + 0x10 + (longlong)puVar57 * 0x20);
        uVar45 = param_1[(longlong)puVar57 * 4 + uVar45 * 4 + 2];
        puVar44 = puVar56;
        if (uVar54 < uVar45) {
          puVar44 = puVar58;
        }
        puVar55 = puVar58;
        puVar48 = param_1 + (longlong)puVar57 * 4 + uVar43 * 4;
        if ((ulonglong)param_1[(longlong)puVar57 * 4 + uVar46 * 4 + 10] <
            (ulonglong)param_1[(longlong)puVar57 * 4 + uVar43 * 4 + 2]) {
          puVar55 = puVar56;
          puVar48 = puVar58;
          puVar44 = param_1 + (longlong)puVar57 * 4 + uVar43 * 4;
        }
        uVar4 = *local_50;
        uVar12 = local_50[1];
        uVar13 = local_50[3];
        puVar58 = (undefined8 *)((longlong)param_1 + uVar52 + (longlong)puVar57 * 0x20);
        uVar14 = *puVar42;
        uVar15 = puVar42[1];
        if (uVar45 <= uVar54) {
          puVar56 = puVar58;
        }
        uVar16 = puVar42[2];
        uVar17 = puVar42[3];
        if (uVar45 > uVar54) {
          puVar55 = puVar58;
        }
        uVar18 = *puVar47;
        uVar19 = puVar47[1];
        uVar20 = puVar47[2];
        uVar21 = puVar47[3];
        uVar22 = *local_40;
        uVar23 = local_40[1];
        puVar42 = puVar44;
        if ((ulonglong)puVar55[2] < (ulonglong)puVar44[2]) {
          puVar42 = puVar55;
        }
        uVar24 = local_40[2];
        uVar25 = local_40[3];
        if ((ulonglong)puVar55[2] < (ulonglong)puVar44[2]) {
          puVar55 = puVar44;
        }
        uVar26 = *puVar48;
        uVar27 = puVar48[1];
        uVar28 = puVar48[2];
        uVar29 = puVar48[3];
        uVar30 = *puVar42;
        uVar31 = puVar42[1];
        uVar32 = puVar42[2];
        uVar33 = puVar42[3];
        uVar34 = *puVar55;
        uVar35 = puVar55[1];
        uVar36 = puVar55[2];
        uVar37 = puVar55[3];
        uVar38 = *puVar56;
        uVar39 = puVar56[1];
        uVar40 = puVar56[2];
        uVar41 = puVar56[3];
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
        param_3[(longlong)puVar57 * 4 + 2] = uVar28;
        (param_3 + (longlong)puVar57 * 4 + 2)[1] = uVar29;
        param_3[(longlong)puVar57 * 4] = uVar26;
        (param_3 + (longlong)puVar57 * 4)[1] = uVar27;
        param_3[(longlong)puVar57 * 4 + 4] = uVar30;
        (param_3 + (longlong)puVar57 * 4 + 4)[1] = uVar31;
        param_3[(longlong)puVar57 * 4 + 6] = uVar32;
        (param_3 + (longlong)puVar57 * 4 + 6)[1] = uVar33;
        param_3[(longlong)puVar57 * 4 + 8] = uVar34;
        (param_3 + (longlong)puVar57 * 4 + 8)[1] = uVar35;
        param_3[(longlong)puVar57 * 4 + 10] = uVar36;
        (param_3 + (longlong)puVar57 * 4 + 10)[1] = uVar37;
        param_3[(longlong)puVar57 * 4 + 0xc] = uVar38;
        (param_3 + (longlong)puVar57 * 4 + 0xc)[1] = uVar39;
        param_3[(longlong)puVar57 * 4 + 0xe] = uVar40;
        (param_3 + (longlong)puVar57 * 4 + 0xe)[1] = uVar41;
        pbVar50 = &Elf64_Ehdr_00000000.e_ident_class;
        pbVar53 = &Elf64_Ehdr_00000000.e_ident_class;
      }
      if (pbVar53 < puVar57) {
        uVar54 = (ulonglong)(uint)((int)pbVar50 << 5);
        pbVar53 = pbVar50;
        do {
          uVar4 = param_1[(longlong)pbVar53 * 4];
          uVar12 = (param_1 + (longlong)pbVar53 * 4)[1];
          uVar13 = (param_1 + (longlong)pbVar53 * 4 + 2)[1];
          param_3[(longlong)pbVar53 * 4 + 2] = param_1[(longlong)pbVar53 * 4 + 2];
          (param_3 + (longlong)pbVar53 * 4 + 2)[1] = uVar13;
          param_3[(longlong)pbVar53 * 4] = uVar4;
          (param_3 + (longlong)pbVar53 * 4)[1] = uVar12;
          uVar45 = param_3[(longlong)pbVar53 * 4 + 2];
          if (uVar45 < (ulonglong)param_3[(longlong)pbVar53 * 4 + -2]) {
            uVar4 = param_3[(longlong)pbVar53 * 4 + 3];
            uVar43 = uVar54;
            do {
              uVar46 = uVar43;
              puVar42 = (undefined8 *)((longlong)param_3 + (uVar46 - 0x20));
              uVar12 = *puVar42;
              uVar13 = puVar42[1];
              puVar42 = (undefined8 *)((longlong)param_3 + (uVar46 - 0x10));
              uVar14 = puVar42[1];
              puVar56 = (undefined8 *)((longlong)param_3 + uVar46 + 0x10);
              *puVar56 = *puVar42;
              puVar56[1] = uVar14;
              *(undefined8 *)((longlong)param_3 + uVar46) = uVar12;
              ((undefined8 *)((longlong)param_3 + uVar46))[1] = uVar13;
              if (uVar46 == 0x20) {
                puVar42 = param_3;
                goto LAB_00089fd3;
              }
              uVar43 = uVar46 - 0x20;
            } while (uVar45 < *(ulonglong *)((longlong)param_3 + (uVar46 - 0x30)));
            puVar42 = (undefined8 *)((uVar46 - 0x20) + (longlong)param_3);
LAB_00089fd3:
            uVar12 = (param_1 + (longlong)pbVar53 * 4)[1];
            *puVar42 = param_1[(longlong)pbVar53 * 4];
            puVar42[1] = uVar12;
            *(ulonglong *)((longlong)param_3 + (uVar46 - 0x10)) = uVar45;
            *(undefined8 *)((longlong)param_3 + (uVar46 - 8)) = uVar4;
          }
          pbVar53 = pbVar53 + 1;
          uVar54 = uVar54 + 0x20;
        } while (pbVar53 != (byte *)puVar57);
      }
      puVar42 = param_3 + (longlong)puVar57 * 4;
      if (pbVar50 < (undefined8 *)((longlong)param_2 - (longlong)puVar57)) {
        uVar54 = (ulonglong)(uint)((int)pbVar50 << 5);
        do {
          uVar4 = param_1[(longlong)puVar57 * 4 + (longlong)pbVar50 * 4];
          uVar12 = (param_1 + (longlong)puVar57 * 4 + (longlong)pbVar50 * 4)[1];
          uVar13 = (param_1 + (longlong)puVar57 * 4 + (longlong)pbVar50 * 4 + 2)[1];
          puVar42[(longlong)pbVar50 * 4 + 2] =
               param_1[(longlong)puVar57 * 4 + (longlong)pbVar50 * 4 + 2];
          (puVar42 + (longlong)pbVar50 * 4 + 2)[1] = uVar13;
          puVar42[(longlong)pbVar50 * 4] = uVar4;
          (puVar42 + (longlong)pbVar50 * 4)[1] = uVar12;
          uVar45 = puVar42[(longlong)pbVar50 * 4 + 2];
          if (uVar45 < (ulonglong)puVar42[(longlong)pbVar50 * 4 + -2]) {
            uVar4 = puVar42[(longlong)pbVar50 * 4 + 3];
            uVar43 = uVar54;
            do {
              uVar46 = uVar43;
              puVar56 = (undefined8 *)((longlong)puVar42 + (uVar46 - 0x20));
              uVar12 = *puVar56;
              uVar13 = puVar56[1];
              puVar56 = (undefined8 *)((longlong)puVar42 + (uVar46 - 0x10));
              uVar14 = puVar56[1];
              puVar47 = (undefined8 *)((longlong)puVar42 + uVar46 + 0x10);
              *puVar47 = *puVar56;
              puVar47[1] = uVar14;
              *(undefined8 *)((longlong)puVar42 + uVar46) = uVar12;
              ((undefined8 *)((longlong)puVar42 + uVar46))[1] = uVar13;
              if (uVar46 == 0x20) {
                puVar56 = puVar42;
                goto LAB_0008a083;
              }
              uVar43 = uVar46 - 0x20;
            } while (uVar45 < *(ulonglong *)((longlong)puVar42 + (uVar46 - 0x30)));
            puVar56 = (undefined8 *)((uVar46 - 0x20) + (longlong)puVar42);
LAB_0008a083:
            uVar12 = (param_1 + (longlong)puVar57 * 4 + (longlong)pbVar50 * 4)[1];
            *puVar56 = param_1[(longlong)puVar57 * 4 + (longlong)pbVar50 * 4];
            puVar56[1] = uVar12;
            *(ulonglong *)((longlong)puVar42 + (uVar46 - 0x10)) = uVar45;
            *(undefined8 *)((longlong)puVar42 + (uVar46 - 8)) = uVar4;
          }
          pbVar50 = pbVar50 + 1;
          uVar54 = uVar54 + 0x20;
        } while (pbVar50 != (byte *)((longlong)param_2 - (longlong)puVar57));
      }
      local_60 = (undefined8 *)((longlong)param_2 * 0x20);
      puVar47 = param_3 + -4 + (longlong)param_2 * 4;
      puVar56 = puVar42 + -4;
      puVar58 = param_1;
      puVar44 = param_1 + (longlong)param_2 * 4;
      do {
        local_38 = puVar57;
        puVar48 = puVar58;
        bVar59 = (ulonglong)puVar42[2] < (ulonglong)param_3[2];
        local_40 = (undefined8 *)CONCAT71(local_40._1_7_,!bVar59);
        local_50 = (undefined8 *)CONCAT71(local_50._1_7_,bVar59);
        puVar57 = puVar42;
        if (!bVar59) {
          puVar57 = param_3;
        }
        uVar4 = *puVar57;
        uVar12 = puVar57[1];
        uVar13 = puVar57[3];
        puVar48[2] = puVar57[2];
        puVar48[3] = uVar13;
        *puVar48 = uVar4;
        puVar48[1] = uVar12;
        uVar54 = puVar47[2];
        uVar45 = puVar56[2];
        puVar57 = puVar56;
        if (uVar54 >= uVar45) {
          puVar57 = puVar47;
        }
        puVar42 = puVar42 + (ulonglong)bVar59 * 4;
        param_3 = param_3 + (ulonglong)!bVar59 * 4;
        uVar60 = *(undefined4 *)puVar57;
        uVar6 = *(undefined4 *)((longlong)puVar57 + 4);
        uVar7 = *(undefined4 *)(puVar57 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar57 + 0xc);
        uVar4 = puVar57[3];
        puVar44[-2] = puVar57[2];
        puVar44[-1] = uVar4;
        *(undefined4 *)(puVar44 + -4) = uVar60;
        *(undefined4 *)((longlong)puVar44 + -0x1c) = uVar6;
        *(undefined4 *)(puVar44 + -3) = uVar7;
        *(undefined4 *)((longlong)puVar44 + -0x14) = uVar8;
        puVar47 = puVar47 + ((ulonglong)(uVar54 < uVar45) - 1) * 4;
        puVar56 = puVar56 + (ulonglong)(uVar54 < uVar45) * -4;
        puVar58 = puVar48 + 4;
        puVar57 = (undefined8 *)((longlong)local_38 + -1);
        puVar44 = puVar44 + -4;
      } while ((undefined8 *)((longlong)local_38 + -1) != (undefined8 *)0x0);
      if (((ulonglong)param_2 & 1) != 0) {
        bVar59 = param_3 < puVar56 + 4;
        puVar57 = puVar42;
        if (bVar59) {
          puVar57 = param_3;
        }
        uVar60 = *(undefined4 *)puVar57;
        uVar6 = *(undefined4 *)((longlong)puVar57 + 4);
        uVar7 = *(undefined4 *)(puVar57 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar57 + 0xc);
        uVar4 = puVar57[3];
        puVar48[6] = puVar57[2];
        puVar48[7] = uVar4;
        *(undefined4 *)(puVar48 + 4) = uVar60;
        *(undefined4 *)((longlong)puVar48 + 0x24) = uVar6;
        *(undefined4 *)(puVar48 + 5) = uVar7;
        *(undefined4 *)((longlong)puVar48 + 0x2c) = uVar8;
        param_3 = param_3 + (ulonglong)bVar59 * 4;
        puVar42 = puVar42 + (ulonglong)!bVar59 * 4;
      }
      local_48 = param_1;
      if ((param_3 == puVar56 + 4) && (puVar42 == puVar47 + 4)) {
        return;
      }
LAB_0008a270:
      (*(code *)PTR_panic_on_ord_violation_000c3fb0)();
    }
LAB_0008a276:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_68 = param_4;
LAB_000898d0:
  local_70 = param_1 + 4;
  puVar57 = param_2;
  param_4 = local_68;
  local_38 = param_1;
  do {
    if (param_5 == 0) {
      drift::sort::
      <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                (local_38,puVar57,param_3,param_4,1,param_7);
      return;
    }
    puVar42 = local_38 + ((ulonglong)puVar57 >> 3) * 0x10;
    if ((undefined8 *)((longlong)&Elf64_Ehdr_00000000.e_shstrndx + 1) < puVar57) {
      puVar42 = (undefined8 *)
                shared::pivot::median3_rec::
                <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
                          (local_38,puVar42);
    }
    else {
      uVar54 = local_38[2];
      uVar45 = puVar42[2];
      uVar43 = (local_38 + ((ulonglong)puVar57 >> 3) * 0x1c)[2];
      if (uVar45 < uVar43 != uVar54 < uVar45) {
        puVar42 = local_38 + ((ulonglong)puVar57 >> 3) * 0x1c;
      }
      if (uVar54 < uVar43 != uVar54 < uVar45) {
        puVar42 = local_38;
      }
    }
    param_5 = param_5 + -1;
    puVar56 = (undefined8 *)((ulonglong)((longlong)puVar42 - (longlong)local_38) >> 5);
    local_98 = *(undefined4 *)puVar42;
    uStack_94 = *(undefined4 *)((longlong)puVar42 + 4);
    uStack_90 = *(undefined4 *)(puVar42 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar42 + 0xc);
    local_88 = *(undefined4 *)(puVar42 + 2);
    uStack_84 = *(undefined4 *)((longlong)puVar42 + 0x14);
    uStack_80 = *(undefined4 *)(puVar42 + 3);
    uStack_7c = *(undefined4 *)((longlong)puVar42 + 0x1c);
    if (local_58 != 0) {
      if ((ulonglong)puVar42[2] <= *(ulonglong *)(local_58 + 0x10)) break;
    }
    if (param_4 < puVar57) goto LAB_0008a276;
    local_50 = (undefined8 *)CONCAT44(local_50._4_4_,param_5);
    puVar47 = param_3 + (longlong)puVar57 * 4;
    param_2 = (undefined8 *)0x0;
    puVar44 = local_38;
    puVar58 = puVar47;
    puVar48 = puVar56;
    while( true ) {
      for (; puVar44 < local_38 + (longlong)puVar48 * 4; puVar44 = puVar44 + 4) {
        uVar54 = puVar44[2];
        puVar58 = puVar58 + -4;
        uVar45 = puVar42[2];
        puVar55 = puVar58;
        if (uVar54 < uVar45) {
          puVar55 = param_3;
        }
        uVar60 = *(undefined4 *)puVar44;
        uVar6 = *(undefined4 *)((longlong)puVar44 + 4);
        uVar7 = *(undefined4 *)(puVar44 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar44 + 0xc);
        uVar9 = *(undefined4 *)((longlong)puVar44 + 0x14);
        uVar10 = *(undefined4 *)(puVar44 + 3);
        uVar11 = *(undefined4 *)((longlong)puVar44 + 0x1c);
        puVar2 = puVar55 + (longlong)param_2 * 4 + 2;
        *(undefined4 *)puVar2 = *(undefined4 *)(puVar44 + 2);
        *(undefined4 *)((longlong)puVar2 + 4) = uVar9;
        *(undefined4 *)(puVar2 + 1) = uVar10;
        *(undefined4 *)((longlong)puVar2 + 0xc) = uVar11;
        puVar55 = puVar55 + (longlong)param_2 * 4;
        *(undefined4 *)puVar55 = uVar60;
        *(undefined4 *)((longlong)puVar55 + 4) = uVar6;
        *(undefined4 *)(puVar55 + 1) = uVar7;
        *(undefined4 *)((longlong)puVar55 + 0xc) = uVar8;
        param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)(uVar54 < uVar45));
      }
      if (puVar48 == puVar57) break;
      uVar60 = *(undefined4 *)puVar44;
      uVar6 = *(undefined4 *)((longlong)puVar44 + 4);
      uVar7 = *(undefined4 *)(puVar44 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar44 + 0xc);
      uVar9 = *(undefined4 *)((longlong)puVar44 + 0x14);
      uVar10 = *(undefined4 *)(puVar44 + 3);
      uVar11 = *(undefined4 *)((longlong)puVar44 + 0x1c);
      puVar48 = puVar58 + (longlong)param_2 * 4 + -2;
      *(undefined4 *)puVar48 = *(undefined4 *)(puVar44 + 2);
      *(undefined4 *)((longlong)puVar48 + 4) = uVar9;
      *(undefined4 *)(puVar48 + 1) = uVar10;
      *(undefined4 *)((longlong)puVar48 + 0xc) = uVar11;
      puVar48 = puVar58 + (longlong)param_2 * 4 + -4;
      *(undefined4 *)puVar48 = uVar60;
      *(undefined4 *)((longlong)puVar48 + 4) = uVar6;
      *(undefined4 *)(puVar48 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar48 + 0xc) = uVar8;
      puVar58 = puVar58 + -4;
      puVar44 = puVar44 + 4;
      puVar48 = puVar57;
    }
    local_40 = (undefined8 *)((longlong)param_2 << 5);
    local_60 = puVar56;
    local_48 = puVar57;
    uVar60 = (*(code *)PTR_memcpy_000c3aa8)();
    param_4 = local_68;
    uVar54 = (longlong)local_48 - (longlong)param_2;
    if (uVar54 != 0) {
      if (local_48 == (undefined8 *)((longlong)param_2 + 1)) {
        uVar43 = 0;
      }
      else {
        puVar49 = (undefined4 *)((longlong)local_40 + (longlong)local_70);
        puVar57 = param_3 + (longlong)puVar57 * 4 + -4;
        uVar45 = 0;
        do {
          uVar4 = *puVar57;
          uVar12 = puVar57[1];
          uVar13 = puVar57[3];
          *(undefined8 *)(puVar49 + -4) = puVar57[2];
          *(undefined8 *)(puVar49 + -2) = uVar13;
          *(undefined8 *)(puVar49 + -8) = uVar4;
          *(undefined8 *)(puVar49 + -6) = uVar12;
          uVar43 = uVar45 + 2;
          puVar56 = puVar47 + (uVar45 ^ 0x7fffffffffffffe) * 4;
          uVar60 = *(undefined4 *)puVar56;
          uVar6 = *(undefined4 *)((longlong)puVar56 + 4);
          uVar7 = *(undefined4 *)(puVar56 + 1);
          uVar8 = *(undefined4 *)((longlong)puVar56 + 0xc);
          uVar4 = puVar47[(uVar45 ^ 0x7fffffffffffffe) * 4 + 2];
          uVar12 = (puVar47 + (uVar45 ^ 0x7fffffffffffffe) * 4 + 2)[1];
          *puVar49 = uVar60;
          puVar49[1] = uVar6;
          puVar49[2] = uVar7;
          puVar49[3] = uVar8;
          *(undefined8 *)(puVar49 + 4) = uVar4;
          *(undefined8 *)(puVar49 + 6) = uVar12;
          puVar49 = puVar49 + 0x10;
          puVar57 = puVar57 + -8;
          uVar45 = uVar43;
        } while ((uVar54 & 0xfffffffffffffffe) != uVar43);
        if ((uVar54 & 1) == 0) goto LAB_00089b2f;
      }
      puVar57 = puVar47 + ~uVar43 * 4;
      uVar60 = *(undefined4 *)puVar57;
      uVar6 = *(undefined4 *)((longlong)puVar57 + 4);
      uVar7 = *(undefined4 *)(puVar57 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar57 + 0xc);
      uVar4 = (puVar47 + ~uVar43 * 4 + 2)[1];
      puVar57 = (undefined8 *)((longlong)local_40 + (longlong)local_38 + 0x10 + uVar43 * 0x20);
      *puVar57 = puVar47[~uVar43 * 4 + 2];
      puVar57[1] = uVar4;
      puVar49 = (undefined4 *)((longlong)local_40 + (longlong)local_38 + uVar43 * 0x20);
      *puVar49 = uVar60;
      puVar49[1] = uVar6;
      puVar49[2] = uVar7;
      puVar49[3] = uVar8;
    }
LAB_00089b2f:
    param_5 = (int)local_50;
    puVar57 = local_48;
    puVar56 = local_60;
    if (param_2 == (undefined8 *)0x0) break;
    if (local_48 < param_2) {
      (*(code *)PTR_panic_fmt_000c3e90)(uVar60,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1630);
      goto LAB_0008a270;
    }
    (*(code *)
      PTR_<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>_000c4190
    )(local_68,param_3,(int)local_50,&local_98);
    puVar57 = param_2;
    if (param_2 < (undefined8 *)((longlong)&Elf64_Ehdr_00000000.e_phoff + 1)) {
      param_1 = local_38;
      goto LAB_00089d46;
    }
  } while( true );
  if (param_4 < puVar57) goto LAB_0008a276;
  local_40 = (undefined8 *)((longlong)puVar57 * 0x20);
  puVar47 = param_3 + (longlong)puVar57 * 4;
  puVar58 = (undefined8 *)0x0;
  puVar44 = local_38;
  while( true ) {
    for (; puVar44 < local_38 + (longlong)puVar56 * 4; puVar44 = puVar44 + 4) {
      uVar54 = puVar42[2];
      puVar47 = puVar47 + -4;
      uVar45 = puVar44[2];
      puVar48 = puVar47;
      if (uVar45 <= uVar54) {
        puVar48 = param_3;
      }
      uVar60 = *(undefined4 *)puVar44;
      uVar6 = *(undefined4 *)((longlong)puVar44 + 4);
      uVar7 = *(undefined4 *)(puVar44 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar44 + 0xc);
      uVar4 = puVar44[3];
      puVar48[(longlong)puVar58 * 4 + 2] = puVar44[2];
      (puVar48 + (longlong)puVar58 * 4 + 2)[1] = uVar4;
      puVar48 = puVar48 + (longlong)puVar58 * 4;
      *(undefined4 *)puVar48 = uVar60;
      *(undefined4 *)((longlong)puVar48 + 4) = uVar6;
      *(undefined4 *)(puVar48 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar48 + 0xc) = uVar8;
      puVar58 = (undefined8 *)((longlong)puVar58 + (ulonglong)(uVar45 <= uVar54));
    }
    if (puVar56 == puVar57) break;
    puVar47 = puVar47 + -4;
    uVar60 = *(undefined4 *)puVar44;
    uVar6 = *(undefined4 *)((longlong)puVar44 + 4);
    uVar7 = *(undefined4 *)(puVar44 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar44 + 0xc);
    uVar4 = puVar44[3];
    param_3[(longlong)puVar58 * 4 + 2] = puVar44[2];
    (param_3 + (longlong)puVar58 * 4 + 2)[1] = uVar4;
    puVar56 = param_3 + (longlong)puVar58 * 4;
    *(undefined4 *)puVar56 = uVar60;
    *(undefined4 *)((longlong)puVar56 + 4) = uVar6;
    *(undefined4 *)(puVar56 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar56 + 0xc) = uVar8;
    puVar58 = (undefined8 *)((longlong)puVar58 + 1);
    puVar44 = puVar44 + 4;
    puVar56 = puVar57;
  }
  (*(code *)PTR_memcpy_000c3aa8)(puVar47,(longlong)puVar58 * 0x20);
  param_2 = (undefined8 *)((longlong)puVar57 - (longlong)puVar58);
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  param_1 = local_38 + (longlong)puVar58 * 4;
  lVar1 = (longlong)param_3 + (longlong)local_40;
  if (puVar57 == (undefined8 *)((longlong)puVar58 + 1)) {
    uVar45 = 0;
  }
  else {
    puVar42 = local_38 + (longlong)puVar58 * 4 + 4;
    puVar56 = (undefined8 *)((longlong)local_40 + (longlong)(param_3 + -4));
    uVar54 = 0;
    do {
      uVar4 = *puVar56;
      uVar12 = puVar56[1];
      uVar13 = puVar56[3];
      puVar42[-2] = puVar56[2];
      puVar42[-1] = uVar13;
      puVar42[-4] = uVar4;
      puVar42[-3] = uVar12;
      uVar45 = uVar54 + 2;
      lVar51 = (uVar54 ^ 0x7fffffffffffffe) * 0x20;
      puVar49 = (undefined4 *)(lVar1 + lVar51);
      uVar60 = puVar49[1];
      uVar6 = puVar49[2];
      uVar7 = puVar49[3];
      puVar3 = (undefined4 *)(lVar1 + 0x10 + lVar51);
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      *(undefined4 *)puVar42 = *puVar49;
      *(undefined4 *)((longlong)puVar42 + 4) = uVar60;
      *(undefined4 *)(puVar42 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar42 + 0xc) = uVar7;
      *(undefined4 *)(puVar42 + 2) = uVar8;
      *(undefined4 *)((longlong)puVar42 + 0x14) = uVar9;
      *(undefined4 *)(puVar42 + 3) = uVar10;
      *(undefined4 *)((longlong)puVar42 + 0x1c) = uVar11;
      puVar42 = puVar42 + 8;
      puVar56 = puVar56 + -8;
      uVar54 = uVar45;
    } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar45);
    if (((ulonglong)param_2 & 1) == 0) goto LAB_00089cfc;
  }
  puVar49 = (undefined4 *)(lVar1 + ~uVar45 * 0x20);
  uVar60 = *puVar49;
  uVar6 = puVar49[1];
  uVar7 = puVar49[2];
  uVar8 = puVar49[3];
  puVar49 = (undefined4 *)(lVar1 + 0x10 + ~uVar45 * 0x20);
  uVar9 = puVar49[1];
  uVar10 = puVar49[2];
  uVar11 = puVar49[3];
  puVar42 = param_1 + uVar45 * 4 + 2;
  *(undefined4 *)puVar42 = *puVar49;
  *(undefined4 *)((longlong)puVar42 + 4) = uVar9;
  *(undefined4 *)(puVar42 + 1) = uVar10;
  *(undefined4 *)((longlong)puVar42 + 0xc) = uVar11;
  puVar42 = param_1 + uVar45 * 4;
  *(undefined4 *)puVar42 = uVar60;
  *(undefined4 *)((longlong)puVar42 + 4) = uVar6;
  *(undefined4 *)(puVar42 + 1) = uVar7;
  *(undefined4 *)((longlong)puVar42 + 0xc) = uVar8;
LAB_00089cfc:
  if (puVar57 < puVar58) {
    uVar60 = (*(code *)PTR_slice_index_fail_000c3bb0)
                       (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1648);
    (*(code *)PTR_memcpy_000c3aa8)(uVar60,local_60);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_58 = 0;
  param_4 = local_68;
  if (param_2 <= &Elf64_Ehdr_00000000.e_phoff) goto LAB_00089d46;
  goto LAB_000898d0;
}


