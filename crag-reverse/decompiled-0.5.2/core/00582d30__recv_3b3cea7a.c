// 00582d30 recv

/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>::recv */

uint * __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>
::recv(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong in_FS_OFFSET;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
LAB_00582d5d:
    cVar2 = *(char *)(in_FS_OFFSET + -0xf3);
    if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
      if (cVar2 == '\0') {
        (*(code *)PTR_register_waker_00799e58)();
        (*(code *)PTR_drop_00799e50)();
        *(undefined1 *)param_1 = 0xfe;
        return param_1;
      }
      cVar2 = cVar2 + -1;
    }
    *(char *)(in_FS_OFFSET + -0xf3) = cVar2;
    (*(code *)PTR_drop_00799e50)();
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    goto LAB_00582d5d;
  }
  lVar1 = *param_2;
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::pop
            (&local_70,lVar1 + 0x1a0,lVar1 + 0x80);
  if ((local_70 & 0xff) != 0xff) {
    if ((local_70 & 0xff) != 0xfe) {
      (*(code *)PTR_add_permit_00799728)();
      local_50 = local_70;
      uStack_4c = uStack_6c;
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      local_40 = local_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
LAB_00582ea4:
      param_1[4] = local_40;
      param_1[5] = uStack_3c;
      param_1[6] = uStack_38;
      param_1[7] = uStack_34;
      *param_1 = local_50;
      param_1[1] = uStack_4c;
      param_1[2] = uStack_48;
      param_1[3] = uStack_44;
      goto LAB_00582eab;
    }
    (*(code *)PTR_register_by_ref_00799738)();
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::pop
              (&local_50,lVar1 + 0x1a0,lVar1 + 0x80);
    if ((local_50 & 0xff) != 0xff) {
      if ((local_50 & 0xff) != 0xfe) {
        (*(code *)PTR_add_permit_00799728)();
        goto LAB_00582ea4;
      }
      if ((*(char *)(lVar1 + 0x1b8) == '\0') ||
         (cVar2 = (*(code *)PTR_is_idle_00799720)(), cVar2 == '\0')) {
        *(undefined1 *)param_1 = 0xfe;
        goto LAB_00582eab;
      }
    }
  }
  *(undefined1 *)param_1 = 0xff;
LAB_00582eab:
  (*(code *)PTR_drop_00799e50)();
  return param_1;
}


