// 0008a2b0 <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}>

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
  longlong lVar1;
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
  undefined8 *puVar41;
  ulonglong uVar42;
  undefined8 *puVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  undefined4 *puVar48;
  byte *pbVar49;
  longlong lVar50;
  ulonglong uVar51;
  byte *pbVar52;
  ulonglong uVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  undefined8 *puVar57;
  bool bVar58;
  undefined4 uVar59;
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
LAB_0008a756:
    if (param_2 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) {
      return;
    }
    if (param_2 + 2 <= param_4) {
      puVar56 = (undefined8 *)((ulonglong)param_2 >> 1);
      if (param_2 < &Elf64_Ehdr_00000000.e_ident_abiversion) {
        uVar3 = *param_1;
        uVar11 = param_1[1];
        uVar12 = param_1[3];
        param_3[2] = param_1[2];
        param_3[3] = uVar12;
        *param_3 = uVar3;
        param_3[1] = uVar11;
        uVar3 = param_1[(longlong)puVar56 * 4];
        uVar11 = (param_1 + (longlong)puVar56 * 4)[1];
        uVar12 = (param_1 + (longlong)puVar56 * 4 + 2)[1];
        param_3[(longlong)puVar56 * 4 + 2] = param_1[(longlong)puVar56 * 4 + 2];
        (param_3 + (longlong)puVar56 * 4 + 2)[1] = uVar12;
        param_3[(longlong)puVar56 * 4] = uVar3;
        (param_3 + (longlong)puVar56 * 4)[1] = uVar11;
        pbVar49 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        pbVar52 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
      }
      else {
        uVar44 = (ulonglong)((ulonglong)param_1[5] < (ulonglong)param_1[1]);
        uVar42 = (ulonglong)((ulonglong)param_1[5] >= (ulonglong)param_1[1]);
        local_40 = param_1 + uVar42 * 4;
        uVar45 = (ulonglong)((ulonglong)param_1[0xd] < (ulonglong)param_1[9]);
        puVar55 = param_1 + uVar45 * 4 + 8;
        uVar51 = (ulonglong)(((ulonglong)param_1[0xd] < (ulonglong)param_1[9] ^ 3) << 5);
        uVar53 = *(ulonglong *)((longlong)param_1 + uVar51 + 8);
        puVar41 = local_40;
        if (uVar53 < (ulonglong)param_1[uVar42 * 4 + 1]) {
          puVar41 = puVar55;
        }
        local_50 = param_1 + uVar44 * 4;
        if ((ulonglong)param_1[uVar45 * 4 + 9] < (ulonglong)param_1[uVar44 * 4 + 1]) {
          local_50 = puVar55;
          puVar41 = param_1 + uVar44 * 4;
        }
        puVar46 = (undefined8 *)((longlong)param_1 + uVar51);
        if ((ulonglong)param_1[uVar45 * 4 + 9] < (ulonglong)param_1[uVar44 * 4 + 1]) {
          puVar55 = local_40;
        }
        if (uVar53 < (ulonglong)param_1[uVar42 * 4 + 1]) {
          puVar55 = puVar46;
        }
        else {
          local_40 = puVar46;
        }
        puVar46 = puVar55;
        if ((ulonglong)puVar55[1] < (ulonglong)puVar41[1]) {
          puVar46 = puVar41;
          puVar41 = puVar55;
        }
        uVar42 = (ulonglong)
                 ((ulonglong)param_1[(longlong)puVar56 * 4 + 5] <
                 (ulonglong)param_1[(longlong)puVar56 * 4 + 1]);
        uVar44 = (ulonglong)
                 ((ulonglong)param_1[(longlong)puVar56 * 4 + 5] >=
                 (ulonglong)param_1[(longlong)puVar56 * 4 + 1]);
        puVar55 = param_1 + (longlong)puVar56 * 4 + uVar44 * 4;
        uVar45 = (ulonglong)
                 ((ulonglong)param_1[(longlong)puVar56 * 4 + 0xd] <
                 (ulonglong)param_1[(longlong)puVar56 * 4 + 9]);
        puVar57 = param_1 + (longlong)puVar56 * 4 + uVar45 * 4 + 8;
        uVar51 = (ulonglong)
                 (((ulonglong)param_1[(longlong)puVar56 * 4 + 0xd] <
                   (ulonglong)param_1[(longlong)puVar56 * 4 + 9] ^ 3) << 5);
        uVar53 = *(ulonglong *)((longlong)param_1 + uVar51 + 8 + (longlong)puVar56 * 0x20);
        uVar44 = param_1[(longlong)puVar56 * 4 + uVar44 * 4 + 1];
        puVar43 = puVar55;
        if (uVar53 < uVar44) {
          puVar43 = puVar57;
        }
        puVar54 = puVar57;
        puVar47 = param_1 + (longlong)puVar56 * 4 + uVar42 * 4;
        if ((ulonglong)param_1[(longlong)puVar56 * 4 + uVar45 * 4 + 9] <
            (ulonglong)param_1[(longlong)puVar56 * 4 + uVar42 * 4 + 1]) {
          puVar54 = puVar55;
          puVar47 = puVar57;
          puVar43 = param_1 + (longlong)puVar56 * 4 + uVar42 * 4;
        }
        uVar3 = *local_50;
        uVar11 = local_50[1];
        uVar12 = local_50[3];
        puVar57 = (undefined8 *)((longlong)param_1 + uVar51 + (longlong)puVar56 * 0x20);
        uVar13 = *puVar41;
        uVar14 = puVar41[1];
        if (uVar44 <= uVar53) {
          puVar55 = puVar57;
        }
        uVar15 = puVar41[2];
        uVar16 = puVar41[3];
        if (uVar44 > uVar53) {
          puVar54 = puVar57;
        }
        uVar17 = *puVar46;
        uVar18 = puVar46[1];
        uVar19 = puVar46[2];
        uVar20 = puVar46[3];
        uVar21 = *local_40;
        uVar22 = local_40[1];
        puVar41 = puVar43;
        if ((ulonglong)puVar54[1] < (ulonglong)puVar43[1]) {
          puVar41 = puVar54;
        }
        uVar23 = local_40[2];
        uVar24 = local_40[3];
        if ((ulonglong)puVar54[1] < (ulonglong)puVar43[1]) {
          puVar54 = puVar43;
        }
        uVar25 = *puVar47;
        uVar26 = puVar47[1];
        uVar27 = puVar47[2];
        uVar28 = puVar47[3];
        uVar29 = *puVar41;
        uVar30 = puVar41[1];
        uVar31 = puVar41[2];
        uVar32 = puVar41[3];
        uVar33 = *puVar54;
        uVar34 = puVar54[1];
        uVar35 = puVar54[2];
        uVar36 = puVar54[3];
        uVar37 = *puVar55;
        uVar38 = puVar55[1];
        uVar39 = puVar55[2];
        uVar40 = puVar55[3];
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
        param_3[(longlong)puVar56 * 4 + 2] = uVar27;
        (param_3 + (longlong)puVar56 * 4 + 2)[1] = uVar28;
        param_3[(longlong)puVar56 * 4] = uVar25;
        (param_3 + (longlong)puVar56 * 4)[1] = uVar26;
        param_3[(longlong)puVar56 * 4 + 4] = uVar29;
        (param_3 + (longlong)puVar56 * 4 + 4)[1] = uVar30;
        param_3[(longlong)puVar56 * 4 + 6] = uVar31;
        (param_3 + (longlong)puVar56 * 4 + 6)[1] = uVar32;
        param_3[(longlong)puVar56 * 4 + 8] = uVar33;
        (param_3 + (longlong)puVar56 * 4 + 8)[1] = uVar34;
        param_3[(longlong)puVar56 * 4 + 10] = uVar35;
        (param_3 + (longlong)puVar56 * 4 + 10)[1] = uVar36;
        param_3[(longlong)puVar56 * 4 + 0xc] = uVar37;
        (param_3 + (longlong)puVar56 * 4 + 0xc)[1] = uVar38;
        param_3[(longlong)puVar56 * 4 + 0xe] = uVar39;
        (param_3 + (longlong)puVar56 * 4 + 0xe)[1] = uVar40;
        pbVar49 = &Elf64_Ehdr_00000000.e_ident_class;
        pbVar52 = &Elf64_Ehdr_00000000.e_ident_class;
      }
      if (pbVar52 < puVar56) {
        uVar53 = (ulonglong)(uint)((int)pbVar49 << 5);
        pbVar52 = pbVar49;
        do {
          uVar3 = (param_1 + (longlong)pbVar52 * 4)[1];
          uVar11 = param_1[(longlong)pbVar52 * 4 + 2];
          uVar12 = (param_1 + (longlong)pbVar52 * 4 + 2)[1];
          param_3[(longlong)pbVar52 * 4] = param_1[(longlong)pbVar52 * 4];
          (param_3 + (longlong)pbVar52 * 4)[1] = uVar3;
          param_3[(longlong)pbVar52 * 4 + 2] = uVar11;
          (param_3 + (longlong)pbVar52 * 4 + 2)[1] = uVar12;
          uVar44 = param_3[(longlong)pbVar52 * 4 + 1];
          if (uVar44 < (ulonglong)param_3[(longlong)pbVar52 * 4 + -3]) {
            uVar3 = param_3[(longlong)pbVar52 * 4];
            uVar42 = uVar53;
            do {
              uVar45 = uVar42;
              puVar41 = (undefined8 *)((longlong)param_3 + (uVar45 - 0x20));
              uVar11 = *puVar41;
              uVar12 = puVar41[1];
              puVar41 = (undefined8 *)((longlong)param_3 + (uVar45 - 0x10));
              uVar13 = puVar41[1];
              puVar55 = (undefined8 *)((longlong)param_3 + uVar45 + 0x10);
              *puVar55 = *puVar41;
              puVar55[1] = uVar13;
              *(undefined8 *)((longlong)param_3 + uVar45) = uVar11;
              ((undefined8 *)((longlong)param_3 + uVar45))[1] = uVar12;
              if (uVar45 == 0x20) {
                puVar41 = param_3;
                goto LAB_0008a9e3;
              }
              uVar42 = uVar45 - 0x20;
            } while (uVar44 < *(ulonglong *)((longlong)param_3 + (uVar45 - 0x38)));
            puVar41 = (undefined8 *)((uVar45 - 0x20) + (longlong)param_3);
LAB_0008a9e3:
            *puVar41 = uVar3;
            *(ulonglong *)((longlong)param_3 + (uVar45 - 0x18)) = uVar44;
            uVar3 = param_1[(longlong)pbVar52 * 4 + 3];
            puVar41 = (undefined8 *)((longlong)param_3 + (uVar45 - 0x10));
            *puVar41 = param_1[(longlong)pbVar52 * 4 + 2];
            puVar41[1] = uVar3;
          }
          pbVar52 = pbVar52 + 1;
          uVar53 = uVar53 + 0x20;
        } while (pbVar52 != (byte *)puVar56);
      }
      puVar41 = param_3 + (longlong)puVar56 * 4;
      if (pbVar49 < (undefined8 *)((longlong)param_2 - (longlong)puVar56)) {
        uVar53 = (ulonglong)(uint)((int)pbVar49 << 5);
        do {
          uVar3 = (param_1 + (longlong)puVar56 * 4 + (longlong)pbVar49 * 4)[1];
          uVar11 = param_1[(longlong)puVar56 * 4 + (longlong)pbVar49 * 4 + 2];
          uVar12 = (param_1 + (longlong)puVar56 * 4 + (longlong)pbVar49 * 4 + 2)[1];
          puVar41[(longlong)pbVar49 * 4] = param_1[(longlong)puVar56 * 4 + (longlong)pbVar49 * 4];
          (puVar41 + (longlong)pbVar49 * 4)[1] = uVar3;
          puVar41[(longlong)pbVar49 * 4 + 2] = uVar11;
          (puVar41 + (longlong)pbVar49 * 4 + 2)[1] = uVar12;
          uVar44 = puVar41[(longlong)pbVar49 * 4 + 1];
          if (uVar44 < (ulonglong)puVar41[(longlong)pbVar49 * 4 + -3]) {
            uVar3 = puVar41[(longlong)pbVar49 * 4];
            uVar42 = uVar53;
            do {
              uVar45 = uVar42;
              puVar55 = (undefined8 *)((longlong)puVar41 + (uVar45 - 0x20));
              uVar11 = *puVar55;
              uVar12 = puVar55[1];
              puVar55 = (undefined8 *)((longlong)puVar41 + (uVar45 - 0x10));
              uVar13 = puVar55[1];
              puVar46 = (undefined8 *)((longlong)puVar41 + uVar45 + 0x10);
              *puVar46 = *puVar55;
              puVar46[1] = uVar13;
              *(undefined8 *)((longlong)puVar41 + uVar45) = uVar11;
              ((undefined8 *)((longlong)puVar41 + uVar45))[1] = uVar12;
              if (uVar45 == 0x20) {
                puVar55 = puVar41;
                goto LAB_0008aa93;
              }
              uVar42 = uVar45 - 0x20;
            } while (uVar44 < *(ulonglong *)((longlong)puVar41 + (uVar45 - 0x38)));
            puVar55 = (undefined8 *)((uVar45 - 0x20) + (longlong)puVar41);
LAB_0008aa93:
            *puVar55 = uVar3;
            *(ulonglong *)((longlong)puVar41 + (uVar45 - 0x18)) = uVar44;
            uVar3 = param_1[(longlong)puVar56 * 4 + (longlong)pbVar49 * 4 + 3];
            puVar55 = (undefined8 *)((longlong)puVar41 + (uVar45 - 0x10));
            *puVar55 = param_1[(longlong)puVar56 * 4 + (longlong)pbVar49 * 4 + 2];
            puVar55[1] = uVar3;
          }
          pbVar49 = pbVar49 + 1;
          uVar53 = uVar53 + 0x20;
        } while (pbVar49 != (byte *)((longlong)param_2 - (longlong)puVar56));
      }
      local_60 = (undefined8 *)((longlong)param_2 * 0x20);
      puVar46 = param_3 + -4 + (longlong)param_2 * 4;
      puVar55 = puVar41 + -4;
      puVar57 = param_1;
      puVar43 = param_1 + (longlong)param_2 * 4;
      do {
        local_38 = puVar56;
        puVar47 = puVar57;
        bVar58 = (ulonglong)puVar41[1] < (ulonglong)param_3[1];
        local_40 = (undefined8 *)CONCAT71(local_40._1_7_,!bVar58);
        local_50 = (undefined8 *)CONCAT71(local_50._1_7_,bVar58);
        puVar56 = puVar41;
        if (!bVar58) {
          puVar56 = param_3;
        }
        uVar3 = *puVar56;
        uVar11 = puVar56[1];
        uVar12 = puVar56[3];
        puVar47[2] = puVar56[2];
        puVar47[3] = uVar12;
        *puVar47 = uVar3;
        puVar47[1] = uVar11;
        uVar53 = puVar46[1];
        uVar44 = puVar55[1];
        puVar56 = puVar55;
        if (uVar53 >= uVar44) {
          puVar56 = puVar46;
        }
        puVar41 = puVar41 + (ulonglong)bVar58 * 4;
        param_3 = param_3 + (ulonglong)!bVar58 * 4;
        uVar59 = *(undefined4 *)puVar56;
        uVar5 = *(undefined4 *)((longlong)puVar56 + 4);
        uVar6 = *(undefined4 *)(puVar56 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar56 + 0xc);
        uVar3 = puVar56[3];
        puVar43[-2] = puVar56[2];
        puVar43[-1] = uVar3;
        *(undefined4 *)(puVar43 + -4) = uVar59;
        *(undefined4 *)((longlong)puVar43 + -0x1c) = uVar5;
        *(undefined4 *)(puVar43 + -3) = uVar6;
        *(undefined4 *)((longlong)puVar43 + -0x14) = uVar7;
        puVar46 = puVar46 + ((ulonglong)(uVar53 < uVar44) - 1) * 4;
        puVar55 = puVar55 + (ulonglong)(uVar53 < uVar44) * -4;
        puVar57 = puVar47 + 4;
        puVar56 = (undefined8 *)((longlong)local_38 + -1);
        puVar43 = puVar43 + -4;
      } while ((undefined8 *)((longlong)local_38 + -1) != (undefined8 *)0x0);
      if (((ulonglong)param_2 & 1) != 0) {
        bVar58 = param_3 < puVar55 + 4;
        puVar56 = puVar41;
        if (bVar58) {
          puVar56 = param_3;
        }
        uVar59 = *(undefined4 *)puVar56;
        uVar5 = *(undefined4 *)((longlong)puVar56 + 4);
        uVar6 = *(undefined4 *)(puVar56 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar56 + 0xc);
        uVar3 = puVar56[3];
        puVar47[6] = puVar56[2];
        puVar47[7] = uVar3;
        *(undefined4 *)(puVar47 + 4) = uVar59;
        *(undefined4 *)((longlong)puVar47 + 0x24) = uVar5;
        *(undefined4 *)(puVar47 + 5) = uVar6;
        *(undefined4 *)((longlong)puVar47 + 0x2c) = uVar7;
        param_3 = param_3 + (ulonglong)bVar58 * 4;
        puVar41 = puVar41 + (ulonglong)!bVar58 * 4;
      }
      local_48 = param_1;
      if ((param_3 == puVar55 + 4) && (puVar41 == puVar46 + 4)) {
        return;
      }
LAB_0008ac80:
      (*(code *)PTR_panic_on_ord_violation_000c3fb0)();
    }
LAB_0008ac86:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_68 = param_4;
LAB_0008a2e0:
  local_70 = param_1 + 4;
  puVar56 = param_2;
  param_4 = local_68;
  local_38 = param_1;
  do {
    if (param_5 == 0) {
      drift::sort::
      <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
                (local_38,puVar56,param_3,param_4,1,param_7);
      return;
    }
    puVar41 = local_38 + ((ulonglong)puVar56 >> 3) * 0x10;
    if ((undefined8 *)((longlong)&Elf64_Ehdr_00000000.e_shstrndx + 1) < puVar56) {
      puVar41 = (undefined8 *)
                shared::pivot::median3_rec::
                <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
                          (local_38,puVar41);
    }
    else {
      uVar53 = local_38[1];
      uVar44 = puVar41[1];
      uVar42 = (local_38 + ((ulonglong)puVar56 >> 3) * 0x1c)[1];
      if (uVar44 < uVar42 != uVar53 < uVar44) {
        puVar41 = local_38 + ((ulonglong)puVar56 >> 3) * 0x1c;
      }
      if (uVar53 < uVar42 != uVar53 < uVar44) {
        puVar41 = local_38;
      }
    }
    param_5 = param_5 + -1;
    puVar55 = (undefined8 *)((ulonglong)((longlong)puVar41 - (longlong)local_38) >> 5);
    local_98 = *(undefined4 *)puVar41;
    uStack_94 = *(undefined4 *)((longlong)puVar41 + 4);
    uStack_90 = *(undefined4 *)(puVar41 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar41 + 0xc);
    local_88 = *(undefined4 *)(puVar41 + 2);
    uStack_84 = *(undefined4 *)((longlong)puVar41 + 0x14);
    uStack_80 = *(undefined4 *)(puVar41 + 3);
    uStack_7c = *(undefined4 *)((longlong)puVar41 + 0x1c);
    if (local_58 != 0) {
      if ((ulonglong)puVar41[1] <= *(ulonglong *)(local_58 + 8)) break;
    }
    if (param_4 < puVar56) goto LAB_0008ac86;
    local_50 = (undefined8 *)CONCAT44(local_50._4_4_,param_5);
    puVar46 = param_3 + (longlong)puVar56 * 4;
    param_2 = (undefined8 *)0x0;
    puVar43 = local_38;
    puVar57 = puVar46;
    puVar47 = puVar55;
    while( true ) {
      for (; puVar43 < local_38 + (longlong)puVar47 * 4; puVar43 = puVar43 + 4) {
        uVar53 = puVar43[1];
        puVar57 = puVar57 + -4;
        uVar44 = puVar41[1];
        puVar54 = puVar57;
        if (uVar53 < uVar44) {
          puVar54 = param_3;
        }
        uVar3 = puVar43[3];
        puVar54[(longlong)param_2 * 4 + 2] = puVar43[2];
        (puVar54 + (longlong)param_2 * 4 + 2)[1] = uVar3;
        uVar59 = *(undefined4 *)((longlong)puVar43 + 4);
        uVar5 = *(undefined4 *)(puVar43 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar43 + 0xc);
        puVar54 = puVar54 + (longlong)param_2 * 4;
        *(undefined4 *)puVar54 = *(undefined4 *)puVar43;
        *(undefined4 *)((longlong)puVar54 + 4) = uVar59;
        *(undefined4 *)(puVar54 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar54 + 0xc) = uVar6;
        param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)(uVar53 < uVar44));
      }
      if (puVar47 == puVar56) break;
      uVar59 = *(undefined4 *)puVar43;
      uVar5 = *(undefined4 *)((longlong)puVar43 + 4);
      uVar6 = *(undefined4 *)(puVar43 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar43 + 0xc);
      uVar8 = *(undefined4 *)((longlong)puVar43 + 0x14);
      uVar9 = *(undefined4 *)(puVar43 + 3);
      uVar10 = *(undefined4 *)((longlong)puVar43 + 0x1c);
      puVar47 = puVar57 + (longlong)param_2 * 4 + -2;
      *(undefined4 *)puVar47 = *(undefined4 *)(puVar43 + 2);
      *(undefined4 *)((longlong)puVar47 + 4) = uVar8;
      *(undefined4 *)(puVar47 + 1) = uVar9;
      *(undefined4 *)((longlong)puVar47 + 0xc) = uVar10;
      puVar47 = puVar57 + (longlong)param_2 * 4 + -4;
      *(undefined4 *)puVar47 = uVar59;
      *(undefined4 *)((longlong)puVar47 + 4) = uVar5;
      *(undefined4 *)(puVar47 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar47 + 0xc) = uVar7;
      puVar57 = puVar57 + -4;
      puVar43 = puVar43 + 4;
      puVar47 = puVar56;
    }
    local_40 = (undefined8 *)((longlong)param_2 << 5);
    local_60 = puVar55;
    local_48 = puVar56;
    uVar59 = (*(code *)PTR_memcpy_000c3aa8)();
    param_4 = local_68;
    uVar53 = (longlong)local_48 - (longlong)param_2;
    if (uVar53 != 0) {
      if (local_48 == (undefined8 *)((longlong)param_2 + 1)) {
        uVar42 = 0;
      }
      else {
        puVar48 = (undefined4 *)((longlong)local_40 + (longlong)local_70);
        puVar56 = param_3 + (longlong)puVar56 * 4 + -4;
        uVar44 = 0;
        do {
          uVar3 = *puVar56;
          uVar11 = puVar56[1];
          uVar12 = puVar56[3];
          *(undefined8 *)(puVar48 + -4) = puVar56[2];
          *(undefined8 *)(puVar48 + -2) = uVar12;
          *(undefined8 *)(puVar48 + -8) = uVar3;
          *(undefined8 *)(puVar48 + -6) = uVar11;
          uVar42 = uVar44 + 2;
          puVar55 = puVar46 + (uVar44 ^ 0x7fffffffffffffe) * 4;
          uVar59 = *(undefined4 *)puVar55;
          uVar5 = *(undefined4 *)((longlong)puVar55 + 4);
          uVar6 = *(undefined4 *)(puVar55 + 1);
          uVar7 = *(undefined4 *)((longlong)puVar55 + 0xc);
          uVar3 = puVar46[(uVar44 ^ 0x7fffffffffffffe) * 4 + 2];
          uVar11 = (puVar46 + (uVar44 ^ 0x7fffffffffffffe) * 4 + 2)[1];
          *puVar48 = uVar59;
          puVar48[1] = uVar5;
          puVar48[2] = uVar6;
          puVar48[3] = uVar7;
          *(undefined8 *)(puVar48 + 4) = uVar3;
          *(undefined8 *)(puVar48 + 6) = uVar11;
          puVar48 = puVar48 + 0x10;
          puVar56 = puVar56 + -8;
          uVar44 = uVar42;
        } while ((uVar53 & 0xfffffffffffffffe) != uVar42);
        if ((uVar53 & 1) == 0) goto LAB_0008a53f;
      }
      puVar56 = puVar46 + ~uVar42 * 4;
      uVar59 = *(undefined4 *)puVar56;
      uVar5 = *(undefined4 *)((longlong)puVar56 + 4);
      uVar6 = *(undefined4 *)(puVar56 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar56 + 0xc);
      uVar3 = (puVar46 + ~uVar42 * 4 + 2)[1];
      puVar56 = (undefined8 *)((longlong)local_40 + (longlong)local_38 + 0x10 + uVar42 * 0x20);
      *puVar56 = puVar46[~uVar42 * 4 + 2];
      puVar56[1] = uVar3;
      puVar48 = (undefined4 *)((longlong)local_40 + (longlong)local_38 + uVar42 * 0x20);
      *puVar48 = uVar59;
      puVar48[1] = uVar5;
      puVar48[2] = uVar6;
      puVar48[3] = uVar7;
    }
LAB_0008a53f:
    param_5 = (int)local_50;
    puVar56 = local_48;
    puVar55 = local_60;
    if (param_2 == (undefined8 *)0x0) break;
    if (local_48 < param_2) {
      (*(code *)PTR_panic_fmt_000c3e90)(uVar59,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1630);
      goto LAB_0008ac80;
    }
    (*(code *)
      PTR_<addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>_000c4198
    )(local_68,param_3,(int)local_50,&local_98);
    puVar56 = param_2;
    if (param_2 < (undefined8 *)((longlong)&Elf64_Ehdr_00000000.e_phoff + 1)) {
      param_1 = local_38;
      goto LAB_0008a756;
    }
  } while( true );
  if (param_4 < puVar56) goto LAB_0008ac86;
  local_40 = (undefined8 *)((longlong)puVar56 * 0x20);
  puVar46 = param_3 + (longlong)puVar56 * 4;
  puVar57 = (undefined8 *)0x0;
  puVar43 = local_38;
  while( true ) {
    for (; puVar43 < local_38 + (longlong)puVar55 * 4; puVar43 = puVar43 + 4) {
      uVar53 = puVar41[1];
      puVar46 = puVar46 + -4;
      uVar44 = puVar43[1];
      puVar47 = puVar46;
      if (uVar44 <= uVar53) {
        puVar47 = param_3;
      }
      uVar59 = *(undefined4 *)puVar43;
      uVar5 = *(undefined4 *)((longlong)puVar43 + 4);
      uVar6 = *(undefined4 *)(puVar43 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar43 + 0xc);
      uVar3 = puVar43[3];
      puVar47[(longlong)puVar57 * 4 + 2] = puVar43[2];
      (puVar47 + (longlong)puVar57 * 4 + 2)[1] = uVar3;
      puVar47 = puVar47 + (longlong)puVar57 * 4;
      *(undefined4 *)puVar47 = uVar59;
      *(undefined4 *)((longlong)puVar47 + 4) = uVar5;
      *(undefined4 *)(puVar47 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar47 + 0xc) = uVar7;
      puVar57 = (undefined8 *)((longlong)puVar57 + (ulonglong)(uVar44 <= uVar53));
    }
    if (puVar55 == puVar56) break;
    puVar46 = puVar46 + -4;
    uVar59 = *(undefined4 *)puVar43;
    uVar5 = *(undefined4 *)((longlong)puVar43 + 4);
    uVar6 = *(undefined4 *)(puVar43 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar43 + 0xc);
    uVar3 = puVar43[3];
    param_3[(longlong)puVar57 * 4 + 2] = puVar43[2];
    (param_3 + (longlong)puVar57 * 4 + 2)[1] = uVar3;
    puVar55 = param_3 + (longlong)puVar57 * 4;
    *(undefined4 *)puVar55 = uVar59;
    *(undefined4 *)((longlong)puVar55 + 4) = uVar5;
    *(undefined4 *)(puVar55 + 1) = uVar6;
    *(undefined4 *)((longlong)puVar55 + 0xc) = uVar7;
    puVar57 = (undefined8 *)((longlong)puVar57 + 1);
    puVar43 = puVar43 + 4;
    puVar55 = puVar56;
  }
  (*(code *)PTR_memcpy_000c3aa8)(puVar46,(longlong)puVar57 * 0x20);
  param_2 = (undefined8 *)((longlong)puVar56 - (longlong)puVar57);
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  param_1 = local_38 + (longlong)puVar57 * 4;
  lVar1 = (longlong)param_3 + (longlong)local_40;
  if (puVar56 == (undefined8 *)((longlong)puVar57 + 1)) {
    uVar44 = 0;
  }
  else {
    puVar41 = local_38 + (longlong)puVar57 * 4 + 4;
    puVar55 = (undefined8 *)((longlong)local_40 + (longlong)(param_3 + -4));
    uVar53 = 0;
    do {
      uVar3 = *puVar55;
      uVar11 = puVar55[1];
      uVar12 = puVar55[3];
      puVar41[-2] = puVar55[2];
      puVar41[-1] = uVar12;
      puVar41[-4] = uVar3;
      puVar41[-3] = uVar11;
      uVar44 = uVar53 + 2;
      lVar50 = (uVar53 ^ 0x7fffffffffffffe) * 0x20;
      puVar48 = (undefined4 *)(lVar1 + lVar50);
      uVar59 = puVar48[1];
      uVar5 = puVar48[2];
      uVar6 = puVar48[3];
      puVar2 = (undefined4 *)(lVar1 + 0x10 + lVar50);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      *(undefined4 *)puVar41 = *puVar48;
      *(undefined4 *)((longlong)puVar41 + 4) = uVar59;
      *(undefined4 *)(puVar41 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar41 + 0xc) = uVar6;
      *(undefined4 *)(puVar41 + 2) = uVar7;
      *(undefined4 *)((longlong)puVar41 + 0x14) = uVar8;
      *(undefined4 *)(puVar41 + 3) = uVar9;
      *(undefined4 *)((longlong)puVar41 + 0x1c) = uVar10;
      puVar41 = puVar41 + 8;
      puVar55 = puVar55 + -8;
      uVar53 = uVar44;
    } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar44);
    if (((ulonglong)param_2 & 1) == 0) goto LAB_0008a70c;
  }
  puVar48 = (undefined4 *)(lVar1 + ~uVar44 * 0x20);
  uVar59 = *puVar48;
  uVar5 = puVar48[1];
  uVar6 = puVar48[2];
  uVar7 = puVar48[3];
  puVar48 = (undefined4 *)(lVar1 + 0x10 + ~uVar44 * 0x20);
  uVar8 = puVar48[1];
  uVar9 = puVar48[2];
  uVar10 = puVar48[3];
  puVar41 = param_1 + uVar44 * 4 + 2;
  *(undefined4 *)puVar41 = *puVar48;
  *(undefined4 *)((longlong)puVar41 + 4) = uVar8;
  *(undefined4 *)(puVar41 + 1) = uVar9;
  *(undefined4 *)((longlong)puVar41 + 0xc) = uVar10;
  puVar41 = param_1 + uVar44 * 4;
  *(undefined4 *)puVar41 = uVar59;
  *(undefined4 *)((longlong)puVar41 + 4) = uVar5;
  *(undefined4 *)(puVar41 + 1) = uVar6;
  *(undefined4 *)((longlong)puVar41 + 0xc) = uVar7;
LAB_0008a70c:
  if (puVar56 < puVar57) {
    uVar59 = (*(code *)PTR_slice_index_fail_000c3bb0)
                       (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1648);
    (*(code *)PTR_memcpy_000c3aa8)(uVar59,local_60);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_58 = 0;
  param_4 = local_68;
  if (param_2 <= &Elf64_Ehdr_00000000.e_phoff) goto LAB_0008a756;
  goto LAB_0008a2e0;
}


