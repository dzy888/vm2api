// 00710420 with_capacity

/* <mio[4b4dae02747c797f]::event::events::Events>::with_capacity */

ulonglong * __rustcall
<mio[4b4dae02747c797f]::event::events::Events>::with_capacity(ulonglong *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xc),0);
  if (-1 < (longlong)uVar3 && SUB168(auVar1 * ZEXT816(0xc),8) == 0) goto LAB_00710452;
  puVar2 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar2;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = uVar3;
LAB_00710452:
    if (uVar3 == 0) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar4 = (*(code *)PTR___rust_alloc_00799000)();
    puVar2 = (ulonglong *)0x1;
    if (uVar4 != 0) {
LAB_00710488:
      *param_1 = param_2;
      param_1[1] = uVar4;
      param_1[2] = 0;
      return param_1;
    }
  }
  uVar4 = 1;
  param_2 = 0;
  goto LAB_00710488;
}


