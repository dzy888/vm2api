// 007821f0 fmt

/* <str as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

ulonglong __rustcall
<str_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  code *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 local_78 [12];
  char local_6c;
  byte local_6b;
  longlong local_68;
  longlong local_60;
  code *local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_40;
  longlong local_38;
  
  uVar2 = *param_3;
  lVar11 = param_3[1];
  pcVar10 = *(code **)(lVar11 + 0x20);
  cVar3 = (*pcVar10)();
  uVar7 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  if (cVar3 != '\0') goto LAB_0078251a;
  if (param_2 == 0) {
LAB_007824ef:
    uVar12 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar12 = 0;
    uVar7 = param_2;
    local_60 = lVar11;
    local_58 = pcVar10;
    local_48 = param_2;
    local_40 = uVar2;
    local_38 = param_1;
    do {
      lVar11 = uVar7 + param_1;
      uVar9 = 0;
      while( true ) {
        cVar3 = *(char *)(param_1 + uVar9);
        if ((((byte)(cVar3 + 0x81U) < 0xa1) || (cVar3 == '\"')) || (cVar3 == '\\')) break;
        uVar9 = uVar9 + 1;
        if (uVar7 == uVar9) {
          uVar8 = uVar8 + uVar7;
          goto LAB_007824a1;
        }
      }
      bVar1 = *(byte *)(param_1 + uVar9);
      uVar5 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar4 = bVar1 & 0x1f;
        uVar5 = *(byte *)(param_1 + 1 + uVar9) & 0x3f;
        if (bVar1 < 0xe0) {
          param_1 = param_1 + uVar9 + 2;
          uVar5 = uVar4 << 6 | uVar5;
        }
        else {
          uVar5 = *(byte *)(param_1 + 2 + uVar9) & 0x3f | uVar5 << 6;
          if (bVar1 < 0xf0) {
            param_1 = param_1 + uVar9 + 3;
            uVar5 = uVar5 | uVar4 << 0xc;
          }
          else {
            lVar6 = param_1 + 3;
            param_1 = param_1 + uVar9 + 4;
            uVar5 = *(byte *)(lVar6 + uVar9) & 0x3f | uVar5 << 6 | (bVar1 & 7) << 0x12;
          }
        }
      }
      else {
        param_1 = param_1 + uVar9 + 1;
      }
      uVar7 = uVar8 + uVar9;
      local_68 = lVar11;
      local_50 = uVar8;
      <char>::escape_debug_ext(local_78,uVar5,0x10001);
      bVar1 = local_6b;
      if ((byte)(local_6b - local_6c) != '\x01') {
        if (((uVar7 < uVar12) || (local_48 < uVar7)) ||
           ((uVar8 = (ulonglong)local_6b, uVar12 != local_48 &&
            (((uVar12 != 0 && (*(char *)(local_38 + uVar12) < -0x40)) ||
             ((uVar7 != param_2 &&
              (uVar8 = local_50, *(char *)(uVar9 + local_38 + local_50) < -0x40)))))))) {
          (*(code *)PTR_slice_error_fail_00799408)
                    (uVar7,uVar12,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798aa8);
          pcVar10 = (code *)swi(3);
          uVar7 = (*pcVar10)();
          return uVar7;
        }
        pcVar10 = *(code **)(local_60 + 0x18);
        cVar3 = (*pcVar10)(uVar8,(local_50 - uVar12) + uVar9);
        if (cVar3 == '\0') {
          if (bVar1 < 0x81) {
            cVar3 = (*pcVar10)();
          }
          else {
            cVar3 = (*local_58)();
          }
          if (cVar3 == '\0') {
            lVar11 = 1;
            if ((0x7f < uVar5) && (lVar11 = 2, 0x7ff < uVar5)) {
              lVar11 = 4 - (ulonglong)(uVar5 < 0x10000);
            }
            uVar12 = lVar11 + uVar7;
            goto LAB_0078245e;
          }
        }
        uVar7 = CONCAT71((int7)(uVar8 >> 8),1);
        goto LAB_0078251a;
      }
LAB_0078245e:
      lVar11 = 1;
      if ((0x7f < uVar5) && (lVar11 = 2, 0x7ff < uVar5)) {
        lVar11 = 4 - (ulonglong)(uVar5 < 0x10000);
      }
      uVar8 = uVar7 + lVar11;
      uVar7 = local_68 - param_1;
    } while (uVar7 != 0);
    uVar8 = lVar11 + local_50 + uVar9;
LAB_007824a1:
    pcVar10 = local_58;
    lVar11 = local_60;
    if (((uVar8 < uVar12) || (local_48 < uVar8)) ||
       ((uVar12 != local_48 &&
        (((uVar12 != 0 && (*(char *)(local_38 + uVar12) < -0x40)) ||
         ((uVar8 != local_48 && (*(char *)(local_38 + uVar8) < -0x40)))))))) {
      (*(code *)PTR_slice_error_fail_00799408)
                (uVar8,uVar12,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798ac0);
      goto LAB_007824ef;
    }
  }
  lVar6 = uVar8 - uVar12;
  cVar3 = (**(code **)(lVar11 + 0x18))(lVar6,lVar6);
  uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  if (cVar3 == '\0') {
    uVar5 = (*pcVar10)();
    uVar7 = (ulonglong)uVar5;
  }
LAB_0078251a:
  return uVar7 & 0xffffffff;
}


