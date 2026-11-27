// 00658750 poll

/* <&mut 
   tokio[d7d91d38da47d894]::process::ChildDropGuard<tokio[d7d91d38da47d894]::process::imp::Child> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

int * __rustcall
<&mut_tokio[d7d91d38da47d894]::process::ChildDropGuard<tokio[d7d91d38da47d894]::process::imp::Child>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(int *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong in_FS_OFFSET;
  
  lVar1 = *param_2;
  if (*(char *)(in_FS_OFFSET + -0xf0) != '\0') {
    if (*(char *)(in_FS_OFFSET + -0xf0) != '\x01') goto LAB_006587b7;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
  }
  cVar2 = *(char *)(in_FS_OFFSET + -0xf3);
  if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
    if (cVar2 == '\0') {
      (*(code *)PTR_register_waker_00799e58)();
      (*(code *)PTR_drop_00799e50)();
      *param_1 = 2;
      return param_1;
    }
    cVar2 = cVar2 + -1;
  }
  *(char *)(in_FS_OFFSET + -0xf3) = cVar2;
  (*(code *)PTR_drop_00799e50)();
LAB_006587b7:
  (*(code *)PTR_poll_0079a278)(param_4,param_3);
  if (*param_1 == 0) {
    *(undefined1 *)(lVar1 + 0x40) = 0;
  }
  (*(code *)PTR_drop_00799e50)();
  return param_1;
}


