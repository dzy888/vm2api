// 0038d4b0 try_recv

/* <tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedReceiver<serde_json[dc3825464c436029]::value::Value>>::try_recv
    */

char * __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedReceiver<serde_json[dc3825464c436029]::value::Value>>
::try_recv(char *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_91;
  longlong local_90;
  char local_88;
  undefined8 local_87;
  undefined7 uStack_7f;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined7 uStack_60;
  undefined4 local_59;
  undefined4 uStack_55;
  undefined4 uStack_51;
  undefined4 uStack_4d;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x88);
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::pop
            (&local_88,lVar1 + 0x1a0,lVar1 + 0x80);
  if (local_88 != -1) {
    if (local_88 != -2) {
      uStack_55 = uStack_74;
      uStack_51 = uStack_70;
      uStack_4d = uStack_6c;
      uStack_68 = local_87;
      uStack_60 = uStack_7f;
      local_59 = uStack_78;
      (*(code *)PTR_add_permit_00799728)();
      *param_1 = local_88;
      *(undefined8 *)(param_1 + 1) = uStack_68;
      *(ulonglong *)(param_1 + 9) = CONCAT17((undefined1)local_59,uStack_60);
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_55,local_59);
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_4d,uStack_51);
      return param_1;
    }
    if (lVar2 != *(longlong *)(lVar1 + 0x1b0)) {
      uVar4 = extraout_RDX;
      (*(code *)PTR_wake_00799118)();
      local_40 = (*(code *)PTR_waker_00799730)();
      if (local_40 == 0) {
        (*(code *)PTR_unwrap_failed_00799028)
                  (&DAT_007877a0,&local_91,&PTR_s__vendor_tokio_1_54_1_src_sync_mp_00787770);
        (**(code **)(local_90 + 0x18))();
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      local_90 = local_40;
      local_48 = uVar4;
      local_38 = uVar4;
      do {
        (*(code *)PTR_register_by_ref_00799738)();
        lVar2 = *(longlong *)(lVar1 + 0x88);
        <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>
        ::pop(&local_88,lVar1 + 0x1a0,lVar1 + 0x80);
        lVar5 = local_90;
        if (local_88 != -2) {
          if (local_88 == -1) {
            param_1[0] = -1;
            param_1[1] = '\x01';
          }
          else {
            uStack_55 = uStack_74;
            uStack_51 = uStack_70;
            uStack_4d = uStack_6c;
            uStack_68 = local_87;
            uStack_60 = uStack_7f;
            local_59 = uStack_78;
            (*(code *)PTR_add_permit_00799728)();
            *param_1 = local_88;
            *(undefined8 *)(param_1 + 1) = uStack_68;
            *(ulonglong *)(param_1 + 9) = CONCAT17((undefined1)local_59,uStack_60);
            *(undefined4 *)(param_1 + 0x10) = local_59;
            *(undefined4 *)(param_1 + 0x14) = uStack_55;
            *(undefined4 *)(param_1 + 0x18) = uStack_51;
            *(undefined4 *)(param_1 + 0x1c) = uStack_4d;
            lVar5 = local_90;
          }
LAB_0038d6d0:
          (**(code **)(lVar5 + 0x18))();
          return param_1;
        }
        if (lVar2 == *(longlong *)(lVar1 + 0x1b0)) {
          if ((*(char *)(lVar1 + 0x1b8) == '\0') ||
             (cVar3 = (*(code *)PTR_is_idle_00799720)(), cVar3 == '\0')) {
            param_1[0] = -1;
            param_1[1] = '\0';
          }
          else {
            param_1[0] = -1;
            param_1[1] = '\x01';
          }
          goto LAB_0038d6d0;
        }
        (*(code *)PTR_park_00799740)();
      } while( true );
    }
    if ((*(char *)(lVar1 + 0x1b8) == '\0') ||
       (cVar3 = (*(code *)PTR_is_idle_00799720)(), cVar3 == '\0')) {
      param_1[0] = -1;
      param_1[1] = '\0';
      return param_1;
    }
  }
  param_1[0] = -1;
  param_1[1] = '\x01';
  return param_1;
}


