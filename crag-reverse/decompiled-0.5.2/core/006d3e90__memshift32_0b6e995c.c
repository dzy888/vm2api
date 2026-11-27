// 006d3e90 memshift32

/* aes[8e0128500682d16e]::soft::fixslice::memshift32 */

undefined8 __rustcall
aes[8e0128500682d16e]::soft::fixslice::memshift32
          (longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (param_3 + 7 < param_2) {
    if (param_3 + 0xf < param_2) {
      *(undefined8 *)(param_1 + 0x78 + param_3 * 8) = *(undefined8 *)(param_1 + 0x38 + param_3 * 8);
      if ((((param_2 <= param_3 + 6) ||
           (*(undefined8 *)(param_1 + 0x70 + param_3 * 8) =
                 *(undefined8 *)(param_1 + 0x30 + param_3 * 8), param_2 <= param_3 + 5)) ||
          (*(undefined8 *)(param_1 + 0x68 + param_3 * 8) =
                *(undefined8 *)(param_1 + 0x28 + param_3 * 8), param_2 <= param_3 + 4)) ||
         (((*(undefined8 *)(param_1 + 0x60 + param_3 * 8) =
                 *(undefined8 *)(param_1 + 0x20 + param_3 * 8), param_2 <= param_3 + 3 ||
           (*(undefined8 *)(param_1 + 0x58 + param_3 * 8) =
                 *(undefined8 *)(param_1 + 0x18 + param_3 * 8), param_2 <= param_3 + 2)) ||
          ((*(undefined8 *)(param_1 + 0x50 + param_3 * 8) =
                 *(undefined8 *)(param_1 + 0x10 + param_3 * 8), param_2 <= param_3 + 1 ||
           (*(undefined8 *)(param_1 + 0x48 + param_3 * 8) =
                 *(undefined8 *)(param_1 + 8 + param_3 * 8), param_2 <= param_3))))))
      goto LAB_006d3f5b;
      if (param_3 + 8 < param_2) {
        *(undefined8 *)(param_1 + 0x40 + param_3 * 8) = *(undefined8 *)(param_1 + param_3 * 8);
        return in_RAX;
      }
    }
    (*(code *)PTR_panic_bounds_check_00799520)
              (param_4,&PTR_s__vendor_aes_0_8_4_src_soft_fixsl_00793338);
  }
LAB_006d3f5b:
  (*(code *)PTR_panic_bounds_check_00799520)
            (param_4,&PTR_s__vendor_aes_0_8_4_src_soft_fixsl_00793320);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


