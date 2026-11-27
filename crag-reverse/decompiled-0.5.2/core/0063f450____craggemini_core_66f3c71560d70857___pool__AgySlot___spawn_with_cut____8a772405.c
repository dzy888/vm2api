// 0063f450 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}>

/* tokio[d7d91d38da47d894]::time::timeout::timeout::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}>
    */

undefined8 * __rustcall
tokio[d7d91d38da47d894]::time::timeout::timeout::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_>
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined8 local_7e8;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined4 local_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined8 local_770;
  
  (*(code *)PTR_memcpy_00799008)();
  (*(code *)PTR_now_00799170)();
  uVar1 = (*(code *)PTR_checked_add_007991c0)();
  if (param_3 == -1) {
    local_7d8 = 2;
  }
  else {
    (*(code *)PTR_new_timeout_007991c8)(0);
    local_848 = local_7d0;
    uStack_840 = uStack_7c8;
    local_838 = local_7c0;
    uStack_830 = uStack_7b8;
    local_828 = local_7b0;
    uStack_820 = uStack_7a8;
    local_818 = local_7a0;
    uStack_810 = uStack_798;
    local_808 = local_790;
    uStack_800 = uStack_788;
    local_7f8 = local_780;
    uStack_7f4 = uStack_77c;
    uStack_7f0 = uStack_778;
    uStack_7ec = uStack_774;
    local_7e8 = local_770;
    uVar1 = local_780;
  }
  (*(code *)PTR_memcpy_00799008)(uVar1,0x740);
  *param_1 = local_7d8;
  param_1[1] = local_848;
  param_1[2] = uStack_840;
  param_1[3] = local_838;
  param_1[4] = uStack_830;
  param_1[5] = local_828;
  param_1[6] = uStack_820;
  param_1[7] = local_818;
  param_1[8] = uStack_810;
  param_1[9] = local_808;
  param_1[10] = uStack_800;
  param_1[0xb] = CONCAT44(uStack_7f4,local_7f8);
  param_1[0xc] = CONCAT44(uStack_7ec,uStack_7f0);
  param_1[0xd] = local_7e8;
  return param_1;
}


