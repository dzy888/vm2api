// 00582aa0 recv

/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::recv */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
::recv(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong in_FS_OFFSET;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
LAB_00582ad0:
    cVar2 = *(char *)(in_FS_OFFSET + -0xf3);
    if (*(char *)(in_FS_OFFSET + -0xf4) == '\x01') {
      if (cVar2 == '\0') {
        (*(code *)PTR_register_waker_00799e58)();
        (*(code *)PTR_drop_00799e50)();
        *param_1 = 0xfffffffffffffffe;
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
    goto LAB_00582ad0;
  }
  lVar1 = *param_2;
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
  ::pop(&local_100,lVar1 + 0x1a0,lVar1 + 0x80);
  if (CONCAT44(uStack_fc,local_100) != -1) {
    if (CONCAT44(uStack_fc,local_100) != -2) {
      (*(code *)PTR_add_permit_00799da0)();
      param_1[0xc] = local_a0;
      param_1[10] = local_b0;
      param_1[0xb] = uStack_a8;
      param_1[8] = local_c0;
      param_1[9] = uStack_b8;
      local_98 = local_100;
      uStack_94 = uStack_fc;
      uStack_90 = uStack_f8;
      uStack_8c = uStack_f4;
      local_88 = local_f0;
      uStack_84 = uStack_ec;
      uStack_80 = uStack_e8;
      uStack_7c = uStack_e4;
      local_78 = local_e0;
      uStack_74 = uStack_dc;
      uStack_70 = uStack_d8;
      uStack_6c = uStack_d4;
      local_68 = local_d0;
      uStack_64 = uStack_cc;
      uStack_60 = uStack_c8;
      uStack_5c = uStack_c4;
LAB_00582c7e:
      *(undefined4 *)(param_1 + 6) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_64;
      *(undefined4 *)(param_1 + 7) = uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_5c;
      *(undefined4 *)(param_1 + 4) = local_78;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_74;
      *(undefined4 *)(param_1 + 5) = uStack_70;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_6c;
      *(undefined4 *)(param_1 + 2) = local_88;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_84;
      *(undefined4 *)(param_1 + 3) = uStack_80;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_7c;
      *(undefined4 *)param_1 = local_98;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_94;
      *(undefined4 *)(param_1 + 1) = uStack_90;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_8c;
      goto LAB_00582c8d;
    }
    (*(code *)PTR_register_by_ref_00799738)();
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
    ::pop(&local_98,lVar1 + 0x1a0,lVar1 + 0x80);
    if (CONCAT44(uStack_94,local_98) != -1) {
      if (CONCAT44(uStack_94,local_98) != -2) {
        (*(code *)PTR_add_permit_00799da0)();
        param_1[0xc] = local_38;
        param_1[10] = local_48;
        param_1[0xb] = uStack_40;
        param_1[8] = local_58;
        param_1[9] = uStack_50;
        goto LAB_00582c7e;
      }
      if ((*(char *)(lVar1 + 0x1b8) == '\0') ||
         (cVar2 = (*(code *)PTR_is_idle_00799110)(), cVar2 == '\0')) {
        *param_1 = 0xfffffffffffffffe;
        goto LAB_00582c8d;
      }
    }
  }
  *param_1 = 0xffffffffffffffff;
LAB_00582c8d:
  (*(code *)PTR_drop_00799e50)();
  return param_1;
}


