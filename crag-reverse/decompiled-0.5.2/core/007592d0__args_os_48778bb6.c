// 007592d0 args_os

/* std[6c98fd8553dbae28]::env::args_os */

longlong * __rustcall std[6c98fd8553dbae28]::env::args_os(longlong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  lVar3 = sys::args::unix::imp::ARGV;
  uVar2 = sys::args::unix::imp::ARGC;
  if (sys::args::unix::imp::ARGV != 0) {
    if (sys::args::unix::imp::ARGC < 0x555555555555556) {
      if (sys::args::unix::imp::ARGC * 0x18 == 0) {
        lVar7 = 8;
        uVar4 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar7 = (*(code *)PTR___rust_alloc_00799000)();
        plVar9 = (longlong *)&DAT_00000008;
        uVar4 = uVar2;
        if (lVar7 == 0) goto LAB_00759315;
      }
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        lVar10 = 2;
        uVar8 = 0;
        do {
          if (*(longlong *)(lVar3 + uVar8 * 8) == 0) goto LAB_00759324;
          lVar5 = (*(code *)PTR_strlen_0079aa38)();
          if (lVar5 == 0) {
            lVar6 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar6 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar6 == 0) {
              (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            (*(code *)PTR_memcpy_00799008)();
          }
          if (uVar8 == uVar4) {
            (*(code *)PTR_grow_one_0079a528)();
          }
          uVar8 = uVar8 + 1;
          *(longlong *)(lVar7 + -0x10 + lVar10 * 8) = lVar5;
          *(longlong *)(lVar7 + -8 + lVar10 * 8) = lVar6;
          *(longlong *)(lVar7 + lVar10 * 8) = lVar5;
          lVar10 = lVar10 + 3;
        } while (uVar2 != uVar8);
        uVar8 = uVar2;
      }
      goto LAB_00759324;
    }
    plVar9 = (longlong *)0x0;
LAB_00759315:
    (*(code *)PTR_handle_error_00798ff0)();
    param_1 = plVar9;
  }
  lVar7 = 8;
  uVar8 = 0;
  uVar4 = 0;
LAB_00759324:
  *param_1 = lVar7;
  param_1[1] = lVar7;
  param_1[2] = uVar4;
  param_1[3] = lVar7 + uVar8 * 0x18;
  return param_1;
}


