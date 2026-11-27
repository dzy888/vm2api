// 001c0200 new_with_init_block

/* <polyval[1df58e1208c50bb2]::backend::autodetect::Polyval>::new_with_init_block */

void __rustcall
<polyval[1df58e1208c50bb2]::backend::autodetect::Polyval>::new_with_init_block
          (undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*PTR_STORAGE_0021a3c8 != '\x01') {
    if (*PTR_STORAGE_0021a3c8 != -1) goto LAB_001c025d;
    cVar2 = polyval[1df58e1208c50bb2]::backend::autodetect::mul_intrinsics::init_get::init_inner();
    if (cVar2 == '\0') goto LAB_001c025d;
  }
  param_3 = param_3 >> 0x38 | (param_3 & 0xff000000000000) >> 0x28 |
            (param_3 & 0xff0000000000) >> 0x18 | (param_3 & 0xff00000000) >> 8 |
            (param_3 & 0xff000000) << 8 | (param_3 & 0xff0000) << 0x18 | (param_3 & 0xff00) << 0x28
            | param_3 << 0x38;
  param_4 = param_4 >> 0x38 | (param_4 & 0xff000000000000) >> 0x28 |
            (param_4 & 0xff0000000000) >> 0x18 | (param_4 & 0xff00000000) >> 8 |
            (param_4 & 0xff000000) << 8 | (param_4 & 0xff0000) << 0x18 | (param_4 & 0xff00) << 0x28
            | param_4 << 0x38;
LAB_001c025d:
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[3] = param_3;
  param_1[2] = param_4;
  return;
}


