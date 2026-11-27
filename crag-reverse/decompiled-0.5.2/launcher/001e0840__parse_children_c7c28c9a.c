// 001e0840 parse_children

/* <addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse_children
    */

void __rustcall
<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::parse_children(ulonglong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint *puVar10;
  byte *pbVar11;
  undefined1 uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte *pbVar21;
  longlong lVar22;
  longlong lVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint *puVar26;
  bool bVar27;
  uint *local_178;
  longlong local_170;
  longlong local_168;
  uint *local_160;
  int local_150 [2];
  ulonglong local_148;
  uint *local_140;
  longlong local_138;
  uint *local_130;
  undefined8 local_128;
  undefined8 local_120;
  uint *local_118;
  undefined8 local_110;
  undefined8 local_108;
  uint *local_100;
  char local_f8;
  undefined1 uStack_f7;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  byte bStack_f0;
  undefined1 uStack_ef;
  undefined2 uStack_ee;
  int iStack_ec;
  uint *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  uint local_c8;
  undefined1 local_c4;
  longlong local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  uint *local_a8;
  ulonglong local_a0;
  uint *local_98;
  uint *local_90;
  uint local_88;
  uint local_84;
  longlong local_80;
  undefined8 local_78;
  uint *puStack_70;
  uint local_64;
  ulonglong local_60;
  uint *local_58;
  ulonglong *local_50;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  
  local_c0 = param_2[10];
  if (param_3 < local_c0) {
    pbVar11 = (byte *)param_2[6];
    lVar19 = param_2[8];
    pbVar25 = pbVar11 + (((ulonglong)(*(char *)(lVar19 + 0x49) == '\b') * 8 +
                         *(longlong *)(lVar19 + 0x38)) -
                        (*(longlong *)(lVar19 + 0x30) + *(longlong *)(lVar19 + 0x28)));
    local_138 = param_4;
    do {
      lVar8 = param_2[7];
      uVar12 = 0x13;
      if (lVar8 == 0) {
LAB_001e1949:
        *(undefined1 *)param_1 = uVar12;
        *(undefined1 *)((longlong)param_1 + 1) = 0;
        *(undefined2 *)((longlong)param_1 + 6) = 0;
        *(undefined4 *)((longlong)param_1 + 2) = 0;
        param_1[1] = (ulonglong)pbVar11;
        return;
      }
      lVar22 = 1 - lVar8;
      pbVar18 = (byte *)0x0;
      iVar13 = 0;
      pbVar21 = pbVar11;
      while( true ) {
        pbVar24 = pbVar21 + 1;
        bVar2 = *pbVar21;
        if ((iVar13 == 0x3f) && (1 < bVar2)) {
          param_2[6] = (longlong)pbVar24;
          param_2[7] = -lVar22;
          uVar12 = 6;
          goto LAB_001e1949;
        }
        pbVar18 = (byte *)((ulonglong)pbVar18 | (ulonglong)(bVar2 & 0x7f) << ((byte)iVar13 & 0x3f));
        if (-1 < (char)bVar2) break;
        iVar13 = iVar13 + 7;
        lVar22 = lVar22 + 1;
        pbVar21 = pbVar24;
        if (lVar22 == 1) {
          param_2[6] = (longlong)(pbVar11 + lVar8);
          param_2[7] = 0;
          pbVar11 = pbVar11 + lVar8;
          goto LAB_001e1949;
        }
      }
      param_2[6] = (longlong)pbVar24;
      param_2[7] = -lVar22;
      if (pbVar18 != (byte *)0x0) {
        lVar8 = param_2[9];
        if (pbVar18 + -1 < *(byte **)(lVar8 + 0x10)) {
          lVar8 = (longlong)(pbVar18 + -1) * 0x70 + *(longlong *)(lVar8 + 8);
          cVar6 = *(char *)(lVar8 + 0x6a);
        }
        else {
          lVar22 = *(longlong *)(lVar8 + 0x18);
          if (lVar22 == 0) {
LAB_001e19ad:
            uVar12 = 0x12;
            pbVar11 = pbVar18;
            goto LAB_001e1949;
          }
          lVar8 = *(longlong *)(lVar8 + 0x20);
          while( true ) {
            uVar16 = (ulonglong)*(ushort *)(lVar22 + 0x532);
            uVar17 = 0xffffffffffffffff;
            lVar23 = 0;
            do {
              if (uVar16 * 0x70 + lVar23 == 0) goto LAB_001e0bb3;
              pbVar11 = *(byte **)(lVar22 + 0x4e0 + uVar17 * 8);
              lVar23 = lVar23 + -0x70;
              uVar17 = uVar17 + 1;
            } while ((char)((pbVar11 < pbVar18) - (pbVar18 < pbVar11)) == '\x01');
            uVar16 = uVar17;
            if (pbVar11 < pbVar18 == pbVar18 < pbVar11) break;
LAB_001e0bb3:
            bVar27 = lVar8 == 0;
            lVar8 = lVar8 + -1;
            if (bVar27) goto LAB_001e19ad;
            lVar22 = *(longlong *)(lVar22 + 0x538 + uVar16 * 8);
          }
          lVar8 = (lVar22 - lVar23) + -0x70;
          cVar6 = *(char *)((lVar22 - lVar23) + -6);
        }
        if (cVar6 == '\x01') {
          param_2[10] = local_c0 + 1;
        }
        local_50 = param_1;
        if (*(short *)(lVar8 + 0x68) != 0x1d) {
          if (*(short *)(lVar8 + 0x68) == 0x2e) {
            (*(code *)PTR_deref_0021a6a0)();
            gimli[a7f20a324fd82d99]::read::unit::skip_attributes::
            <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                      (&local_f8,param_2 + 6,*(undefined4 *)(lVar19 + 0x48));
            if (local_f8 != -1) {
LAB_001e19b5:
              uVar16 = (ulonglong)CONCAT42(uStack_f4,uStack_f6);
              pbVar11 = (byte *)CONCAT44(iStack_ec,CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0))
                                        );
LAB_001e1997:
              *(char *)local_50 = local_f8;
              *(undefined1 *)((longlong)local_50 + 1) = uStack_f7;
              *(int *)((longlong)local_50 + 2) = (int)uVar16;
              *(short *)((longlong)local_50 + 6) = (short)(uVar16 >> 0x20);
              local_50[1] = (ulonglong)pbVar11;
              return;
            }
            lVar19 = param_2[10];
            param_1 = local_50;
            if (local_c0 < lVar19) {
              do {
                pbVar11 = (byte *)param_2[6];
                lVar8 = param_2[7];
                iVar13 = 0;
                cVar6 = '\x13';
                if (lVar8 == 0) {
LAB_001e1995:
                  local_f8 = cVar6;
                  uVar16 = 0;
                  uStack_f7 = 0;
                  local_50 = param_1;
                  goto LAB_001e1997;
                }
                lVar22 = 1 - lVar8;
                pbVar21 = (byte *)0x0;
                pbVar25 = pbVar11;
                while( true ) {
                  pbVar18 = pbVar25 + 1;
                  bVar2 = *pbVar25;
                  if ((iVar13 == 0x3f) && (1 < bVar2)) {
                    param_2[6] = (longlong)pbVar18;
                    param_2[7] = -lVar22;
                    cVar6 = '\x06';
                    goto LAB_001e1995;
                  }
                  pbVar21 = (byte *)((ulonglong)pbVar21 |
                                    (ulonglong)(bVar2 & 0x7f) << ((byte)iVar13 & 0x3f));
                  if (-1 < (char)bVar2) break;
                  iVar13 = iVar13 + 7;
                  lVar22 = lVar22 + 1;
                  pbVar25 = pbVar18;
                  if (lVar22 == 1) {
                    param_2[6] = (longlong)(pbVar11 + lVar8);
                    param_2[7] = 0;
                    pbVar11 = pbVar11 + lVar8;
                    goto LAB_001e1995;
                  }
                }
                param_2[6] = (longlong)pbVar18;
                param_2[7] = -lVar22;
                if (pbVar21 == (byte *)0x0) {
                  lVar19 = lVar19 + -1;
                  param_2[10] = lVar19;
                }
                else {
                  lVar8 = param_2[9];
                  if (pbVar21 + -1 < *(byte **)(lVar8 + 0x10)) {
                    lVar8 = (longlong)(pbVar21 + -1) * 0x70 + *(longlong *)(lVar8 + 8);
                  }
                  else {
                    lVar22 = *(longlong *)(lVar8 + 0x18);
                    if (lVar22 == 0) {
LAB_001e19f0:
                      pbVar11 = pbVar21;
                      cVar6 = '\x12';
                      goto LAB_001e1995;
                    }
                    lVar8 = *(longlong *)(lVar8 + 0x20);
                    while( true ) {
                      uVar16 = (ulonglong)*(ushort *)(lVar22 + 0x532);
                      uVar17 = 0xffffffffffffffff;
                      lVar23 = 0;
                      do {
                        if (uVar16 * 0x70 + lVar23 == 0) goto LAB_001e0abf;
                        pbVar11 = *(byte **)(lVar22 + 0x4e0 + uVar17 * 8);
                        lVar23 = lVar23 + -0x70;
                        uVar17 = uVar17 + 1;
                      } while ((char)((pbVar11 < pbVar21) - (pbVar21 < pbVar11)) == '\x01');
                      uVar16 = uVar17;
                      if (pbVar11 < pbVar21 == pbVar21 < pbVar11) break;
LAB_001e0abf:
                      bVar27 = lVar8 == 0;
                      lVar8 = lVar8 + -1;
                      if (bVar27) goto LAB_001e19f0;
                      lVar22 = *(longlong *)(lVar22 + 0x538 + uVar16 * 8);
                    }
                    lVar8 = (lVar22 - lVar23) + -0x70;
                  }
                  if (*(char *)(lVar8 + 0x6a) == '\x01') {
                    param_2[10] = lVar19 + 1;
                  }
                  (*(code *)PTR_deref_0021a6a0)();
                  gimli[a7f20a324fd82d99]::read::unit::skip_attributes::
                  <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                            (&local_f8,param_2 + 6,*(undefined4 *)(param_2[8] + 0x48));
                  if (local_f8 != -1) goto LAB_001e19b5;
                  lVar19 = param_2[10];
                  param_1 = local_50;
                }
              } while (local_c0 < lVar19);
            }
          }
          else {
            lVar19 = param_3;
            uVar9 = (*(code *)PTR_deref_0021a6a0)();
            gimli[a7f20a324fd82d99]::read::unit::skip_attributes::
            <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                      (&local_f8,param_2 + 6,*(undefined4 *)(param_2[8] + 0x48),uVar9,lVar19);
            if (local_f8 != -1) {
              *local_50 = CONCAT44(uStack_f4,CONCAT22(uStack_f6,CONCAT11(uStack_f7,local_f8)));
              local_50[1] = CONCAT44(iStack_ec,CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0)));
              return;
            }
            param_1 = local_50;
          }
          goto LAB_001e17c4;
        }
        lVar19 = param_2[0xb];
        lVar8 = param_2[0xc];
        local_80 = param_3;
        lVar22 = (*(code *)PTR_deref_0021a6a0)();
        if (param_3 == 0) {
          local_110 = 0;
          local_108 = 0;
          local_120 = 0;
          local_64 = 0;
          local_128 = 0;
          local_88 = 0;
          local_84 = 0;
          local_a0 = 0;
LAB_001e0cf2:
          lVar22 = param_2[2];
          if (lVar22 == *param_2) {
            (*(code *)PTR_grow_one_0021a700)();
          }
          lVar23 = param_2[1];
          lVar14 = lVar22 * 0x30;
          *(undefined8 *)(lVar23 + lVar14) = local_128;
          *(longlong *)(lVar23 + 8 + lVar14) = local_170;
          *(byte **)(lVar23 + 0x10 + lVar14) = pbVar25 + 4;
          *(ulonglong *)(lVar23 + 0x18 + lVar14) = local_a0;
          *(uint **)(lVar23 + 0x20 + lVar14) = local_130;
          *(uint *)(lVar23 + 0x28 + lVar14) = local_84;
          *(uint *)(lVar23 + 0x2c + lVar14) = local_88;
          param_2[2] = lVar22 + 1;
          if ((local_64 & 1) == 0) {
            if (((byte)local_108 & (byte)local_110 & 1) == 0) {
              if ((((byte)local_110 & (byte)local_120 & 1) != 0) &&
                 (puVar10 = (uint *)(local_168 + (longlong)local_100), local_100 < puVar10)) {
                lVar19 = param_2[5];
                if (lVar19 == param_2[3]) {
                  (*(code *)PTR_grow_one_0021a6d0)();
                }
                lVar8 = param_2[4];
                lVar23 = lVar19 * 0x20;
                *(uint **)(lVar8 + lVar23) = local_100;
                *(uint **)(lVar8 + 8 + lVar23) = puVar10;
                *(longlong *)(lVar8 + 0x10 + lVar23) = local_138;
                *(longlong *)(lVar8 + 0x18 + lVar23) = lVar22;
                param_2[5] = lVar19 + 1;
              }
            }
            else if (local_100 < local_118) {
              lVar19 = param_2[5];
              if (lVar19 == param_2[3]) {
                (*(code *)PTR_grow_one_0021a6d0)();
              }
              lVar8 = param_2[4];
              lVar23 = lVar19 * 0x20;
              *(uint **)(lVar8 + lVar23) = local_100;
              *(uint **)(lVar8 + 8 + lVar23) = local_118;
              *(longlong *)(lVar8 + 0x10 + lVar23) = local_138;
              *(longlong *)(lVar8 + 0x18 + lVar23) = lVar22;
              param_2[5] = lVar19 + 1;
            }
LAB_001e176c:
            parse_children(&local_78,param_2,local_c0,param_4 + 1);
          }
          else {
            uVar7 = *(uint *)(lVar8 + 0x48);
            lVar23 = (ulonglong)(0x4ffff < uVar7) * 0x10;
            puVar10 = *(uint **)(lVar19 + 0xd0 + lVar23);
            puVar26 = *(uint **)(lVar19 + 0xd8 + lVar23);
            if (local_178 <= puVar26) {
              local_d8 = (longlong)puVar10 + (longlong)local_178;
              local_c4 = 0x4ffff < uVar7;
              uVar4 = *(undefined4 *)(lVar19 + 0x10);
              uStack_f4 = *(undefined4 *)(lVar19 + 0x14);
              uVar5 = *(undefined4 *)(lVar19 + 0x18);
              iStack_ec = *(int *)(lVar19 + 0x1c);
              local_e8 = *(uint **)(lVar8 + 0x198);
              local_e0 = *(undefined8 *)(lVar8 + 0x1a8);
              local_f8 = (char)uVar4;
              uStack_f7 = (undefined1)((uint)uVar4 >> 8);
              uStack_f6 = (undefined2)((uint)uVar4 >> 0x10);
              bStack_f0 = (byte)uVar5;
              uStack_ef = (undefined1)((uint)uVar5 >> 8);
              uStack_ee = (undefined2)((uint)uVar5 >> 0x10);
              local_d0 = (longlong)puVar26 - (longlong)local_178;
              local_c8 = uVar7;
              while( true ) {
                <gimli[a7f20a324fd82d99]::read::rnglists::RngListIter<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
                ::next(&local_b8,&local_f8);
                puVar10 = local_a8;
                if (CONCAT44(iStack_b4,local_b8) == 0) break;
                puVar26 = (uint *)CONCAT44(iStack_ac,iStack_b0);
                if (local_b8 == 2) {
                  if ((char)iStack_b0 != -1) {
                    uVar12 = (undefined1)((uint)iStack_b0 >> 8);
                    uVar16 = (ulonglong)puVar26 >> 0x10;
                    puStack_70 = local_a8;
                    goto LAB_001e1754;
                  }
                  break;
                }
                if (puVar26 < local_a8) {
                  lVar19 = param_2[5];
                  if (lVar19 == param_2[3]) {
                    (*(code *)PTR_grow_one_0021a6d0)();
                  }
                  lVar8 = param_2[4];
                  lVar23 = lVar19 * 0x20;
                  *(uint **)(lVar8 + lVar23) = puVar26;
                  *(uint **)(lVar8 + 8 + lVar23) = puVar10;
                  *(longlong *)(lVar8 + 0x10 + lVar23) = local_138;
                  *(longlong *)(lVar8 + 0x18 + lVar23) = lVar22;
                  param_2[5] = lVar19 + 1;
                }
              }
              goto LAB_001e176c;
            }
            puVar26 = (uint *)0x13;
            uVar16 = 0;
            uVar12 = 0;
            puStack_70 = puVar10;
LAB_001e1754:
            local_78 = CONCAT26((short)(uVar16 >> 0x20),
                                CONCAT42((int)uVar16,CONCAT11(uVar12,(char)puVar26)));
          }
LAB_001e1795:
          puVar10 = puStack_70;
          uVar16 = local_78;
          param_3 = local_80;
          param_1 = local_50;
          cVar6 = (char)local_78;
joined_r0x001e18c3:
          local_78 = uVar16;
          puStack_70 = puVar10;
          if (cVar6 != -1) {
            *param_1 = local_78;
            param_1[1] = (ulonglong)puStack_70;
            return;
          }
          local_80 = param_3;
          goto LAB_001e17c4;
        }
        local_40 = param_3 << 4;
        local_a0 = 0;
        lVar23 = 0;
        local_84 = 0;
        local_88 = 0;
        local_128 = 0;
        local_64 = 0;
        local_120 = 0;
        local_108 = 0;
        local_110 = 0;
LAB_001e0e3d:
        piVar1 = (int *)(lVar22 + lVar23);
        local_b8 = *piVar1;
        iStack_b4 = piVar1[1];
        iStack_b0 = piVar1[2];
        iStack_ac = piVar1[3];
        local_38 = lVar23;
        gimli[a7f20a324fd82d99]::read::unit::parse_attribute::
        <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                  (&local_f8,param_2 + 6,*(undefined4 *)(param_2[8] + 0x48),&local_b8);
        lVar23 = CONCAT44(uStack_f4,CONCAT22(uStack_f6,CONCAT11(uStack_f7,local_f8)));
        if (lVar23 == -1) {
          local_78 = CONCAT44(iStack_ec,CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0)));
          puStack_70 = local_e8;
          goto LAB_001e1795;
        }
        switch((short)local_e0) {
        case 3:
          if (local_a0 == 0) {
            <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            ::value(&local_b8,&local_f8);
            <gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            ::attr_string(local_150,lVar19,*(undefined1 *)(lVar8 + 0x49),
                          *(undefined8 *)(lVar8 + 0x1a0),&local_b8);
            if ((char)local_150[0] == '\0') {
              local_a0 = local_148;
              local_160 = local_140;
            }
            else {
              local_a0 = 0;
            }
            local_130 = local_160;
          }
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x56:
          goto switchD_001e0e9d_caseD_4;
        case 0x11:
          <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::value(&local_b8,&local_f8);
          if (CONCAT44(iStack_b4,local_b8) == 0) {
            local_110 = 1;
            puVar10 = (uint *)CONCAT44(iStack_ac,iStack_b0);
          }
          else if (local_b8 == 0xc) {
            uVar16 = *(ulonglong *)(lVar8 + 0x1a8);
            uVar17 = *(ulonglong *)(lVar19 + 0x18) - uVar16;
            puVar10 = *(uint **)(lVar19 + 0x10);
            if (*(ulonglong *)(lVar19 + 0x18) < uVar16) {
LAB_001e10ac:
              local_58 = puVar10;
              local_48 = local_48 & 0xffffffffffffff00 | 0x13;
            }
            else {
              bVar2 = *(byte *)(lVar8 + 0x48);
              puVar10 = (uint *)((longlong)*(uint **)(lVar19 + 0x10) + uVar16);
              if (uVar17 < CONCAT44(iStack_ac,iStack_b0) * (ulonglong)bVar2) goto LAB_001e10ac;
              uVar7 = (uint)bVar2;
              if ((byte)(bVar2 - 1) < (byte)(bVar2 ^ bVar2 - 1)) {
                uVar3 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                if ((byte)uVar3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x001e1481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)((longlong)&DAT_0012d3ac + (longlong)(int)(&DAT_0012d3ac)[uVar3]))
                            (uVar17,(code *)((longlong)&DAT_0012d3ac +
                                            (longlong)(int)(&DAT_0012d3ac)[uVar3]));
                  return;
                }
              }
              local_48 = (local_48 & 0xffffffffffff0000) + (ulonglong)bVar2 * 0x100 + 0x19;
            }
            local_110 = CONCAT71((int7)(uVar17 >> 8),1);
            puVar10 = local_58;
            uVar16 = local_48;
            param_3 = local_80;
            param_1 = local_50;
            cVar6 = (char)local_48;
            if ((char)local_48 != -1) goto joined_r0x001e18c3;
          }
          else {
            puVar10 = local_100;
          }
          local_100 = puVar10;
          break;
        case 0x12:
          <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::value(&local_b8,&local_f8);
          if (CONCAT44(iStack_b4,local_b8) == 0) {
            local_108 = 1;
            local_118 = (uint *)CONCAT44(iStack_ac,iStack_b0);
            goto switchD_001e0e9d_caseD_4;
          }
          if (local_b8 == 7) {
            local_120 = CONCAT71((int7)((ulonglong)CONCAT44(iStack_b4,local_b8) >> 8),1);
            local_168 = CONCAT44(iStack_ac,iStack_b0);
            break;
          }
          if (local_b8 != 0xc) break;
          uVar16 = *(ulonglong *)(lVar8 + 0x1a8);
          puVar10 = *(uint **)(lVar19 + 0x10);
          uVar17 = *(ulonglong *)(lVar19 + 0x18) - uVar16;
          if (*(ulonglong *)(lVar19 + 0x18) < uVar16) {
            local_60 = local_60 & 0xffffffffffffff00 | 0x13;
            local_90 = puVar10;
          }
          else {
            bVar2 = *(byte *)(lVar8 + 0x48);
            puVar10 = (uint *)((longlong)puVar10 + uVar16);
            uVar16 = CONCAT44(iStack_ac,iStack_b0) * (ulonglong)bVar2;
            if (uVar17 < uVar16) {
              local_60 = local_60 & 0xffffffffffffff00 | 0x13;
              local_90 = puVar10;
            }
            else {
              uVar7 = (uint)bVar2;
              if ((byte)(bVar2 - 1) < (byte)(bVar2 ^ bVar2 - 1)) {
                uVar3 = 0;
                for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar3 = uVar3 + 1;
                }
                if ((byte)uVar3 < 4) {
                    /* WARNING: Could not recover jumptable at 0x001e14bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)((longlong)&DAT_0012d39c + (longlong)(int)(&DAT_0012d39c)[uVar3]))
                            (uVar17,local_80,uVar16,uVar17 - uVar16);
                  return;
                }
              }
              local_60 = (local_60 & 0xffffffffffff0000) + (ulonglong)bVar2 * 0x100 + 0x19;
            }
          }
          local_108 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
          cVar6 = (char)local_60;
          puVar10 = local_90;
          uVar16 = local_60;
          param_3 = local_80;
          param_1 = local_50;
          if (cVar6 == -1) {
            local_118 = local_90;
            goto LAB_001e1374;
          }
          goto joined_r0x001e18c3;
        case 0x31:
        case 0x47:
          if (local_a0 != 0) goto switchD_001e0e9d_caseD_4;
          <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::value(&local_b8,&local_f8);
          addr2line[f7adfda4b3430143]::function::name_attr::
          <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                    (local_150,CONCAT44(iStack_b4,local_b8),CONCAT44(iStack_ac,iStack_b0),
                     (int)param_2[0xe],lVar19,lVar8,param_2[0xd],0x10);
          local_a0 = local_148;
          if (local_150[0] == 1) {
            local_78 = local_148;
            puStack_70 = local_140;
            goto LAB_001e1795;
          }
          local_130 = local_140;
          goto switchD_001e0e9d_caseD_4;
        case 0x55:
          <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::value(&local_b8,&local_f8);
          if (CONCAT44(iStack_b4,local_b8) == 0x18) {
            uVar16 = *(ulonglong *)(lVar8 + 0x1b8);
            local_98 = *(uint **)(lVar19 + 0xe0);
            uVar17 = *(ulonglong *)(lVar19 + 0xe8) - uVar16;
            if (uVar16 <= *(ulonglong *)(lVar19 + 0xe8)) {
              local_98 = (uint *)((longlong)local_98 + uVar16);
              uVar15 = CONCAT44(iStack_ac,iStack_b0) *
                       (ulonglong)(*(uint *)(lVar8 + 0x48) >> 8 & 0xff);
              uVar20 = uVar17 - uVar15;
              if (uVar15 <= uVar17) {
                local_98 = (uint *)((longlong)local_98 + uVar15);
                uVar7 = *(uint *)(lVar8 + 0x48) & 0xff00;
                uVar17 = (ulonglong)uVar7;
                if (uVar7 == 0x800) {
                  if (7 < uVar20) {
                    uVar17 = (ulonglong)*(byte *)((longlong)local_98 + 7);
                    uVar15 = ((ulonglong)*local_98 << 8 | (ulonglong)(uint3)local_98[1] << 0x28) >>
                             8 | uVar17 << 0x38;
                    goto LAB_001e1389;
                  }
                }
                else if (3 < uVar20) {
                  uVar15 = (ulonglong)*local_98;
LAB_001e1389:
                  local_98 = (uint *)(uVar15 + uVar16);
                  local_64 = (uint)CONCAT71((int7)(uVar17 >> 8),1);
                  goto LAB_001e1395;
                }
              }
            }
            local_78 = 0x13;
            puStack_70 = local_98;
            goto LAB_001e1795;
          }
          if (local_b8 == 0x16) {
            lVar23 = 0;
            if (*(ushort *)(lVar8 + 0x4a) < 5) {
              lVar23 = *(longlong *)(lVar8 + 0x1b8);
            }
            if (*(char *)(lVar19 + 0x110) == '\0') {
              lVar23 = 0;
            }
            local_98 = (uint *)(lVar23 + CONCAT44(iStack_ac,iStack_b0));
            local_64 = 1;
          }
          else {
            local_64 = 0;
          }
LAB_001e1395:
          local_178 = local_98;
          break;
        case 0x57:
          local_88 = 0;
          switch(lVar23) {
          case 2:
            uVar7 = (uint)bStack_f0;
            break;
          case 3:
            uVar7 = (uint)CONCAT11(uStack_ef,bStack_f0);
            break;
          case 4:
            uVar7 = CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0));
            break;
          case 5:
          case 7:
            uVar7 = CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0));
            break;
          case 6:
            uVar7 = CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0));
            if (iStack_ec < 0) goto LAB_001e0e30;
            break;
          default:
            goto switchD_001e0e9d_caseD_4;
          }
          local_88 = uVar7;
          break;
        case 0x58:
          <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          ::value(&local_b8,&local_f8);
          if (local_b8 != 0x2c) goto switchD_001e0e9d_caseD_4;
          if (CONCAT44(iStack_ac,iStack_b0) == 0) {
            if (*(ushort *)(lVar8 + 0x4a) < 5) break;
          }
          local_128 = 1;
          local_170 = CONCAT44(iStack_ac,iStack_b0);
          break;
        case 0x59:
          local_84 = 0;
          switch(lVar23) {
          case 2:
            local_84 = (uint)bStack_f0;
            break;
          case 3:
            local_84 = (uint)CONCAT11(uStack_ef,bStack_f0);
            break;
          case 4:
            local_84 = CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0));
            break;
          case 5:
          case 7:
LAB_001e13ca:
            local_84 = CONCAT22(uStack_ee,CONCAT11(uStack_ef,bStack_f0));
            break;
          case 6:
            if (-1 < iStack_ec) goto LAB_001e13ca;
            break;
          default:
            goto switchD_001e0e9d_caseD_4;
          }
          break;
        default:
          if (((short)local_e0 == 0x6e) || ((short)local_e0 == 0x2007)) {
            <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            ::value(&local_b8,&local_f8);
            <gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            ::attr_string(local_150,lVar19,*(undefined1 *)(lVar8 + 0x49),
                          *(undefined8 *)(lVar8 + 0x1a0),&local_b8);
            if ((char)local_150[0] == '\0') {
              local_130 = local_140;
              local_a0 = local_148;
            }
          }
switchD_001e0e9d_caseD_4:
LAB_001e1374:
        }
LAB_001e0e30:
        lVar23 = local_38 + 0x10;
        if (local_40 == lVar23) goto LAB_001e0cf2;
        goto LAB_001e0e3d;
      }
      param_2[10] = local_c0 + -1;
LAB_001e17c4:
      lVar19 = param_2[8];
      pbVar11 = (byte *)param_2[6];
      pbVar25 = pbVar11 + (((ulonglong)(*(char *)(lVar19 + 0x49) == '\b') * 8 +
                           *(longlong *)(lVar19 + 0x38)) -
                          (*(longlong *)(lVar19 + 0x30) + *(longlong *)(lVar19 + 0x28)));
      local_c0 = param_2[10];
    } while (param_3 < local_c0);
  }
  *(undefined1 *)param_1 = 0xff;
  return;
}


