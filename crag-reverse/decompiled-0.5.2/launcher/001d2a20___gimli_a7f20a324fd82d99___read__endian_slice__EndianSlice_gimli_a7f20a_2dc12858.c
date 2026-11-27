// 001d2a20 <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>

/* gimli[a7f20a324fd82d99]::read::unit::skip_attributes::<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
    */

void __rustcall
gimli[a7f20a324fd82d99]::read::unit::skip_attributes::
<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
          (ulonglong *param_1,ulonglong *param_2,uint param_3,longlong param_4,longlong param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint *puVar18;
  bool bVar19;
  ulonglong local_60;
  uint *local_38;
  uint *local_30;
  
  if (param_5 != 0) {
    lVar13 = param_5 * 0x10 + param_4;
    puVar15 = (uint *)param_2[1];
    uVar6 = param_3 >> 8;
    if ((param_3 & 0xffff0000) == 0x20000) {
      uVar6 = param_3;
    }
    puVar18 = (uint *)0x0;
    puVar14 = (uint *)*param_2;
    do {
      uVar3 = *(ushort *)(param_4 + 10);
      uVar17 = (ulonglong)uVar3;
      uVar7 = 1;
      puVar8 = puVar14;
      switch(uVar3) {
      case 1:
switchD_001d2a8f_caseD_1:
        puVar8 = puVar14;
        uVar7 = param_3;
        break;
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 10:
      case 0xd:
      case 0xf:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x1a:
      case 0x1b:
      case 0x22:
      case 0x23:
switchD_001d2a8f_caseD_2:
        if (puVar18 != (uint *)0x0) {
          bVar19 = puVar15 < puVar18;
          puVar15 = (uint *)((longlong)puVar15 - (longlong)puVar18);
          if (bVar19) {
            *(undefined1 *)param_1 = 0x13;
            goto LAB_001d2fc8;
          }
          puVar14 = (uint *)((longlong)puVar14 + (longlong)puVar18);
          *param_2 = (ulonglong)puVar14;
          param_2[1] = (ulonglong)puVar15;
        }
        switch(uVar3) {
        case 3:
switchD_001d2ae0_caseD_3:
          if (puVar15 < (uint *)0x2) {
LAB_001d2f5e:
            *(undefined1 *)param_1 = 0x13;
            *(undefined1 *)((longlong)param_1 + 7) = 0;
            *(undefined2 *)((longlong)param_1 + 5) = 0;
            *(undefined4 *)((longlong)param_1 + 1) = 0;
LAB_001d2fc8:
            param_1[1] = (ulonglong)puVar14;
            return;
          }
          puVar15 = (uint *)((longlong)puVar15 + -2);
          puVar8 = (uint *)((longlong)puVar14 + 2);
          *param_2 = (ulonglong)puVar8;
          param_2[1] = (ulonglong)puVar15;
          puVar18 = (uint *)(ulonglong)(ushort)*puVar14;
          break;
        case 4:
switchD_001d2ae0_caseD_4:
          if (puVar15 < (uint *)0x4) goto LAB_001d2f5e;
          puVar15 = puVar15 + -1;
          puVar8 = puVar14 + 1;
          *param_2 = (ulonglong)puVar8;
          param_2[1] = (ulonglong)puVar15;
          puVar18 = (uint *)(ulonglong)*puVar14;
          break;
        case 5:
        case 6:
        case 7:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x17:
        case 0x19:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
switchD_001d2ae0_caseD_5:
          *(undefined1 *)param_1 = 0xc;
          *(short *)((longlong)param_1 + 2) = (short)uVar17;
          return;
        case 8:
switchD_001d2ae0_caseD_8:
          if (puVar15 == (uint *)0x0) {
LAB_001d2f4a:
            *param_1 = (ulonglong)local_30 & 0xffffffffffffff00 | 0x13;
            goto LAB_001d2fc8;
          }
          puVar18 = (uint *)0x0;
          while (*(byte *)((longlong)puVar14 + (longlong)puVar18) != 0) {
            puVar18 = (uint *)((longlong)puVar18 + 1);
            if (puVar15 == puVar18) goto LAB_001d2f4a;
          }
          puVar8 = (uint *)((byte *)((longlong)puVar14 + (longlong)puVar18) + 1);
          puVar15 = (uint *)((longlong)puVar15 + ~(ulonglong)puVar18);
          *param_2 = (ulonglong)puVar8;
          param_2[1] = (ulonglong)puVar15;
          puVar18 = (uint *)0x0;
          local_30 = puVar14;
          break;
        case 9:
        case 0x18:
switchD_001d2ae0_caseD_9:
          if (puVar15 == (uint *)0x0) {
LAB_001d2f33:
            uVar5 = 0x13;
            local_38 = puVar14;
LAB_001d2f35:
            *(undefined1 *)param_1 = uVar5;
            *(undefined1 *)((longlong)param_1 + 1) = 0;
            *(undefined2 *)((longlong)param_1 + 6) = 0;
            *(undefined4 *)((longlong)param_1 + 2) = 0;
            puVar14 = local_38;
            goto LAB_001d2fc8;
          }
          lVar16 = 1 - (longlong)puVar15;
          puVar18 = (uint *)0x0;
          iVar9 = 0;
          puVar4 = puVar14;
          while( true ) {
            puVar8 = (uint *)((longlong)puVar4 + 1);
            bVar1 = (byte)*puVar4;
            if ((iVar9 == 0x3f) && (1 < bVar1)) {
              *param_2 = (ulonglong)puVar8;
              param_2[1] = -lVar16;
              uVar5 = 6;
              goto LAB_001d2f35;
            }
            puVar18 = (uint *)((ulonglong)puVar18 |
                              (ulonglong)(bVar1 & 0x7f) << ((byte)iVar9 & 0x3f));
            if (-1 < (char)bVar1) break;
            iVar9 = iVar9 + 7;
            lVar16 = lVar16 + 1;
            puVar4 = puVar8;
            if (lVar16 == 1) {
              puVar14 = (uint *)((longlong)puVar14 + (longlong)puVar15);
              *param_2 = (ulonglong)puVar14;
              param_2[1] = 0;
              goto LAB_001d2f33;
            }
          }
          *param_2 = (ulonglong)puVar8;
          puVar15 = (uint *)-lVar16;
          param_2[1] = (ulonglong)puVar15;
          local_38 = puVar18;
          break;
        case 10:
switchD_001d2ae0_caseD_a:
          if (puVar15 == (uint *)0x0) goto LAB_001d2f5e;
          puVar15 = (uint *)((longlong)puVar15 + -1);
          puVar8 = (uint *)((longlong)puVar14 + 1);
          *param_2 = (ulonglong)puVar8;
          param_2[1] = (ulonglong)puVar15;
          puVar18 = (uint *)(ulonglong)(byte)*puVar14;
          break;
        case 0x16:
          puVar18 = puVar14;
          if (puVar15 == (uint *)0x0) {
LAB_001d2f7e:
            uVar5 = 0x13;
            uVar17 = 0;
            uVar10 = 0;
          }
          else {
            puVar8 = (uint *)((longlong)puVar15 + -1);
            puVar18 = (uint *)((longlong)puVar14 + 1);
            *param_2 = (ulonglong)puVar18;
            param_2[1] = (ulonglong)puVar8;
            bVar1 = (byte)*puVar14;
            if (-1 < (char)bVar1) goto LAB_001d2bbc;
            if (puVar8 == (uint *)0x0) {
LAB_001d2f87:
              uVar5 = 0x13;
              uVar17 = 0;
              uVar10 = 0;
            }
            else {
              puVar8 = (uint *)((longlong)puVar15 + -2);
              puVar18 = (uint *)((longlong)puVar14 + 2);
              *param_2 = (ulonglong)puVar18;
              param_2[1] = (ulonglong)puVar8;
              uVar11 = (*(byte *)((longlong)puVar14 + 1) & 0x7f) << 7;
              if (-1 < (char)*(byte *)((longlong)puVar14 + 1)) {
                uVar11 = bVar1 & 0x7f | uVar11;
                puVar15 = puVar18;
LAB_001d2c7b:
                uVar17 = (ulonglong)uVar11;
                uVar12 = local_60;
                puVar14 = puVar15;
                puVar15 = puVar8;
LAB_001d2c7e:
                local_60 = uVar12 & 0xffffffffffff0000 | uVar17;
                iVar9 = (int)uVar17;
                switch(iVar9) {
                case 1:
                  puVar18 = (uint *)0x0;
                  break;
                case 2:
                  goto switchD_001d2ae0_caseD_5;
                case 3:
                  goto switchD_001d2ae0_caseD_3;
                case 4:
                  goto switchD_001d2ae0_caseD_4;
                case 5:
                case 0x12:
                case 0x26:
                case 0x2a:
                  puVar18 = (uint *)0x0;
                  goto switchD_001d2a8f_caseD_5;
                case 6:
                case 0x13:
                case 0x1c:
                case 0x28:
                case 0x2c:
                  puVar18 = (uint *)0x0;
                  goto switchD_001d2a8f_caseD_6;
                case 7:
                case 0x14:
                case 0x20:
                case 0x24:
                  puVar18 = (uint *)0x0;
                  goto switchD_001d2a8f_caseD_7;
                case 8:
                  goto switchD_001d2ae0_caseD_8;
                case 9:
                case 0x18:
                  goto switchD_001d2ae0_caseD_9;
                case 10:
                  goto switchD_001d2ae0_caseD_a;
                case 0xb:
                case 0xc:
                case 0x11:
                case 0x25:
                case 0x29:
                  puVar18 = (uint *)0x0;
                  puVar8 = puVar14;
                  goto switchD_001d2a8f_caseD_b;
                case 0xd:
                case 0xf:
                case 0x15:
                case 0x1a:
                case 0x1b:
                case 0x22:
                case 0x23:
                  goto switchD_001d2ae0_caseD_d;
                case 0x10:
                  puVar18 = (uint *)0x0;
                  goto switchD_001d2a8f_caseD_10;
                case 0x16:
                  puVar18 = puVar14;
                  if (puVar15 == (uint *)0x0) goto LAB_001d2f7e;
                  puVar8 = (uint *)((longlong)puVar15 + -1);
                  puVar18 = (uint *)((longlong)puVar14 + 1);
                  *param_2 = (ulonglong)puVar18;
                  param_2[1] = (ulonglong)puVar8;
                  bVar1 = (byte)*puVar14;
                  if ((char)bVar1 < '\0') {
                    if (puVar8 == (uint *)0x0) goto LAB_001d2f87;
                    *param_2 = (ulonglong)((longlong)puVar14 + 2);
                    param_2[1] = (ulonglong)((longlong)puVar15 + -2);
                    uVar11 = (*(byte *)((longlong)puVar14 + 1) & 0x7f) << 7;
                    if ((char)*(byte *)((longlong)puVar14 + 1) < '\0') {
                      puVar18 = (uint *)((longlong)puVar14 + 2);
                      if (puVar15 == (uint *)0x2) goto LAB_001d2f93;
                      puVar15 = (uint *)((longlong)puVar15 + -3);
                      *param_2 = (ulonglong)((longlong)puVar14 + 3);
                      param_2[1] = (ulonglong)puVar15;
                      bVar2 = *(byte *)((longlong)puVar14 + 2);
                      puVar18 = (uint *)(ulonglong)bVar2;
                      if (bVar2 < 4) goto code_r0x001d2d66;
                      uVar10 = (undefined4)(uVar12 >> 0x10);
                      uVar5 = 6;
                      goto LAB_001d2fba;
                    }
                    uVar17 = (ulonglong)(bVar1 & 0x7f | uVar11);
                    uVar12 = local_60;
                    puVar14 = (uint *)((longlong)puVar14 + 2);
                    puVar15 = (uint *)((longlong)puVar15 + -2);
                  }
                  else {
LAB_001d2bbc:
                    uVar17 = (ulonglong)bVar1;
                    uVar12 = local_60;
                    puVar14 = puVar18;
                    puVar15 = puVar8;
                  }
                  goto LAB_001d2c7e;
                case 0x19:
                case 0x21:
                  puVar18 = (uint *)0x0;
                  goto switchD_001d2a8f_caseD_19;
                case 0x1e:
                  puVar18 = (uint *)0x0;
                  goto switchD_001d2a8f_caseD_1e;
                case 0x27:
                case 0x2b:
                  puVar18 = (uint *)0x0;
                  goto switchD_001d2a8f_caseD_27;
                default:
                  if (iVar9 - 0x1f01U < 2) goto switchD_001d2ae0_caseD_d;
                  if (1 < iVar9 - 0x1f20U) goto switchD_001d2ae0_caseD_5;
                case 0xe:
                case 0x17:
                case 0x1d:
                case 0x1f:
                  puVar18 = (uint *)0x0;
                  goto switchD_001d2a8f_caseD_e;
                }
                goto switchD_001d2a8f_caseD_1;
              }
              if (puVar15 == (uint *)0x2) {
LAB_001d2f93:
                uVar5 = 0x13;
                uVar17 = 0;
                uVar10 = 0;
              }
              else {
                puVar8 = (uint *)((longlong)puVar15 + -3);
                puVar15 = (uint *)((longlong)puVar14 + 3);
                *param_2 = (ulonglong)puVar15;
                param_2[1] = (ulonglong)puVar8;
                bVar2 = *(byte *)((longlong)puVar14 + 2);
                puVar18 = (uint *)(ulonglong)bVar2;
                if (bVar2 < 4) {
                  uVar11 = bVar1 & 0x7f | uVar11 | ((ushort)bVar2 & 3) << 0xe;
                  goto LAB_001d2c7b;
                }
                uVar10 = (undefined4)(local_60 >> 0x10);
                uVar5 = 6;
                uVar17 = local_60;
              }
            }
          }
LAB_001d2fba:
          *(undefined1 *)param_1 = uVar5;
          *(undefined1 *)((longlong)param_1 + 1) = 0;
          *(short *)((longlong)param_1 + 2) = (short)uVar17;
          *(undefined4 *)((longlong)param_1 + 4) = uVar10;
          puVar14 = puVar18;
          goto LAB_001d2fc8;
        default:
          if (1 < uVar3 - 0x1f01) goto switchD_001d2ae0_caseD_5;
        case 0xd:
        case 0xf:
        case 0x15:
        case 0x1a:
        case 0x1b:
        case 0x22:
        case 0x23:
switchD_001d2ae0_caseD_d:
          puVar18 = puVar14;
          do {
            if (puVar15 == (uint *)0x0) {
              *(undefined2 *)param_1 = 0x13;
              *(undefined2 *)((longlong)param_1 + 6) = 0;
              *(undefined4 *)((longlong)param_1 + 2) = 0;
              param_1[1] = (ulonglong)puVar14;
              return;
            }
            puVar15 = (uint *)((longlong)puVar15 + -1);
            puVar8 = (uint *)((longlong)puVar18 + 1);
            *param_2 = (ulonglong)puVar8;
            param_2[1] = (ulonglong)puVar15;
            puVar14 = (uint *)((longlong)puVar14 + 1);
            uVar7 = *puVar18;
            puVar18 = puVar8;
          } while ((char)(byte)uVar7 < '\0');
          puVar18 = (uint *)0x0;
        }
        goto LAB_001d2eb9;
      case 5:
      case 0x12:
      case 0x26:
      case 0x2a:
switchD_001d2a8f_caseD_5:
        puVar8 = puVar14;
        uVar7 = 2;
        break;
      case 6:
      case 0x13:
      case 0x1c:
      case 0x28:
      case 0x2c:
switchD_001d2a8f_caseD_6:
        puVar8 = puVar14;
        uVar7 = 4;
        break;
      case 7:
      case 0x14:
      case 0x20:
      case 0x24:
switchD_001d2a8f_caseD_7:
        puVar8 = puVar14;
        uVar7 = 8;
        break;
      case 0xb:
      case 0xc:
      case 0x11:
      case 0x25:
      case 0x29:
        break;
      case 0x10:
switchD_001d2a8f_caseD_10:
        puVar8 = puVar14;
        uVar7 = uVar6;
        break;
      case 0x19:
      case 0x21:
switchD_001d2a8f_caseD_19:
        puVar8 = puVar14;
        uVar7 = 0;
        break;
      case 0x1e:
switchD_001d2a8f_caseD_1e:
        puVar8 = puVar14;
        uVar7 = 0x10;
        break;
      case 0x27:
      case 0x2b:
switchD_001d2a8f_caseD_27:
        puVar8 = puVar14;
        uVar7 = 3;
        break;
      default:
        if (1 < uVar3 - 0x1f20) goto switchD_001d2a8f_caseD_2;
      case 0xe:
      case 0x17:
      case 0x1d:
      case 0x1f:
switchD_001d2a8f_caseD_e:
        puVar8 = puVar14;
        uVar7 = param_3 >> 8;
      }
switchD_001d2a8f_caseD_b:
      puVar18 = (uint *)((longlong)puVar18 + (ulonglong)(uVar7 & 0xff));
LAB_001d2eb9:
      param_4 = param_4 + 0x10;
      puVar14 = puVar8;
    } while (param_4 != lVar13);
    if (puVar18 != (uint *)0x0) {
      uVar17 = *param_2;
      if ((uint *)param_2[1] < puVar18) {
        *(undefined1 *)param_1 = 0x13;
        param_1[1] = uVar17;
        return;
      }
      *param_2 = (ulonglong)(uVar17 + (longlong)puVar18);
      param_2[1] = (longlong)param_2[1] - (longlong)puVar18;
    }
  }
  *(undefined1 *)param_1 = 0xff;
  return;
code_r0x001d2d66:
  uVar17 = (ulonglong)(bVar1 & 0x7f | uVar11 | ((ushort)bVar2 & 3) << 0xe);
  uVar12 = local_60;
  puVar14 = (uint *)((longlong)puVar14 + 3);
  goto LAB_001d2c7e;
}


