// 006c3580 set_red

/* <http[56314f485c23ccf6]::header::map::Danger>::set_red */

void __rustcall
<http[56314f485c23ccf6]::header::map::Danger>::set_red
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *in_FS_OFFSET;
  
  lVar1 = *in_FS_OFFSET;
  if (*(char *)(lVar1 + -0x28) == '\x01') {
    lVar2 = *(longlong *)(lVar1 + -0x38);
    param_3 = *(undefined8 *)(lVar1 + -0x30);
  }
  else {
    lVar2 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(undefined8 *)(lVar1 + -0x30) = param_3;
    *(undefined1 *)(lVar1 + -0x28) = 1;
  }
  *(longlong *)(lVar1 + -0x38) = lVar2 + 1;
  *param_1 = 2;
  param_1[1] = lVar2;
  param_1[2] = param_3;
  return;
}


