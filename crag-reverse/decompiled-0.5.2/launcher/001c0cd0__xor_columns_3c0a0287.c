// 001c0cd0 xor_columns

/* aes[8e0128500682d16e]::soft::fixslice::xor_columns */

void __rustcall
aes[8e0128500682d16e]::soft::fixslice::xor_columns
          (longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar3 = param_4;
  if (param_3 - param_4 < param_2) {
    if (param_2 <= param_3) goto LAB_001c0fae;
    uVar3 = param_5 & 0xffffffff;
    uVar5 = *(ulonglong *)(param_1 + param_3 * 8);
    bVar4 = (byte)uVar3;
    uVar5 = (uVar5 >> (bVar4 & 0x3f) | uVar5 << 0x40 - (bVar4 & 0x3f)) & 0xf000f000f000f ^
            *(ulonglong *)(param_1 + (param_3 - param_4) * 8);
    *(ulonglong *)(param_1 + param_3 * 8) =
         (uVar5 & 0xf000f000f000f) << 0xc ^ uVar5 ^
         (uVar5 & 0xff00ff00ff00ff) << 8 ^ (uVar5 & 0xfff0fff0fff0fff) << 4;
    uVar5 = (param_3 + 1) - param_4;
    if (uVar5 < param_2) {
      if (param_2 <= param_3 + 1) goto LAB_001c0fae;
      uVar1 = *(ulonglong *)(param_1 + 8 + param_3 * 8);
      uVar5 = (uVar1 >> (bVar4 & 0x3f) | uVar1 << 0x40 - (bVar4 & 0x3f)) & 0xf000f000f000f ^
              *(ulonglong *)(param_1 + uVar5 * 8);
      *(ulonglong *)(param_1 + 8 + param_3 * 8) =
           (uVar5 & 0xf000f000f000f) << 0xc ^ uVar5 ^
           (uVar5 & 0xff00ff00ff00ff) << 8 ^ (uVar5 & 0xfff0fff0fff0fff) << 4;
      uVar5 = (param_3 + 2) - param_4;
      if (uVar5 < param_2) {
        if (param_2 <= param_3 + 2) goto LAB_001c0fae;
        uVar1 = *(ulonglong *)(param_1 + 0x10 + param_3 * 8);
        uVar5 = (uVar1 >> (bVar4 & 0x3f) | uVar1 << 0x40 - (bVar4 & 0x3f)) & 0xf000f000f000f ^
                *(ulonglong *)(param_1 + uVar5 * 8);
        *(ulonglong *)(param_1 + 0x10 + param_3 * 8) =
             (uVar5 & 0xf000f000f000f) << 0xc ^ uVar5 ^
             (uVar5 & 0xff00ff00ff00ff) << 8 ^ (uVar5 & 0xfff0fff0fff0fff) << 4;
        uVar5 = (param_3 + 3) - param_4;
        if (uVar5 < param_2) {
          if (param_2 <= param_3 + 3) goto LAB_001c0fae;
          uVar1 = *(ulonglong *)(param_1 + 0x18 + param_3 * 8);
          uVar5 = (uVar1 >> (bVar4 & 0x3f) | uVar1 << 0x40 - (bVar4 & 0x3f)) & 0xf000f000f000f ^
                  *(ulonglong *)(param_1 + uVar5 * 8);
          *(ulonglong *)(param_1 + 0x18 + param_3 * 8) =
               (uVar5 & 0xf000f000f000f) << 0xc ^ uVar5 ^
               (uVar5 & 0xff00ff00ff00ff) << 8 ^ (uVar5 & 0xfff0fff0fff0fff) << 4;
          uVar5 = (param_3 + 4) - param_4;
          if (uVar5 < param_2) {
            if (param_2 <= param_3 + 4) goto LAB_001c0fae;
            uVar1 = *(ulonglong *)(param_1 + 0x20 + param_3 * 8);
            uVar5 = (uVar1 >> (bVar4 & 0x3f) | uVar1 << 0x40 - (bVar4 & 0x3f)) & 0xf000f000f000f ^
                    *(ulonglong *)(param_1 + uVar5 * 8);
            *(ulonglong *)(param_1 + 0x20 + param_3 * 8) =
                 (uVar5 & 0xf000f000f000f) << 0xc ^ uVar5 ^
                 (uVar5 & 0xff00ff00ff00ff) << 8 ^ (uVar5 & 0xfff0fff0fff0fff) << 4;
            uVar5 = (param_3 + 5) - param_4;
            if (uVar5 < param_2) {
              if (param_2 <= param_3 + 5) goto LAB_001c0fae;
              uVar1 = *(ulonglong *)(param_1 + 0x28 + param_3 * 8);
              uVar5 = (uVar1 >> (bVar4 & 0x3f) | uVar1 << 0x40 - (bVar4 & 0x3f)) & 0xf000f000f000f ^
                      *(ulonglong *)(param_1 + uVar5 * 8);
              *(ulonglong *)(param_1 + 0x28 + param_3 * 8) =
                   (uVar5 & 0xf000f000f000f) << 0xc ^ uVar5 ^
                   (uVar5 & 0xff00ff00ff00ff) << 8 ^ (uVar5 & 0xfff0fff0fff0fff) << 4;
              uVar5 = (param_3 + 6) - param_4;
              if (uVar5 < param_2) {
                if (param_2 <= param_3 + 6) goto LAB_001c0fae;
                uVar1 = *(ulonglong *)(param_1 + 0x30 + param_3 * 8);
                uVar5 = (uVar1 >> (bVar4 & 0x3f) | uVar1 << 0x40 - (bVar4 & 0x3f)) & 0xf000f000f000f
                        ^ *(ulonglong *)(param_1 + uVar5 * 8);
                *(ulonglong *)(param_1 + 0x30 + param_3 * 8) =
                     (uVar5 & 0xf000f000f000f) << 0xc ^ uVar5 ^
                     (uVar5 & 0xff00ff00ff00ff) << 8 ^ (uVar5 & 0xfff0fff0fff0fff) << 4;
                param_4 = (param_3 + 7) - param_4;
                if (param_4 < param_2) {
                  if (param_3 + 7 < param_2) {
                    uVar3 = *(ulonglong *)(param_1 + 0x38 + param_3 * 8);
                    uVar3 = (uVar3 >> (bVar4 & 0x3f) | uVar3 << 0x40 - (bVar4 & 0x3f)) &
                            0xf000f000f000f ^ *(ulonglong *)(param_1 + param_4 * 8);
                    *(ulonglong *)(param_1 + 0x38 + param_3 * 8) =
                         (uVar3 & 0xf000f000f000f) << 0xc ^ uVar3 ^
                         (uVar3 & 0xff00ff00ff00ff) << 8 ^ (uVar3 & 0xfff0fff0fff0fff) << 4;
                    return;
                  }
                  goto LAB_001c0fae;
                }
              }
            }
          }
        }
      }
    }
  }
  (*(code *)PTR_panic_bounds_check_0021a020)(uVar3,&PTR_s__vendor_aes_0_8_4_src_soft_fixsl_00217058)
  ;
LAB_001c0fae:
  (*(code *)PTR_panic_bounds_check_0021a020)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


