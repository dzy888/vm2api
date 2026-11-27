// 006c7950 fmt

/* WARNING: Switch with 1 destination removed at 0x006c7969 */
/* WARNING: Switch with 1 destination removed at 0x006c7981 */
/* <http[56314f485c23ccf6]::header::name::HeaderName as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

ulonglong __rustcall
<http[56314f485c23ccf6]::header::name::HeaderName_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_78 [12];
  char cStack_6c;
  byte bStack_6b;
  longlong lStack_68;
  longlong lStack_60;
  code *pcStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  
  if (*param_1 == 0) {
    auVar16 = <http[56314f485c23ccf6]::header::name::StandardHeader>::as_str((int)param_1[1]);
  }
  else {
    auVar16 = *(undefined1 (*) [16])(param_1 + 1);
  }
  uVar9 = auVar16._8_8_;
  uVar2 = *param_2;
  lVar14 = param_2[1];
  pcVar13 = *(code **)(lVar14 + 0x20);
  cVar4 = (*pcVar13)();
  uVar8 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  if (cVar4 != '\0') goto LAB_0078251a;
  if (uVar9 == 0) {
LAB_007824ef:
    auVar3._8_8_ = uStack_48;
    auVar3._0_8_ = lStack_38;
    uVar15 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar15 = 0;
    lStack_60 = lVar14;
    pcStack_58 = pcVar13;
    uStack_40 = uVar2;
    auVar3 = auVar16;
    do {
      uStack_48 = auVar3._8_8_;
      lStack_38 = auVar3._0_8_;
      lVar14 = auVar16._8_8_;
      lVar11 = auVar16._0_8_;
      lVar10 = 0;
      while (((cVar4 = *(char *)(lVar11 + lVar10), 0xa0 < (byte)(cVar4 + 0x81U) && (cVar4 != '\"'))
             && (cVar4 != '\\'))) {
        lVar10 = lVar10 + 1;
        if (lVar14 == lVar10) {
          uVar8 = uVar8 + lVar14;
          goto LAB_007824a1;
        }
      }
      bVar1 = *(byte *)(lVar11 + lVar10);
      uVar6 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar5 = bVar1 & 0x1f;
        uVar6 = *(byte *)(lVar11 + 1 + lVar10) & 0x3f;
        if (bVar1 < 0xe0) {
          lVar12 = lVar11 + lVar10 + 2;
          uVar6 = uVar5 << 6 | uVar6;
        }
        else {
          uVar6 = *(byte *)(lVar11 + 2 + lVar10) & 0x3f | uVar6 << 6;
          if (bVar1 < 0xf0) {
            lVar12 = lVar11 + lVar10 + 3;
            uVar6 = uVar6 | uVar5 << 0xc;
          }
          else {
            lVar12 = lVar11 + lVar10 + 4;
            uVar6 = *(byte *)(lVar11 + 3 + lVar10) & 0x3f | uVar6 << 6 | (bVar1 & 7) << 0x12;
          }
        }
      }
      else {
        lVar12 = lVar11 + lVar10 + 1;
      }
      uVar7 = uVar8 + lVar10;
      lStack_68 = lVar14 + lVar11;
      uStack_50 = uVar8;
      <char>::escape_debug_ext(auStack_78,uVar6,0x10001);
      bVar1 = bStack_6b;
      if ((byte)(bStack_6b - cStack_6c) != '\x01') {
        if (((uVar7 < uVar15) || (uStack_48 < uVar7)) ||
           ((uVar8 = (ulonglong)bStack_6b, uVar15 != uStack_48 &&
            (((uVar15 != 0 && (*(char *)(lStack_38 + uVar15) < -0x40)) ||
             ((uVar7 != uVar9 &&
              (uVar8 = uStack_50, *(char *)(lVar10 + lStack_38 + uStack_50) < -0x40)))))))) {
          (*(code *)PTR_slice_error_fail_00799408)
                    (uVar7,uVar15,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798aa8);
          pcVar13 = (code *)swi(3);
          uVar8 = (*pcVar13)();
          return uVar8;
        }
        pcVar13 = *(code **)(lStack_60 + 0x18);
        cVar4 = (*pcVar13)(uVar8,(uStack_50 - uVar15) + lVar10);
        if (cVar4 == '\0') {
          if (bVar1 < 0x81) {
            cVar4 = (*pcVar13)();
          }
          else {
            cVar4 = (*pcStack_58)();
          }
          if (cVar4 == '\0') {
            lVar14 = 1;
            if ((0x7f < uVar6) && (lVar14 = 2, 0x7ff < uVar6)) {
              lVar14 = 4 - (ulonglong)(uVar6 < 0x10000);
            }
            uVar15 = lVar14 + uVar7;
            goto LAB_0078245e;
          }
        }
        uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
        goto LAB_0078251a;
      }
LAB_0078245e:
      auVar3._8_8_ = uStack_48;
      auVar3._0_8_ = lStack_38;
      lVar14 = 1;
      if ((0x7f < uVar6) && (lVar14 = 2, 0x7ff < uVar6)) {
        lVar14 = 4 - (ulonglong)(uVar6 < 0x10000);
      }
      uVar8 = uVar7 + lVar14;
      auVar16._8_8_ = lStack_68 - lVar12;
      auVar16._0_8_ = lVar12;
    } while (lStack_68 - lVar12 != 0);
    uVar8 = lVar14 + uStack_50 + lVar10;
LAB_007824a1:
    pcVar13 = pcStack_58;
    lVar14 = lStack_60;
    uStack_48 = auVar3._8_8_;
    lStack_38 = auVar3._0_8_;
    if (((uVar8 < uVar15) || (uStack_48 < uVar8)) ||
       ((uVar15 != uStack_48 &&
        (((uVar15 != 0 && (*(char *)(lStack_38 + uVar15) < -0x40)) ||
         ((uVar8 != uStack_48 && (*(char *)(lStack_38 + uVar8) < -0x40)))))))) {
      (*(code *)PTR_slice_error_fail_00799408)
                (uVar8,uVar15,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798ac0);
      goto LAB_007824ef;
    }
  }
  uStack_48 = auVar3._8_8_;
  lStack_38 = auVar3._0_8_;
  lVar10 = uVar8 - uVar15;
  cVar4 = (**(code **)(lVar14 + 0x18))(lVar10,lVar10);
  uVar8 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
  if (cVar4 == '\0') {
    uVar6 = (*pcVar13)();
    uVar8 = (ulonglong)uVar6;
  }
LAB_0078251a:
  return uVar8 & 0xffffffff;
}


