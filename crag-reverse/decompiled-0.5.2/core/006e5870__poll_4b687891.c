// 006e5870 poll

/* <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *unaff_RBX;
  longlong *in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar2 = *param_2;
  *param_2 = -1;
  if (lVar2 == -1) {
    lVar4 = (*(code *)PTR_expect_failed_00799440)
                      (param_4,&anon_48246b2c7bc3818a1cbc30620defa29e_34_llvm_17816610714767121267);
    uVar5 = (uint)param_4;
LAB_006e59a9:
    if (uVar5 != 1) goto LAB_006e58d7;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar4 + 0x48) = 0;
  }
  else {
    uStack_80 = (undefined4)param_2[1];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_78 = (undefined4)param_2[2];
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_70 = param_2[3];
    uStack_68 = (longlong *)param_2[4];
    local_60 = param_2[5];
    lVar4 = *in_FS_OFFSET + -0x138;
    bVar1 = *(byte *)(*in_FS_OFFSET + -0xf0);
    uVar5 = (uint)bVar1;
    unaff_RBX = param_1;
    local_88 = lVar2;
    if (bVar1 != 0) goto LAB_006e59a9;
  }
  *(undefined1 *)(lVar4 + 0x44) = 0;
LAB_006e58d7:
  plVar3 = uStack_68;
  local_38 = (undefined4)uStack_68;
  uStack_34 = uStack_68._4_4_;
  uStack_30 = (undefined4)local_60;
  uStack_2c = local_60._4_4_;
  local_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = (undefined4)uStack_70;
  uStack_3c = uStack_70._4_4_;
  local_58 = (undefined4)local_88;
  uStack_54 = local_88._4_4_;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  local_b8 = uStack_78;
  uStack_b4 = uStack_74;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = uStack_80;
  uStack_bc = uStack_7c;
  local_a8 = uStack_68 + 2;
  auVar6 = <tokio[d7d91d38da47d894]::io::blocking::Buf>::read_from::
           <&std[6c98fd8553dbae28]::fs::File>(&local_c8,&local_a8,local_60);
  local_a8 = (longlong *)CONCAT44(uStack_c4,local_c8);
  uStack_a0 = uStack_c0;
  uStack_9c = uStack_bc;
  local_98 = local_b8;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  uStack_8c = uStack_ac;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_007990f8)();
  }
  *unaff_RBX = 0;
  *(undefined1 (*) [16])(unaff_RBX + 1) = auVar6;
  unaff_RBX[3] = local_a8;
  unaff_RBX[4] = CONCAT44(uStack_9c,uStack_a0);
  unaff_RBX[5] = CONCAT44(uStack_94,local_98);
  unaff_RBX[6] = CONCAT44(uStack_8c,uStack_90);
  return unaff_RBX;
}


