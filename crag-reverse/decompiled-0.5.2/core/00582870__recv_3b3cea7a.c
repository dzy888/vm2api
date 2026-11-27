// 00582870 recv

/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<alloc[12e961f32105355]::string::String,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::recv */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
::recv(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong in_FS_OFFSET;
  undefined2 local_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
LAB_0058289d:
    cVar3 = *(char *)(in_FS_OFFSET + -0xf3);
    if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
      if (cVar3 == '\0') {
        (*(code *)PTR_register_waker_00799e58)();
        uStack_46 = 0;
        local_48 = 0;
        (*(code *)PTR_drop_00799e50)();
        *param_1 = 0xfffffffffffffffe;
        return param_1;
      }
      cVar3 = cVar3 + -1;
    }
    *(char *)(in_FS_OFFSET + -0xf3) = cVar3;
    uStack_46 = 0;
    local_48 = 0;
    (*(code *)PTR_drop_00799e50)();
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    goto LAB_0058289d;
  }
  lVar1 = *param_2;
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<alloc[12e961f32105355]::string::String>>::pop
            (&local_48,lVar1 + 0x1a0,lVar1 + 0x80);
  lVar2 = CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,local_48)));
  if (lVar2 != -1) {
    if (lVar2 != -2) {
      (*(code *)PTR_add_permit_00799da0)();
LAB_005829d4:
      param_1[2] = local_38;
      *(uint *)param_1 = CONCAT13(uStack_45,CONCAT12(uStack_46,local_48));
      *(undefined4 *)((longlong)param_1 + 4) = uStack_44;
      *(undefined4 *)(param_1 + 1) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
      goto LAB_005829ea;
    }
    (*(code *)PTR_register_by_ref_00799738)();
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<alloc[12e961f32105355]::string::String>>::pop
              (&local_48,lVar1 + 0x1a0,lVar1 + 0x80);
    lVar2 = CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,local_48)));
    if (lVar2 != -1) {
      if (lVar2 != -2) {
        (*(code *)PTR_add_permit_00799da0)();
        goto LAB_005829d4;
      }
      if ((*(char *)(lVar1 + 0x1b8) == '\0') ||
         (cVar3 = (*(code *)PTR_is_idle_00799110)(), cVar3 == '\0')) {
        *param_1 = 0xfffffffffffffffe;
        goto LAB_005829ea;
      }
    }
  }
  *param_1 = 0xffffffffffffffff;
LAB_005829ea:
  (*(code *)PTR_drop_00799e50)();
  return param_1;
}


