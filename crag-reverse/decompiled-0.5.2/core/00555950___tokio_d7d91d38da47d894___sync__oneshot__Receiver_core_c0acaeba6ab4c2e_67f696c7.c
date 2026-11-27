// 00555950 <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
          (undefined8 *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined4 uVar7;
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
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    uVar5 = plVar2[6];
    do {
      LOCK();
      uVar1 = plVar2[6];
      bVar6 = uVar5 == uVar1;
      if (bVar6) {
        plVar2[6] = uVar5 | 4;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
    } while (!bVar6);
    if (((uint)uVar5 & 10) == 8) {
      (**(code **)(plVar2[2] + 0x10))();
    }
    if (((uint)uVar5 & 3) == 1) {
      LOCK();
      plVar2[6] = plVar2[6] & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar5 & 2) != 0) {
      local_28 = plVar2[0x15];
      local_38 = plVar2[0x13];
      lStack_30 = plVar2[0x14];
      local_48 = plVar2[0x11];
      lStack_40 = plVar2[0x12];
      local_58 = plVar2[0xf];
      lStack_50 = plVar2[0x10];
      uVar7 = (undefined4)plVar2[7];
      uStack_94 = *(undefined4 *)((longlong)plVar2 + 0x3c);
      lVar3 = plVar2[7];
      uStack_90 = (undefined4)plVar2[8];
      uStack_8c = *(undefined4 *)((longlong)plVar2 + 0x44);
      lVar4 = plVar2[8];
      local_88 = (undefined4)plVar2[9];
      uStack_84 = *(undefined4 *)((longlong)plVar2 + 0x4c);
      uStack_80 = (undefined4)plVar2[10];
      uStack_7c = *(undefined4 *)((longlong)plVar2 + 0x54);
      local_78 = (undefined4)plVar2[0xb];
      uStack_74 = *(undefined4 *)((longlong)plVar2 + 0x5c);
      uStack_70 = (undefined4)plVar2[0xc];
      uStack_6c = *(undefined4 *)((longlong)plVar2 + 100);
      local_68 = (undefined4)plVar2[0xd];
      uStack_64 = *(undefined4 *)((longlong)plVar2 + 0x6c);
      uStack_60 = (undefined4)plVar2[0xe];
      uStack_5c = *(undefined4 *)((longlong)plVar2 + 0x74);
      plVar2[7] = -2;
      local_98 = uVar7;
      if (lVar3 != -2) {
        if (lVar3 == -1) {
          if ((lVar4 != -1) && (lVar4 != 0)) {
            uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
          }
          if ((CONCAT44(uStack_74,local_78) != -1) && (CONCAT44(uStack_74,local_78) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
          }
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                    (CONCAT44(uStack_5c,uStack_60));
        }
        else {
          <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(&local_98);
        }
      }
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


