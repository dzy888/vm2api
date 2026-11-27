// 005da090 read_last_step_index

/* craggemini_core[66f3c71560d70857]::acp_backend::read_last_step_index */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::read_last_step_index
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_R13;
  undefined1 auVar5 [16];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  conversation_db_path(&local_48,param_1,param_2,param_3,param_4);
  lVar1 = local_48;
  if (local_48 != -1) {
    auVar5 = open_sqlite_readonly(local_40,local_38);
    lVar3 = auVar5._0_8_;
    if (lVar3 != 0) {
      local_48 = 0;
      iVar2 = (**(code **)(lVar3 + 0x10))(&local_48,0xffffffff,0);
      if (local_48 != 0 && iVar2 == 0) {
        iVar2 = (**(code **)(lVar3 + 0x20))();
        if (iVar2 == 100) {
          unaff_R13 = (**(code **)(lVar3 + 0x28))();
          (**(code **)(lVar3 + 0x40))();
          if (auVar5._8_8_ != 0) {
            (**(code **)(lVar3 + 0x48))();
          }
          if (lVar1 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          uVar4 = 1;
          goto LAB_005da188;
        }
        (**(code **)(lVar3 + 0x40))();
      }
      if (auVar5._8_8_ != 0) {
        (**(code **)(lVar3 + 0x48))();
      }
    }
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  uVar4 = 0;
LAB_005da188:
  auVar5._8_8_ = unaff_R13;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


