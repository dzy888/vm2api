// 00522060 all_subagents

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::all_subagents */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::all_subagents
          (longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [200];
  
  puVar2 = PTR_memcpy_00799008;
  local_138 = 0;
  local_130 = 8;
  local_128 = 0;
  local_110 = param_1;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    local_108 = *(longlong *)(param_2 + 0x40) * 0x280 + lVar3;
    local_120 = 8;
    do {
      lVar5 = *(longlong *)(lVar3 + 0x100);
      uVar1 = *(ulonglong *)(lVar3 + 0x108);
      if ((ulonglong)(local_138 - local_128) < uVar1) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_138,local_128,uVar1,8,200);
        local_120 = local_130;
LAB_00522119:
        lVar4 = 0;
        local_118 = local_128;
        local_100 = lVar3;
        do {
          <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_core[c0acaeba6ab4c2e0]::clone::Clone>
          ::clone(local_f8,lVar5);
          (*(code *)puVar2)();
          lVar4 = lVar4 + -1;
          lVar5 = lVar5 + 200;
        } while (-lVar4 != uVar1);
        local_128 = local_118 - lVar4;
        lVar3 = local_100;
      }
      else if (uVar1 != 0) goto LAB_00522119;
      lVar3 = lVar3 + 0x280;
    } while (lVar3 != local_108);
  }
  local_110[2] = local_128;
  *local_110 = local_138;
  local_110[1] = local_130;
  return;
}


