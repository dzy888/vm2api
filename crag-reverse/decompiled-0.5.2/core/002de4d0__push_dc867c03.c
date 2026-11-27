// 002de4d0 push

/* <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>::push
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>::
push(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    <alloc[12e961f32105355]::raw_vec::RawVec<&craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>
    ::grow_one(param_1);
  }
  *(undefined8 *)(param_1[1] + lVar1 * 8) = param_2;
  param_1[2] = lVar1 + 1;
  return;
}


