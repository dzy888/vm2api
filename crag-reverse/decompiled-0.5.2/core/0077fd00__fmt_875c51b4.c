// 0077fd00 fmt

/* <core[c0acaeba6ab4c2e0]::str::lossy::Debug as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::str::lossy::Debug_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  byte *local_c0;
  byte *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong local_70;
  uint local_64;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  
  local_38 = *param_2;
  lVar9 = param_2[1];
  local_60 = *(code **)(lVar9 + 0x20);
  cVar5 = (*local_60)();
  uVar7 = 1;
  if (cVar5 == '\0') {
    (*(code *)PTR_next_0079b318)();
    while (local_c0 != (byte *)0x0) {
      local_78 = local_a8;
      local_40 = local_b8;
      pbVar8 = (byte *)0x0;
      if (local_b8 == (byte *)0x0) {
LAB_0077ffc3:
        pbVar10 = (byte *)0x0;
      }
      else {
        pbVar10 = (byte *)0x0;
        pbVar11 = (byte *)0x0;
        pbVar3 = local_c0;
        local_70 = lVar9;
        do {
          pbVar8 = pbVar3;
          bVar1 = *pbVar8;
          local_64 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            uVar6 = bVar1 & 0x1f;
            if (bVar1 < 0xe0) {
              local_48 = pbVar8 + 2;
              local_64 = uVar6 << 6 | pbVar8[1] & 0x3f;
            }
            else {
              local_64 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
              if (bVar1 < 0xf0) {
                local_48 = pbVar8 + 3;
                uVar6 = uVar6 << 0xc;
              }
              else {
                local_48 = pbVar8 + 4;
                uVar6 = (bVar1 & 7) << 0x12;
                local_64 = pbVar8[3] & 0x3f | local_64 << 6;
              }
              local_64 = local_64 | uVar6;
            }
          }
          else {
            local_48 = pbVar8 + 1;
          }
          uVar16 = <char>::escape_debug_ext(&local_88,local_64,0x10001);
          if ((char)(uStack_7c._1_1_ - (char)uStack_7c) != '\x01') {
            if (((local_40 < pbVar11) || (pbVar11 < pbVar10)) ||
               ((pbVar10 != local_40 &&
                (((pbVar10 != (byte *)0x0 && ((char)local_c0[(longlong)pbVar10] < -0x40)) ||
                 ((pbVar11 != local_40 && ((char)local_c0[(longlong)pbVar11] < -0x40)))))))) {
              (*(code *)PTR_slice_error_fail_00799408)
                        (pbVar11,pbVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_007989e0);
              pcVar2 = (code *)swi(3);
              uVar7 = (*pcVar2)();
              return uVar7;
            }
            cVar5 = (**(code **)(local_70 + 0x18))(uVar16,(longlong)pbVar11 - (longlong)pbVar10);
            if (cVar5 != '\0') {
              return 1;
            }
            local_58 = (undefined4 *)CONCAT44(uStack_84,local_88);
            uStack_50 = (undefined *)CONCAT44(uStack_7c,uStack_80);
            puVar4 = uStack_50;
            uStack_50._5_1_ = (byte)((uint)uStack_7c >> 8);
            bVar1 = uStack_50._5_1_;
            uVar12 = (ulonglong)uStack_50._5_1_;
            uStack_50._4_1_ = (byte)uStack_7c;
            uVar15 = (ulonglong)uStack_50._4_1_;
            if (uVar12 < 0x81) {
              while (uStack_50 = puVar4, uVar15 < uVar12) {
                uVar15 = uVar15 + 1;
                cVar5 = (*local_60)();
                puVar4 = uStack_50;
                if (cVar5 != '\0') {
                  return 1;
                }
              }
            }
            else {
              bVar14 = uStack_50._4_1_ - 1;
              uStack_50 = puVar4;
              while (bVar14 = bVar14 + 1, bVar14 < bVar1) {
                cVar5 = (*local_60)();
                if (cVar5 != '\0') {
                  return 1;
                }
              }
            }
            lVar9 = 1;
            if ((0x7f < local_64) && (lVar9 = 2, 0x7ff < local_64)) {
              lVar9 = 4 - (ulonglong)(local_64 < 0x10000);
            }
            pbVar10 = pbVar11 + lVar9;
          }
          pbVar11 = local_48 + ((longlong)pbVar11 - (longlong)pbVar8);
          pbVar3 = local_48;
        } while (local_48 != local_c0 + (longlong)local_b8);
        lVar9 = local_70;
        if (pbVar10 == (byte *)0x0) goto LAB_0077ffc3;
        if (pbVar10 < local_40) {
          if ((char)local_c0[(longlong)pbVar10] < -0x40) goto LAB_00780068;
        }
        else if (pbVar10 != local_40) {
LAB_00780068:
          (*(code *)PTR_slice_error_fail_00799408)
                    (local_40,pbVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_007989c8);
          return 1;
        }
      }
      cVar5 = (**(code **)(lVar9 + 0x18))(pbVar8,(longlong)local_40 - (longlong)pbVar10);
      puVar4 = PTR_fmt_0079a130;
      if (cVar5 != '\0') {
        return 1;
      }
      if (local_78 != 0) {
        lVar13 = 0;
        do {
          local_88 = CONCAT31(local_88._1_3_,*(undefined1 *)(local_b0 + lVar13));
          uStack_50 = puVar4;
          local_58 = &local_88;
          cVar5 = (*(code *)PTR_write_007994b0)(&local_58,&DAT_001c60ad);
          if (cVar5 != '\0') {
            return 1;
          }
          lVar13 = lVar13 + 1;
        } while (local_78 != lVar13);
      }
      (*(code *)PTR_next_0079b318)();
    }
    uVar7 = (*local_60)();
  }
  return uVar7;
}


