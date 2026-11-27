// 000b7450 slice_error_fail_rt

/* core[c0acaeba6ab4c2e0]::str::slice_error_fail_rt */

void __rustcall
core[c0acaeba6ab4c2e0]::str::slice_error_fail_rt
          (undefined *param_1,undefined8 ****param_2,undefined8 ****param_3,undefined8 ****param_4,
          undefined *param_5)

{
  byte bVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****local_68;
  undefined8 ****local_60;
  undefined8 ****local_58;
  undefined8 ****local_50;
  undefined8 ****local_48;
  undefined8 ****local_40;
  undefined *local_38;
  undefined8 ****local_30;
  undefined *local_28;
  undefined8 ****local_20;
  code *local_18;
  uint local_c;
  
  local_50 = param_3;
  local_48 = param_4;
  local_58 = param_2;
  if (param_3 <= param_2) {
    if (param_2 < param_4) {
LAB_000b74a6:
      do {
        local_40 = &local_48;
        local_38 = PTR_fmt_000c3b68;
        param_4 = &local_58;
        local_28 = PTR_fmt_000c3b68;
        param_1 = &DAT_0000b762;
        param_2 = &local_40;
        local_30 = param_4;
        (*(code *)PTR_panic_fmt_000c3e90)(param_4,param_5);
LAB_000b74d9:
      } while (-0x41 < (char)param_1[(longlong)param_4]);
      if ((char)(param_1 + -1)[(longlong)param_4] < -0x40) {
        ppppuVar5 = (undefined8 ****)((longlong)param_4 - 3);
        if (-0x41 < (char)(param_1 + -2)[(longlong)param_4]) {
          ppppuVar5 = (undefined8 ****)((longlong)param_4 - 2);
        }
      }
      else {
        ppppuVar5 = (undefined8 ****)((longlong)param_4 - 1);
      }
      ppppuVar7 = (undefined8 ****)((longlong)param_4 + 1U);
      if ((undefined8 ****)((longlong)param_4 + 1U) < param_2) {
        ppppuVar7 = param_2;
      }
      ppppuVar3 = param_4;
      do {
        if (param_2 <= ppppuVar3) goto LAB_000b77d8;
        if (-0x41 < (char)param_1[(longlong)ppppuVar3]) goto LAB_000b753a;
        ppppuVar3 = (undefined8 ****)((longlong)ppppuVar3 + 1);
      } while (ppppuVar3 < param_2);
      ppppuVar3 = ppppuVar7;
LAB_000b753a:
      uVar4 = (uint)CONCAT71((int7)((ulonglong)param_4 >> 8),ppppuVar3 < ppppuVar5);
      local_68 = ppppuVar5;
      local_60 = ppppuVar3;
      if (ppppuVar3 <= param_2 && ppppuVar3 >= ppppuVar5) goto LAB_000b755d;
      do {
        uVar4 = (uint)ppppuVar3;
        ppppuVar3 = (undefined8 ****)(*(code *)PTR_slice_error_fail_000c3fc8)();
LAB_000b755d:
      } while ((ppppuVar5 != param_2) &&
              (((ppppuVar5 != (undefined8 ****)0x0 && ((char)param_1[(longlong)ppppuVar5] < -0x40))
               || ((ppppuVar3 != param_2 && ((char)param_1[(longlong)ppppuVar3] < -0x40))))));
      if (ppppuVar5 == ppppuVar3) {
LAB_000b765a:
        param_1 = param_5;
        param_5 = param_1;
        (*(code *)PTR_unwrap_failed_000c3b08)();
        goto LAB_000b7663;
      }
      bVar1 = param_1[(longlong)ppppuVar5];
      local_c = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar4 = bVar1 & 0x1f;
        if (bVar1 < 0xe0) {
          local_c = uVar4 << 6 | (byte)(param_1 + 1)[(longlong)ppppuVar5] & 0x3f;
          uVar4 = local_c;
        }
        else {
          local_c = (byte)(param_1 + 2)[(longlong)ppppuVar5] & 0x3f |
                    ((byte)(param_1 + 1)[(longlong)ppppuVar5] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            uVar4 = uVar4 << 0xc;
            local_c = local_c | uVar4;
          }
          else {
            uVar4 = (bVar1 & 7) << 0x12;
            local_c = (byte)(param_1 + 3)[(longlong)ppppuVar5] & 0x3f | local_c << 6 | uVar4;
          }
        }
      }
      local_40 = &local_48;
      local_38 = PTR_fmt_000c3b68;
      local_30 = (undefined8 ****)&local_c;
      local_28 = PTR_fmt_000c4780;
      local_20 = &local_68;
      local_18 = <core[c0acaeba6ab4c2e0]::ops::range::Range<usize>as_core[c0acaeba6ab4c2e0]::fmt::Debug>
                 ::fmt;
      uVar6 = (uint)&local_40;
      (*(code *)PTR_panic_fmt_000c3e90)();
LAB_000b771b:
      local_c = uVar6 | uVar4 << 0xc;
    }
    else {
      if (param_4 < param_3) goto LAB_000b77a5;
      if ((param_3 == (undefined8 ****)0x0 || param_2 <= param_3) ||
         (-0x41 < (char)param_1[(longlong)param_3])) {
        if (param_4 != (undefined8 ****)0x0 && param_4 < param_2) goto LAB_000b74d9;
        goto LAB_000b74a6;
      }
      if ((char)(param_1 + -1)[(longlong)param_3] < -0x40) {
        ppppuVar5 = (undefined8 ****)((longlong)param_3 - 3);
        if (-0x41 < (char)(param_1 + -2)[(longlong)param_3]) {
          ppppuVar5 = (undefined8 ****)((longlong)param_3 - 2);
        }
      }
      else {
        ppppuVar5 = (undefined8 ****)((longlong)param_3 - 1);
      }
      ppppuVar7 = (undefined8 ****)((longlong)param_3 + 1U);
      if ((undefined8 ****)((longlong)param_3 + 1U) < param_2) {
        ppppuVar7 = param_2;
      }
      do {
        if (param_2 <= param_3) goto LAB_000b77ef;
        if (-0x41 < (char)param_1[(longlong)param_3]) goto LAB_000b761a;
        param_3 = (undefined8 ****)((longlong)param_3 + 1);
      } while (param_3 < param_2);
      param_3 = ppppuVar7;
LAB_000b761a:
      local_68 = ppppuVar5;
      local_60 = param_3;
      if (param_3 <= param_2 && ppppuVar5 <= param_3) goto LAB_000b763a;
      do {
        (*(code *)PTR_slice_error_fail_000c3fc8)();
LAB_000b763a:
      } while ((ppppuVar5 != param_2) &&
              (((ppppuVar5 != (undefined8 ****)0x0 && ((char)param_1[(longlong)ppppuVar5] < -0x40))
               || ((param_3 != param_2 && ((char)param_1[(longlong)param_3] < -0x40))))));
      if (ppppuVar5 == param_3) goto LAB_000b765a;
LAB_000b7663:
      bVar1 = param_1[(longlong)ppppuVar5];
      local_c = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar4 = bVar1 & 0x1f;
        if (bVar1 < 0xe0) {
          local_c = uVar4 << 6 | (byte)(param_1 + 1)[(longlong)ppppuVar5] & 0x3f;
        }
        else {
          uVar6 = (byte)(param_1 + 2)[(longlong)ppppuVar5] & 0x3f |
                  ((byte)(param_1 + 1)[(longlong)ppppuVar5] & 0x3f) << 6;
          if (bVar1 < 0xf0) goto LAB_000b771b;
          local_c = (byte)(param_1 + 3)[(longlong)ppppuVar5] & 0x3f | uVar6 << 6 |
                    (bVar1 & 7) << 0x12;
        }
      }
    }
    local_40 = &local_50;
    local_38 = PTR_fmt_000c3b68;
    local_30 = (undefined8 ****)&local_c;
    local_28 = PTR_fmt_000c4780;
    local_20 = &local_68;
    local_18 = <core[c0acaeba6ab4c2e0]::ops::range::Range<usize>as_core[c0acaeba6ab4c2e0]::fmt::Debug>
               ::fmt;
    (*(code *)PTR_panic_fmt_000c3e90)();
  }
  local_40 = &local_50;
  local_38 = PTR_fmt_000c3b68;
  local_30 = &local_58;
  local_28 = PTR_fmt_000c3b68;
  (*(code *)PTR_panic_fmt_000c3e90)(local_30,param_5);
LAB_000b77a5:
  local_40 = &local_50;
  local_38 = PTR_fmt_000c3b68;
  local_30 = &local_48;
  local_28 = PTR_fmt_000c3b68;
  (*(code *)PTR_panic_fmt_000c3e90)(local_30,param_5);
LAB_000b77d8:
  (*(code *)PTR_panic_bounds_check_000c3dd8)();
LAB_000b77ef:
  (*(code *)PTR_panic_bounds_check_000c3dd8)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


