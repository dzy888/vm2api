// 006fa550 new

/* <tokio[d7d91d38da47d894]::io::util::copy::CopyBuffer>::new */

longlong * __rustcall
<tokio[d7d91d38da47d894]::io::util::copy::CopyBuffer>::new(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = param_2 == 0;
  if (-1 < param_2) goto LAB_006fa56c;
  uVar3 = true;
  plVar1 = (longlong *)0x0;
  while( true ) {
    param_1 = plVar1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_006fa56c:
    if ((bool)uVar3) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
    uVar3 = lVar2 == 0;
    plVar1 = (longlong *)0x1;
    if (!(bool)uVar3) {
LAB_006fa59a:
      *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
      *(undefined8 *)((longlong)param_1 + 0x22) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = lVar2;
      param_1[1] = param_2;
      return param_1;
    }
  }
  lVar2 = 1;
  goto LAB_006fa59a;
}


