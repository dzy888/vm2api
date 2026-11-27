// 00036080 header_value

/* agy_bridge[64a9e9deac6c45ce]::header_value */

void __rustcall
agy_bridge[64a9e9deac6c45ce]::header_value
          (longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 uVar13;
  int local_48;
  longlong local_38;
  
  if (param_2 == 0) goto LAB_0003690a;
  pcVar6 = *(char **)(param_2 + 0x10);
  uVar3 = *(ulonglong *)(param_2 + 0x18);
  if (!(uVar3 < 0x11 && pcVar6 != (char *)0x0)) goto LAB_0003690a;
  if (param_4 < 0x10) {
    lVar12 = 0;
    do {
      if (uVar3 == 0) {
        uVar7 = 1;
        pcVar8 = pcVar6;
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(pcVar6 + lVar12 * 8) + 0x18);
        if (lVar4 == -1) break;
        uVar7 = lVar4 + 1;
        pcVar8 = *(char **)(*(longlong *)(pcVar6 + lVar12 * 8) + 0x10);
        if (0x20 < uVar7) goto LAB_00036973;
      }
      if (pcVar8 == (char *)0x0) goto LAB_00036973;
      lVar12 = lVar12 + 1;
      uVar9 = 0;
      do {
        pcVar11 = pcVar8 + uVar9 * 0x148;
        if ((-1 < pcVar8[uVar9 * 0x148]) && (*(ulonglong *)(pcVar11 + 0x10) == param_4)) {
          uVar10 = 0;
          do {
            if (param_4 == uVar10) goto LAB_0003684f;
            pbVar1 = (byte *)(*(longlong *)(pcVar11 + 8) + uVar10);
            pbVar2 = (byte *)(param_3 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        if ((-1 < pcVar11[1]) && (*(ulonglong *)(pcVar11 + 0x20) == param_4)) {
          uVar10 = 0;
          do {
            if (param_4 == uVar10) {
              lVar12 = 0x18;
              goto LAB_000368bc;
            }
            pbVar1 = (byte *)(*(longlong *)(pcVar11 + 0x18) + uVar10);
            pbVar2 = (byte *)(param_3 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        if ((-1 < pcVar11[2]) && (*(ulonglong *)(pcVar11 + 0x30) == param_4)) {
          uVar10 = 0;
          do {
            if (param_4 == uVar10) {
              lVar12 = 0x30;
              goto LAB_000368bc;
            }
            pbVar1 = (byte *)(*(longlong *)(pcVar11 + 0x28) + uVar10);
            pbVar2 = (byte *)(param_3 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        if ((-1 < pcVar11[3]) && (*(ulonglong *)(pcVar11 + 0x40) == param_4)) {
          uVar10 = 0;
          do {
            if (param_4 == uVar10) {
              lVar12 = 0x48;
              goto LAB_000368bc;
            }
            pbVar1 = (byte *)(*(longlong *)(pcVar11 + 0x38) + uVar10);
            pbVar2 = (byte *)(param_3 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        if ((-1 < pcVar11[4]) && (*(ulonglong *)(pcVar11 + 0x50) == param_4)) {
          uVar10 = 0;
          do {
            if (param_4 == uVar10) {
              lVar12 = 0x60;
              goto LAB_000368bc;
            }
            pbVar1 = (byte *)(*(longlong *)(pcVar11 + 0x48) + uVar10);
            pbVar2 = (byte *)(param_3 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        if ((-1 < pcVar11[5]) && (*(ulonglong *)(pcVar11 + 0x60) == param_4)) {
          uVar10 = 0;
          do {
            if (param_4 == uVar10) {
              lVar12 = 0x78;
              goto LAB_000368bc;
            }
            pbVar1 = (byte *)(*(longlong *)(pcVar11 + 0x58) + uVar10);
            pbVar2 = (byte *)(param_3 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        if ((-1 < pcVar11[6]) && (*(ulonglong *)(pcVar11 + 0x70) == param_4)) {
          uVar10 = 0;
          do {
            if (param_4 == uVar10) {
              lVar12 = 0x90;
              goto LAB_000368bc;
            }
            pbVar1 = (byte *)(*(longlong *)(pcVar11 + 0x68) + uVar10);
            pbVar2 = (byte *)(param_3 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        if ((-1 < pcVar11[7]) && (*(ulonglong *)(pcVar11 + 0x80) == param_4)) {
          uVar10 = 0;
          do {
            if (param_4 == uVar10) {
              lVar12 = 0xa8;
              goto LAB_000368bc;
            }
            pbVar1 = (byte *)(*(longlong *)(pcVar11 + 0x78) + uVar10);
            pbVar2 = (byte *)(param_3 + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar7);
    } while (lVar12 != uVar3 + (uVar3 == 0));
    goto LAB_0003690a;
  }
  if (uVar3 != 0) {
    uVar7 = 0;
LAB_000360d8:
    uVar9 = *(ulonglong *)(*(longlong *)(pcVar6 + uVar7 * 8) + 0x18);
    if (uVar9 != 0xffffffffffffffff) {
      if ((0x1f < uVar9) ||
         (pcVar11 = *(char **)(*(longlong *)(pcVar6 + uVar7 * 8) + 0x10), pcVar11 == (char *)0x0)) {
LAB_00036973:
        *param_1 = -1;
        return;
      }
      uVar7 = uVar7 + 1;
      lVar12 = uVar9 + 1;
      while( true ) {
        if (((-1 < *pcVar11) && (*(ulonglong *)(pcVar11 + 0x10) == param_4)) &&
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar11 + 8),param_4,param_3), cVar5 != '\0'))
        goto LAB_0003684f;
        if (((-1 < pcVar11[1]) && (*(ulonglong *)(pcVar11 + 0x20) == param_4)) &&
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar11 + 0x18),param_4,param_3,param_4),
           cVar5 != '\0')) break;
        if (((-1 < pcVar11[2]) && (*(ulonglong *)(pcVar11 + 0x30) == param_4)) &&
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar11 + 0x28),param_4,param_3,param_4),
           cVar5 != '\0')) {
          lVar12 = 0x30;
          goto LAB_000368bc;
        }
        if (((-1 < pcVar11[3]) && (*(ulonglong *)(pcVar11 + 0x40) == param_4)) &&
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar11 + 0x38),param_4,param_3,param_4),
           cVar5 != '\0')) {
          lVar12 = 0x48;
          goto LAB_000368bc;
        }
        if (((-1 < pcVar11[4]) && (*(ulonglong *)(pcVar11 + 0x50) == param_4)) &&
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar11 + 0x48),param_4,param_3,param_4),
           cVar5 != '\0')) {
          lVar12 = 0x60;
          goto LAB_000368bc;
        }
        if (((-1 < pcVar11[5]) && (*(ulonglong *)(pcVar11 + 0x60) == param_4)) &&
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar11 + 0x58),param_4,param_3,param_4),
           cVar5 != '\0')) {
          lVar12 = 0x78;
          goto LAB_000368bc;
        }
        if (((-1 < pcVar11[6]) && (*(ulonglong *)(pcVar11 + 0x70) == param_4)) &&
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar11 + 0x68),param_4,param_3,param_4),
           cVar5 != '\0')) {
          lVar12 = 0x90;
          goto LAB_000368bc;
        }
        if (((-1 < pcVar11[7]) && (*(ulonglong *)(pcVar11 + 0x80) == param_4)) &&
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar11 + 0x78),param_4,param_3,param_4),
           cVar5 != '\0')) {
          lVar12 = 0xa8;
          goto LAB_000368bc;
        }
        pcVar11 = pcVar11 + 0x148;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) goto LAB_0003627f;
      }
      lVar12 = 0x18;
LAB_000368bc:
      lVar4 = *(longlong *)(pcVar11 + lVar12 + 0x88);
      pcVar6 = pcVar11;
      goto joined_r0x0003675b;
    }
    goto LAB_0003690a;
  }
  if (((*pcVar6 < '\0') || (*(ulonglong *)(pcVar6 + 0x10) != param_4)) ||
     (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                        (*(undefined8 *)(pcVar6 + 8),param_4,param_3), cVar5 == '\0')) {
    if (((pcVar6[1] < '\0') || (*(ulonglong *)(pcVar6 + 0x20) != param_4)) ||
       (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                          (*(undefined8 *)(pcVar6 + 0x18),param_4,param_3,param_4), cVar5 == '\0'))
    {
      if (((pcVar6[2] < '\0') || (*(ulonglong *)(pcVar6 + 0x30) != param_4)) ||
         (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                            (*(undefined8 *)(pcVar6 + 0x28),param_4,param_3,param_4), cVar5 == '\0')
         ) {
        if (((pcVar6[3] < '\0') || (*(ulonglong *)(pcVar6 + 0x40) != param_4)) ||
           (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)(pcVar6 + 0x38),param_4,param_3,param_4),
           cVar5 == '\0')) {
          if (((pcVar6[4] < '\0') || (*(ulonglong *)(pcVar6 + 0x50) != param_4)) ||
             (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                                (*(undefined8 *)(pcVar6 + 0x48),param_4,param_3,param_4),
             cVar5 == '\0')) {
            if (((pcVar6[5] < '\0') || (*(ulonglong *)(pcVar6 + 0x60) != param_4)) ||
               (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                                  (*(undefined8 *)(pcVar6 + 0x58),param_4,param_3,param_4),
               cVar5 == '\0')) {
              if (((pcVar6[6] < '\0') || (*(ulonglong *)(pcVar6 + 0x70) != param_4)) ||
                 (cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                                    (*(undefined8 *)(pcVar6 + 0x68),param_4,param_3,param_4),
                 cVar5 == '\0')) {
                if ((pcVar6[7] < '\0') || (*(ulonglong *)(pcVar6 + 0x80) != param_4))
                goto LAB_0003690a;
                cVar5 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                                  (*(undefined8 *)(pcVar6 + 0x78),param_4,param_3,param_4);
                lVar12 = 0xa8;
                if (cVar5 == '\0') goto LAB_0003690a;
                goto LAB_00036855;
              }
              lVar12 = 0x90;
              lVar4 = *(longlong *)(pcVar6 + 0x118);
            }
            else {
              lVar12 = 0x78;
              lVar4 = *(longlong *)(pcVar6 + 0x100);
            }
          }
          else {
            lVar12 = 0x60;
            lVar4 = *(longlong *)(pcVar6 + 0xe8);
          }
        }
        else {
          lVar12 = 0x48;
          lVar4 = *(longlong *)(pcVar6 + 0xd0);
        }
      }
      else {
        lVar12 = 0x30;
        lVar4 = *(longlong *)(pcVar6 + 0xb8);
      }
    }
    else {
      lVar12 = 0x18;
      lVar4 = *(longlong *)(pcVar6 + 0xa0);
    }
  }
  else {
    lVar12 = 0;
    lVar4 = *(longlong *)(pcVar6 + 0x88);
  }
  goto joined_r0x0003675b;
LAB_0003627f:
  if (uVar7 == uVar3) goto LAB_0003690a;
  goto LAB_000360d8;
LAB_0003684f:
  lVar12 = 0;
  pcVar6 = pcVar11;
LAB_00036855:
  lVar4 = *(longlong *)(pcVar6 + lVar12 + 0x88);
joined_r0x0003675b:
  if (((lVar4 != 0) && (*(longlong *)(pcVar6 + lVar12 + 0x90) != 0)) &&
     (*(longlong *)(lVar4 + 8) - 1U < 0x200)) {
    (*(code *)PTR_from_utf8_000c3bd8)();
    if (local_48 == 1) {
      *param_1 = -1;
      return;
    }
    uVar13 = local_38 == 0;
    if (-1 < local_38) goto LAB_00036939;
    while( true ) {
      uVar13 = 1;
      (*(code *)PTR_handle_error_000c3a98)();
LAB_00036939:
      if ((bool)uVar13) break;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar12 = (*(code *)PTR___rust_alloc_000c3a90)();
      if (lVar12 != 0) {
        (*(code *)PTR_memcpy_000c3aa8)();
LAB_00036986:
        *param_1 = local_38;
        param_1[1] = lVar12;
        param_1[2] = local_38;
        return;
      }
    }
    lVar12 = 1;
    goto LAB_00036986;
  }
LAB_0003690a:
  *param_1 = -1;
  return;
}


